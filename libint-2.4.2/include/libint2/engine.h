/*
 *  Copyright (C) 2004-2017 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _libint2_src_lib_libint_engine_h_
#define _libint2_src_lib_libint_engine_h_

#ifndef LIBINT2_DOES_NOT_INLINE_ENGINE
# define __libint2_engine_inline inline
#else
# define __libint2_engine_inline
#endif

#include <libint2/util/cxxstd.h>
#if LIBINT2_CPLUSPLUS_STD < 2011
# error "libint2/engine.h requires C++11 support"
#endif

#include <algorithm>
#include <array>
#include <cstring>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <tuple>
#include <utility>
#include <vector>

#include <libint2/cxxapi.h>
#include <libint2/boys_fwd.h>
#include <libint2/shell.h>
#include <libint2/solidharmonics.h>
#include <libint2/util/any.h>
#include <libint2/util/array_adaptor.h>
#include <libint2/util/intpart_iter.h>
#include <libint2/util/compressed_pair.h>
#include <libint2/util/timer.h>

// the engine will be profiled by default if library was configured with
// --enable-profile
#ifdef LIBINT2_PROFILE
#define LIBINT2_ENGINE_TIMERS
// uncomment if want to profile each integral class
#define LIBINT2_ENGINE_PROFILE_CLASS
#endif
// uncomment if want to profile the engine even if library was configured
// without --enable-profile
//#  define LIBINT2_ENGINE_TIMERS

namespace libint2 {

/// contracted Gaussian geminal = \f$ \sum_i c_i \exp(- \alpha r_{12}^2) \f$,
/// represented as a vector of
/// {\f$ \alpha_i \f$, \f$ c_i \f$ } pairs
typedef std::vector<std::pair<double, double>> ContractedGaussianGeminal;

constexpr size_t num_geometrical_derivatives(size_t ncenter,
                                             size_t deriv_order) {
  return (deriv_order > 0)
             ? (num_geometrical_derivatives(ncenter, deriv_order - 1) *
                (3 * ncenter + deriv_order - 1)) /
                   deriv_order
             : 1;
}

template <typename T, unsigned N>
__libint2_engine_inline typename std::remove_all_extents<T>::type* to_ptr1(T (&a)[N]);

/// \brief types of operators (operator sets) supported by Engine.

/// \warning These must start with 0 and appear in same order as elements of
/// BOOST_PP_NBODY_OPERATOR_LIST preprocessor macro (aliases do not need to be included).
/// \warning for the sake of nbody() order operators by # of particles
enum class Operator {
  /// overlap
  overlap = 0,
  /// electronic kinetic energy, i.e. \f$ -\frac{1}{2} \nabla^2 \f$
  kinetic,
  /// Coulomb potential due to point charges
  nuclear,
  /// erf-attenuated point-charge Coulomb operator,
  /// \f$ \mathrm{erf}(\omega r)/r \f$
  erf_nuclear,
  /// erfc-attenuated point-charge Coulomb operator,
  /// \f$ \mathrm{erfc}(\omega r)/r \f$
  erfc_nuclear,
  /// overlap + (Cartesian) electric dipole moment,
  //! \f$ x_O, y_O, z_O \f$, where
  //! \f$ x_O \equiv x - O_x \f$ is relative to
  //! origin \f$ \vec{O} \f$
  emultipole1,
  /// emultipole1 + (Cartesian) electric quadrupole moment,
  //! \f$ x^2, xy, xz, y^2, yz, z^2 \f$
  emultipole2,
  /// emultipole2 + (Cartesian) electric octupole moment,
  //! \f$ x^3, x^2y, x^2z, xy^2, xyz, xz^2, y^3, y^2z, yz^2, z^3 \f$
  emultipole3,
  /// (electric) spherical multipole moments,
  //! \f$ O_{l,m} \equiv \mathcal{N}^{\text{sign}(m)}_{l,|m|} \f$ where \f$ \f$ \mathcal{N}^{\pm}_{l,m} \f$
  //! is defined in J.M. Pérez-Jordá and W. Yang, J Chem Phys 104, 8003 (1996), DOI 10.1063/1.468354 .
  //! To obtain the real solid harmonics \f$ C^m_l \f$ and \f$ S^m_l \f$ defined in https://en.wikipedia.org/wiki/Solid_harmonics
  //! multiply these harmonics by \f$ (-1)^m \sqrt{(2 - \delta_{m,0}) (l + |m|)! (l - |m|)!} \f$ .
  //! The operator set includes multipoles of order up to \f$ l_{\rm max} = \f$ MULTIPOLE_MAX_ORDER (for a total of \f$ (l_{\rm max}+1)^2 \f$ operators),
  //! in the order of increasing \c l , with the operators of same \c l but different \c m ordered according to the solid harmonics ordering
  //! specified at configure time (see macro FOR_SOLIDHARM in shgshell_ordering.h.in). For example, for the CCA standard solid harmonics
  //! ordering the operators will appear in the following order
  //! \f$ \mathcal{N}^+_{0,0} , \mathcal{N}^-_{1,1}, \mathcal{N}^+_{1,0}, \mathcal{N}^+_{1,1}, \mathcal{N}^-_{2,2}, \mathcal{N}^-_{2,1}, \mathcal{N}^+_{2,0}, \mathcal{N}^+_{2,1}, \mathcal{N}^+_{2,2}. \dots \f$ .
  sphemultipole,
  /// \f$ \delta(\vec{r}_1 - \vec{r}_2) \f$
  delta,
  /// (2-body) Coulomb operator = \f$ r_{12}^{-1} \f$
  coulomb,
  /// alias for Operator::coulomb
  r12_m1 = coulomb,
  /// contracted Gaussian geminal
  cgtg,
  /// contracted Gaussian geminal times Coulomb
  cgtg_x_coulomb,
  /// |Delta . contracted Gaussian geminal|^2
  delcgtg2,
  /// anti-Coulomb operator, \f$ r_{12} \f$
  r12,
  /// alias for Operator::r12
  r12_1 = r12,
  /// erf-attenuated Coulomb operator,
  /// \f$ \mathrm{erf}(\omega r)/r \f$
  erf_coulomb,
  /// erfc-attenuated Coulomb operator,
  /// \f$ \mathrm{erfc}(\omega r)/r \f$
  erfc_coulomb,
  // do not modify this
  invalid = -1,
  // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!keep this updated!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  first_1body_oper = overlap,
  last_1body_oper = sphemultipole,
  first_2body_oper = delta,
  last_2body_oper = erfc_coulomb,
  first_oper = first_1body_oper,
  last_oper = last_2body_oper
};

/// @return the particle rank of \c oper
inline int rank(Operator oper) {
  int n = 0;
  if (oper >= Operator::first_1body_oper && oper <= Operator::last_1body_oper)
    n = 1;
  else if (oper >= Operator::first_2body_oper &&
           oper <= Operator::last_2body_oper)
    n = 2;
  return n;
}

namespace detail {
struct default_operator_traits {
  typedef struct {
  } oper_params_type;
  static oper_params_type default_params() { return oper_params_type{}; }
  static constexpr auto nopers = 1u;
  struct _core_eval_type {
    template <typename... params>
    static std::shared_ptr<const _core_eval_type> instance(params...) {
      return nullptr;
    }
  };
  using core_eval_type = const _core_eval_type;
};
}  // namespace detail

/// describes operator set \c Op
/// @tparam Op a value of type Operator
/// \note default describes operator set of size 1 that takes trivial \c
/// oper_params_type and \c core_eval_type;
///       needs to be specialized for some operator types
template <Operator Op>
struct operator_traits : public detail::default_operator_traits {};

template <>
struct operator_traits<Operator::nuclear>
    : public detail::default_operator_traits {
  /// point charges and their positions
  typedef std::vector<std::pair<scalar_type, std::array<scalar_type, 3>>>
      oper_params_type;
  static oper_params_type default_params() { return oper_params_type{}; }
  typedef const libint2::FmEval_Taylor<double, 7> core_eval_type;
};

template <>
struct operator_traits<Operator::erf_nuclear>
    : public detail::default_operator_traits {
  /// the attenuation parameter (0 = zero potential, +infinity = no attenuation)
  /// + point charges and positions
  typedef std::tuple<
      scalar_type, typename operator_traits<Operator::nuclear>::oper_params_type>
      oper_params_type;
  static oper_params_type default_params() {
    return std::make_tuple(0,operator_traits<Operator::nuclear>::default_params());
  }
  typedef const libint2::GenericGmEval<libint2::os_core_ints::erf_coulomb_gm_eval<scalar_type>>
      core_eval_type;
};

template <>
struct operator_traits<Operator::erfc_nuclear>
    : public detail::default_operator_traits {
  /// the attenuation parameter (0 = no attenuation, +infinity = zero potential)
  /// + point charges and positions
  typedef typename operator_traits<Operator::erf_nuclear>::oper_params_type oper_params_type;
  static oper_params_type default_params() {
    return std::make_tuple(0,operator_traits<Operator::nuclear>::default_params());
  }
  typedef const libint2::GenericGmEval<libint2::os_core_ints::erfc_coulomb_gm_eval<scalar_type>>
      core_eval_type;
};

template <>
struct operator_traits<Operator::emultipole1>
    : public detail::default_operator_traits {
  /// Cartesian coordinates of the origin with respect to which the dipole
  /// moment is defined
  typedef std::array<double, 3> oper_params_type;
  static oper_params_type default_params() {
    return oper_params_type{{0,0,0}};
  }
  static constexpr auto nopers = 4u;  //!< overlap + 3 dipole components
};
template <>
struct operator_traits<Operator::emultipole2>
    : public operator_traits<Operator::emultipole1> {
  static constexpr auto nopers =
      operator_traits<Operator::emultipole1>::nopers +
      6;  //!< overlap + 3 dipoles + 6 quadrupoles
};
template <>
struct operator_traits<Operator::emultipole3>
    : public operator_traits<Operator::emultipole1> {
  static constexpr auto nopers =
      operator_traits<Operator::emultipole2>::nopers + 10;
};
template <>
struct operator_traits<Operator::sphemultipole>
    : public operator_traits<Operator::emultipole1> {
  static constexpr auto nopers =
      (MULTIPOLE_MAX_ORDER + 1) * (MULTIPOLE_MAX_ORDER + 1);
};

template <>
struct operator_traits<Operator::coulomb>
    : public detail::default_operator_traits {
  typedef const libint2::FmEval_Chebyshev7<scalar_type> core_eval_type;
};
namespace detail {
template <int K>
struct cgtg_operator_traits : public detail::default_operator_traits {
  typedef libint2::GaussianGmEval<scalar_type, K> core_eval_type;
  typedef ContractedGaussianGeminal oper_params_type;
};
}  // namespace detail
template <>
struct operator_traits<Operator::cgtg>
    : public detail::cgtg_operator_traits<0> {};
template <>
struct operator_traits<Operator::cgtg_x_coulomb>
    : public detail::cgtg_operator_traits<-1> {};
template <>
struct operator_traits<Operator::delcgtg2>
    : public detail::cgtg_operator_traits<2> {};

template <>
struct operator_traits<Operator::delta>
    : public detail::default_operator_traits {
  typedef const libint2::GenericGmEval<libint2::os_core_ints::delta_gm_eval<scalar_type>>
      core_eval_type;
};

template <>
struct operator_traits<Operator::r12>
    : public detail::default_operator_traits {
  typedef const libint2::GenericGmEval<libint2::os_core_ints::r12_xx_K_gm_eval<scalar_type, 1>>
      core_eval_type;
};

template <>
struct operator_traits<Operator::erf_coulomb>
    : public detail::default_operator_traits {
  /// the attenuation parameter (0 = zero potential, +infinity = no attenuation)
  typedef scalar_type oper_params_type;
  static oper_params_type default_params() {
    return oper_params_type{0};
  }
  typedef const libint2::GenericGmEval<libint2::os_core_ints::erf_coulomb_gm_eval<scalar_type>>
      core_eval_type;
};
template <>
struct operator_traits<Operator::erfc_coulomb>
    : public detail::default_operator_traits {
  /// the attenuation parameter (0 = no attenuation, +infinity = zero potential)
  typedef scalar_type oper_params_type;
  static oper_params_type default_params() {
    return oper_params_type{0};
  }
  typedef const libint2::GenericGmEval<libint2::os_core_ints::erfc_coulomb_gm_eval<scalar_type>>
      core_eval_type;
};

/// the runtime version of \c operator_traits<oper>::default_params()
libint2::any
default_params(const Operator& oper);

namespace detail {
template <typename core_eval_type>
using __core_eval_pack_type =
    compressed_pair<std::shared_ptr<core_eval_type>,
                    libint2::detail::CoreEvalScratch<core_eval_type>>;
template <Operator Op>
using core_eval_pack_type =
    __core_eval_pack_type<typename operator_traits<Op>::core_eval_type>;
}

/// types of shell sets supported by Engine, in chemist notation (i.e. '_'
/// separates particles)
/// \warning macro \c BOOST_PP_NBODY_BRAKET_RANK_TUPLE include the ranks of all
/// brakets in \c BraKet
///          and macro \c BOOST_PP_NBODY_BRAKET_MAX_INDEX must be equal to the
///          max value in this enum
enum class BraKet {
  x_x = 0,
  xx_xx,
  xs_xx,
  xx_xs,
  xs_xs,
  invalid = -1,
  first_1body_braket = x_x,
  last_1body_braket = x_x,
  first_2body_braket = xx_xx,
  last_2body_braket = xs_xs,
  first_braket = first_1body_braket,
  last_braket = last_2body_braket
};
#define BOOST_PP_NBODY_BRAKET_MAX_INDEX 4

/// @return rank of \c braket
inline int rank(BraKet braket) {
  int n = 0;
  switch (braket) {
    case BraKet::x_x:
    case BraKet::xs_xs:
      n = 2;
      break;
    case BraKet::xs_xx:
    case BraKet::xx_xs:
      n = 3;
      break;
    case BraKet::xx_xx:
      n = 4;
      break;
    default:
      assert(false && "missing case in switch");
  }
  return n;
}

/// @return the default braket for \c oper
inline BraKet default_braket(const Operator& oper) {
  BraKet result;
  switch (rank(oper)) {
    case 1: {
      result = BraKet::x_x;
    } break;
    case 2: {
      result = BraKet::xx_xx;
    } break;
    default:
      assert(false && "missing case in switch");
      result = BraKet::invalid;
  }
  return result;
}

constexpr size_t nopers_2body = static_cast<int>(Operator::last_2body_oper) -
                                static_cast<int>(Operator::first_2body_oper) +
                                1;
constexpr size_t nbrakets_2body = static_cast<int>(BraKet::last_2body_braket) -
                                  static_cast<int>(BraKet::first_2body_braket) +
                                  1;
constexpr size_t nderivorders_2body = LIBINT2_MAX_DERIV_ORDER + 1;

/**
 * Engine computes integrals of operators (or operator sets) specified by
 * combination of Operator and BraKet.
 * This class deprecates OneBodyEngine and TwoBodyEngine.
 */
class Engine {
 private:
  typedef struct {
  } empty_pod;

 public:
  static constexpr auto max_ntargets =
      std::extent<decltype(std::declval<Libint_t>().targets), 0>::value;
  using target_ptr_vec =
      std::vector<const value_type*, detail::ext_stack_allocator<const value_type*, max_ntargets>>;

  /// creates a default Engine that cannot be used for computing integrals;
  /// to be used as placeholder for copying a usable engine, OR for cleanup of
  /// thread-local data
  Engine()
      : oper_(Operator::invalid),
        braket_(BraKet::invalid),
        primdata_(),
        stack_size_(0),
        lmax_(-1) {
    set_precision(std::numeric_limits<scalar_type>::epsilon());
  }

  // clang-format off
  /// Constructs a (usable) Engine

  /// \param oper a value of Operator type
  /// \param max_nprim the maximum number of primitives per contracted Gaussian
  /// shell
  /// \param max_l the maximum angular momentum of Gaussian shell
  /// \throw Engine::lmax_exceeded if \c max_l exceeds the angular momentum
  /// limit of the library
  /// \param deriv_order if not 0, will compute geometric derivatives of
  /// Gaussian integrals of order \c deriv_order ,
  ///                    (default=0)
  /// \param precision specifies the target precision with which the integrals
  /// will be computed; the default is the "epsilon"
  ///        of \c scalar_type type, given by \c
  ///        std::numeric_limits<scalar_type>::epsilon(). Currently precision control
  ///        is implemented
  ///        for two-body integrals only. The precision control is somewhat
  ///        empirical,
  ///        hence be conservative. \sa set_precision()
  /// \param params a value of type
  /// Engine::operator_traits<oper>::oper_params_type specifying the parameters
  /// of
  ///               the operator set, e.g. position and magnitude of the charges
  ///               creating the Coulomb potential
  ///               for oper == Operator::nuclear, etc.
  /// For most values of \c oper
  ///               this is not needed.
  ///               \sa Engine::operator_traits
  /// \param braket a value of BraKet type
  /// \warning currently only one-contraction Shell objects are supported; i.e.
  /// generally-contracted Shells are not yet supported
  // clang-format on
  template <typename Params = empty_pod>
  Engine(Operator oper, size_t max_nprim, int max_l, int deriv_order = 0,
         scalar_type precision = std::numeric_limits<scalar_type>::epsilon(),
         Params params = empty_pod(), BraKet braket = BraKet::invalid)
      : oper_(oper),
        braket_(braket),
        primdata_(),
        spbra_(max_nprim),
        spket_(max_nprim),
        stack_size_(0),
        lmax_(max_l),
        deriv_order_(deriv_order),
        params_(enforce_params_type(oper, params)) {
    set_precision(precision);
    initialize(max_nprim);
    core_eval_pack_ = make_core_eval_pack(oper);  // must follow initialize() to
                                                  // ensure default braket_ has
                                                  // been set
    init_core_ints_params(params_);
  }

  /// move constructor
  // intel does not accept "move ctor = default"
  Engine(Engine&& other)
      : oper_(other.oper_),
        braket_(other.braket_),
        primdata_(std::move(other.primdata_)),
        spbra_(std::move(other.spbra_)),
        spket_(std::move(other.spket_)),
        stack_size_(other.stack_size_),
        lmax_(other.lmax_),
        hard_lmax_(other.hard_lmax_),
        deriv_order_(other.deriv_order_),
        precision_(other.precision_),
        ln_precision_(other.ln_precision_),
        core_eval_pack_(std::move(other.core_eval_pack_)),
        params_(std::move(other.params_)),
        core_ints_params_(std::move(other.core_ints_params_)),
        targets_(std::move(other.targets_)),
        set_targets_(other.set_targets_),
        scratch_(std::move(other.scratch_)),
        scratch2_(other.scratch2_),
        buildfnptrs_(other.buildfnptrs_) {}

  /// (deep) copy constructor
  Engine(const Engine& other)
      : oper_(other.oper_),
        braket_(other.braket_),
        primdata_(other.primdata_.size()),
        spbra_(other.spbra_),
        spket_(other.spket_),
        stack_size_(other.stack_size_),
        lmax_(other.lmax_),
        deriv_order_(other.deriv_order_),
        precision_(other.precision_),
        ln_precision_(other.ln_precision_),
        core_eval_pack_(other.core_eval_pack_),
        params_(other.params_),
        core_ints_params_(other.core_ints_params_) {
    initialize();
  }

  ~Engine() { finalize(); }

  /// move assignment is default
  Engine& operator=(Engine&& other) {
    oper_ = other.oper_;
    braket_ = other.braket_;
    primdata_ = std::move(other.primdata_);
    spbra_ = std::move(other.spbra_);
    spket_ = std::move(other.spket_);
    stack_size_ = other.stack_size_;
    lmax_ = other.lmax_;
    hard_lmax_ = other.hard_lmax_;
    deriv_order_ = other.deriv_order_;
    precision_ = other.precision_;
    ln_precision_ = other.ln_precision_;
    core_eval_pack_ = std::move(other.core_eval_pack_);
    params_ = std::move(other.params_);
    core_ints_params_ = std::move(other.core_ints_params_);
    targets_ = std::move(other.targets_);
    set_targets_ = other.set_targets_;
    scratch_ = std::move(other.scratch_);
    scratch2_ = other.scratch2_;
    buildfnptrs_ = other.buildfnptrs_;
    return *this;
  }

  /// (deep) copy assignment
  Engine& operator=(const Engine& other) {
    oper_ = other.oper_;
    braket_ = other.braket_;
    primdata_.resize(other.primdata_.size());
    spbra_ = other.spbra_;
    spket_ = other.spket_;
    stack_size_ = other.stack_size_;
    lmax_ = other.lmax_;
    deriv_order_ = other.deriv_order_;
    precision_ = other.precision_;
    ln_precision_ = other.ln_precision_;
    core_eval_pack_ = other.core_eval_pack_;
    params_ = other.params_;
    core_ints_params_ = other.core_ints_params_;
    initialize();
    return *this;
  }

  /// returns the particle rank of the operator
  int operator_rank() const { return rank(oper_); }

  /// rank of the braket
  int braket_rank() const { return rank(braket_); }

  /// resets operator type
  void set_oper(Operator new_oper) {
    if (oper_ != new_oper) {
      if (rank(new_oper) != operator_rank()) braket_ = BraKet::invalid;
      oper_ = new_oper;
      initialize();
    }
  }

  /// resets braket type
  void set_braket(BraKet new_braket) {
    if (braket_ != new_braket) {
      braket_ = new_braket;
      initialize();
    }
  }

  /// resets operator parameters; this may be useful e.g. if need to compute
  /// Coulomb potential
  /// integrals over batches of charges for the sake of parallelism.
  template <typename Params>
  void set_params(const Params& params) {
    params_ = params;
    init_core_ints_params(params_);
    reset_scratch();
  }

  /// returns a vector that will hold pointers to shell sets computed with
  /// Engine::compute()
  /// or other compute functions. Only need to get this vector once, but the
  /// values will change
  /// after every compute() call.
  const target_ptr_vec& results() const { return targets_; }

  /// reports the number of shell sets that each call to compute() produces.
  /// this depends on the order of geometrical derivatives requested and
  /// on the operator set. \sa compute_nshellsets()
  unsigned int nshellsets() const { return targets_.size(); }

  /// Computes target shell sets of integrals.

  /// @return vector of pointers to target shell sets, the number of sets = Engine::nshellsets();
  ///         if the first pointer equals \c nullptr then all elements were screened out.
  /// \note resulting shell sets are stored in row-major order.
  /// \note Call Engine::compute1() or Engine::compute2() directly to avoid extra copies.
  template <typename... ShellPack>
  __libint2_engine_inline const target_ptr_vec& compute(
      const libint2::Shell& first_shell, const ShellPack&... rest_of_shells);

  /// Computes target shell sets of 1-body integrals.
  /// @param[in] s1
  /// @param[in] s2
  /// @return vector of pointers to target shell sets, the number of sets = Engine::nshellsets()
  /// \note resulting shell sets are stored in row-major order
  __libint2_engine_inline const target_ptr_vec& compute1(
      const libint2::Shell& s1, const libint2::Shell& s2);

  /// Computes target shell sets of 2-body integrals, @code  @endcode
  /// @note result is stored in the "chemists"/Mulliken form, @code (bra1 bra2|ket1 ket2) @endcode;
  /// the "physicists"/Dirac bra-ket form is @code <bra1 ket1|bra2 ket2> @endcode, where @c bra1 and @c bra2
  /// refer to particle 1, and @c ket1 and @c ket2 refer to particle 2.
  /// @tparam oper operator
  /// @tparam braket the integral type
  /// @tparam deriv_order the derivative order, values greater than 2 not yet supported
  /// @param[in] bra1 the first shell in the Mulliken bra
  /// @param[in] bra2 the second shell in the Mulliken bra
  /// @param[in] ket1 the first shell in the Mulliken ket
  /// @param[in] ket2 the second shell in the Mulliken ket
  /// @param[in] spbra ShellPair data for shell pair @c {bra1,bra2}
  /// @param[in] spket ShellPair data for shell pair @c {ket1,ket2}
  /// @return vector of pointers to target shell sets, the number of sets = Engine::nshellsets();
  ///         if the first pointer equals \c nullptr then all elements were screened out.
  /// @note the result integrals are packed in shell sets in row-major order
  /// (i.e. function index of shell ket2 has stride 1, function index of shell ket1 has
  /// stride nket2, etc.).
  /// @note internally the integrals are evaluated with shells permuted to according to the canonical
  /// order predefined at the library generation time (see macro @c LIBINT_SHELL_SET ). To minimize the overhead it is recommended to
  /// organize your shell loop nests in the order best suited for your particular instance of Libint library.
  template <Operator oper, BraKet braket, size_t deriv_order>
  __libint2_engine_inline const target_ptr_vec& compute2(const Shell& bra1,
                                                         const Shell& bra2,
                                                         const Shell& ket1,
                                                         const Shell& ket2,
                                                         const ShellPair* spbra = nullptr,
                                                         const ShellPair* spket = nullptr);

  typedef const target_ptr_vec& (Engine::*compute2_ptr_type)(const Shell& bra1,
                                                             const Shell& bra2,
                                                             const Shell& ket1,
                                                             const Shell& ket2,
                                                             const ShellPair* spbra,
                                                             const ShellPair* spket);

  /** this specifies target precision for computing the integrals.
   *  target precision \f$ \epsilon \f$ is used in 3 ways:
   *  (1) to screen out primitive pairs in ShellPair object for which
   *      \f$ {\rm scr}_{12} = \max|c_1| \max|c_2| \exp(-\rho_{12}
   * |AB|^2)/\gamma_{12} < \epsilon \f$ ;
   *  (2) to screen out primitive quartets outside compute_primdata() for which
   * \f$ {\rm scr}_{12} {\rm scr}_{34} <  \epsilon \f$;
   *  (3) to screen out primitive quartets inside compute_primdata() for which
   * the prefactor of \f$ F_m(\rho, T) \f$ is smaller
   *      than \f$ \epsilon \f$ .
   */
  void set_precision(scalar_type prec) {
    if (prec <= 0.) {
      precision_ = 0.;
      ln_precision_ = std::numeric_limits<scalar_type>::lowest();
    } else {
      precision_ = prec;
      ln_precision_ = std::log(precision_);
    }
  }
  /// @return the target precision for computing the integrals
  /// @sa set_precision(scalar_type)
  scalar_type precision() const { return precision_; }

  void print_timers() {
#ifdef LIBINT2_ENGINE_TIMERS
    std::cout << "timers: prereq = " << timers.read(0);
#ifndef LIBINT2_PROFILE  // if libint's profiling was on, engine's build timer
                         // will include its overhead
    // do not report it, detailed profiling from libint will be printed below
    std::cout << " build = " << timers.read(1);
#endif
    std::cout << " tform = " << timers.read(2) << std::endl;
#endif
#ifdef LIBINT2_PROFILE
    std::cout << "build timers: hrr = " << primdata_[0].timers->read(0)
              << " vrr = " << primdata_[0].timers->read(1) << std::endl;
#endif
#ifdef LIBINT2_ENGINE_TIMERS
#ifdef LIBINT2_ENGINE_PROFILE_CLASS
    for (const auto& p : class_profiles) {
      printf("{\"%s\", %10.5lf, %10.5lf, %10.5lf, %10.5lf, %ld, %ld},\n",
             p.first.to_string().c_str(), p.second.prereqs, p.second.build_vrr,
             p.second.build_hrr, p.second.tform, p.second.nshellset,
             p.second.nprimset);
    }
#endif
#endif
  }

  /// Exception class to be used when the angular momentum limit is exceeded.
  class lmax_exceeded : virtual public std::runtime_error {
   public:
    lmax_exceeded(const char* task_name, size_t lmax_limit,
                  size_t lmax_requested)
        : std::runtime_error(
              "Engine::lmax_exceeded -- angular momentum limit exceeded"),
          lmax_limit_(lmax_limit),
          lmax_requested_(lmax_requested) {
      strncpy(task_name_, task_name, 64);
      task_name_[64] = '\0';
    }
    ~lmax_exceeded() noexcept {}

    const char* task_name() const {
      return static_cast<const char*>(task_name_);
    }
    size_t lmax_limit() const { return lmax_limit_; }
    size_t lmax_requested() const { return lmax_requested_; }

   private:
    char task_name_[65];
    size_t lmax_limit_;
    size_t lmax_requested_;
  };

 private:
  Operator oper_;
  BraKet braket_;
  std::vector<Libint_t> primdata_;
  ShellPair spbra_, spket_;
  size_t stack_size_;  // amount allocated by libint2_init_xxx in
                       // primdata_[0].stack
  int lmax_;
  int hard_lmax_;  // max L supported by library for this operator type + 1
  int deriv_order_;
  scalar_type precision_;
  scalar_type ln_precision_;

  any core_eval_pack_;

  /// operator params
  any params_;  // operator params
  /// for some operators need core ints params that are computed from operator
  /// params,
  /// e.g. integrals of \f$ f_{12}^2 \f$ are computed from parameters of \f$
  /// f_{12} \f$
  any core_ints_params_;
  /// makes core ints params from the operator params
  void init_core_ints_params(const any& params);

  /// pointers to target shell sets, size is updated by reset_scratch()
  /// targets_.size() is returned by nshellsets()
  target_ptr_vec targets_;
  /// true if targets_ does not point primdata_[0].targets
  /// hence must set its contents explicitly
  bool set_targets_;

  std::vector<value_type>
      scratch_;       // for transposes and/or transforming to solid harmonics
  value_type* scratch2_;  // &scratch_[0] points to the first block large enough to
                      // hold all target ints
  // scratch2_ points to second such block. It could point into scratch_ or at
  // primdata_[0].stack
  typedef void (*buildfnptr_t)(const Libint_t*);
  buildfnptr_t* buildfnptrs_;

  /// reports the number of shell sets that each call to compute() produces.
  unsigned int compute_nshellsets() const {
    const unsigned int num_operator_geometrical_derivatives =
        (oper_ == Operator::nuclear || oper_ == Operator::erf_nuclear ||
         oper_ == Operator::erfc_nuclear)
            ? this->nparams()
            : 0;
    const auto ncenters = braket_rank() + num_operator_geometrical_derivatives;
    return nopers() * num_geometrical_derivatives(ncenters, deriv_order_);
  }

  void reset_scratch() {
    const auto nshsets = compute_nshellsets();
    targets_.resize(nshsets);
    set_targets_ = (&targets_[0] != const_cast<const value_type**>(primdata_[0].targets));
    const auto ncart_max = (lmax_ + 1) * (lmax_ + 2) / 2;
    const auto target_shellset_size =
        nshsets * std::pow(ncart_max, braket_rank());
    // need to be able to hold 2 sets of target shellsets: the worst case occurs
    // when dealing with
    // 1-body Coulomb ints derivatives ... have 2+natom 1st-order derivative sets
    // (and many more of 2nd and higher) that are stored in scratch
    // then need to transform to solids. To avoid copying back and forth make
    // sure that there is enough
    // room to transform all ints and save them in correct order in single pass
    const auto need_extra_large_scratch = stack_size_ < target_shellset_size;
    scratch_.resize(need_extra_large_scratch ? 2 * target_shellset_size
                                             : target_shellset_size);
    scratch2_ = need_extra_large_scratch ? &scratch_[target_shellset_size]
                                         : primdata_[0].stack;
  }

  __libint2_engine_inline void compute_primdata(Libint_t& primdata,
                                                const Shell& s1,
                                                const Shell& s2, size_t p1,
                                                size_t p2, size_t oset);

  /// 3-dim array of pointers to help dispatch efficiently based on oper_,
  /// braket_, and deriv_order_
  __libint2_engine_inline const std::vector<Engine::compute2_ptr_type>&
  compute2_ptrs() const;

  // max_nprim=0 avoids resizing primdata_
  __libint2_engine_inline void initialize(size_t max_nprim = 0);
  // generic _initializer
  __libint2_engine_inline void _initialize();

  void finalize() {
    if (primdata_.size() != 0) {
      libint2_cleanup_default(&primdata_[0]);
    }
  }  // finalize()

  //-------
  // utils
  //-------
  unsigned int nparams() const;
  unsigned int nopers() const;
  /// if Params == operator_traits<oper>::oper_params_type, will return
  /// \c any(params)
  /// else will set return \c any initialized with default value for
  /// \c operator_traits<type>::oper_params_type
  /// @param throw_if_wrong_type if true, and Params !=
  /// operator_traits<type>::oper_params_type, will throw std::bad_cast
  template <typename Params>
  static any enforce_params_type(
      Operator oper, const Params& params,
      bool throw_if_wrong_type = !std::is_same<Params, empty_pod>::value);
  /// @return core eval pack corresponding to
  /// operator_traits<oper>::core_eval_type
  any make_core_eval_pack(Operator oper) const;

  //-------
  // profiling
  //-------
  static const bool skip_core_ints = false;
};  // struct Engine


}  // namespace libint2

#ifndef LIBINT2_DOES_NOT_INLINE_ENGINE
#include "./engine.impl.h"
#endif

#endif /* _libint2_src_lib_libint_engine_h_ */

