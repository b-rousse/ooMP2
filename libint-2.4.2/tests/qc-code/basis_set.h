struct Atoms {
  int atomic_number;
  double x, y, z;
};

std::vector<libint2::Shell> make_cc_pvdz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_sto3g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_svp_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_631g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6311g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pvdz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_cc_pvtz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pvtz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_cc_pvqz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pvqz_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_sp_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s3p1d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_7s5p3d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s3p1delectron_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s3p1delectron_es_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s3p1d_es_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_pcseg_0_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8spd_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_10spd_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8spdf_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_cc_pvdz_basis_qh(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_aug_cc_pvdz_basis_qh(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pvtz_basis_qh(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pvqz_basis_qh(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pv5z_basis_qh(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_aug_cc_pv6z_basis_qh(const std::vector<Atoms>& atoms);

//basis set convergence
std::vector<libint2::Shell> make_2s_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_4s_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s2p_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s4p_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s6p_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p2d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p4d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p6d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d2f_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d4f_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d6f_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d8f_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_16s16p16dw_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_16s16p16dd_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_8s8p8d4f_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d8f8g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d8f4g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_8s8p8d4f4g_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_6s_r_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p_r_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d_r_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d6f_r_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_6s_l_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p_l_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d_l_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d6f_l_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_4s_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_4s4p_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_4s4p4d_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_4s4p4d4f_lr_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_6s_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d_lr_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d6f_lr_basis(const std::vector<Atoms>& atoms);

std::vector<libint2::Shell> make_5s5p5d5f_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_6s6p6d6f4g_basis(const std::vector<Atoms>& atoms);
std::vector<libint2::Shell> make_5s5p5d5f4g_basis(const std::vector<Atoms>& atoms);
