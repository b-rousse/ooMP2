// standard C++ headers
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>

#include <array>

#include <algorithm>

// Eigen matrix algebra library
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <unsupported/Eigen/MatrixFunctions>

//tensor class from eigen
#include <unsupported/Eigen/CXX11/Tensor>

#include <libint2.hpp>
#include "basis_set.h"

std::vector<libint2::Shell> make_aug_cc_pvdz_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  bool Spherical_H = false;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pVDZ
      shells.push_back(
          {
        {13.0100000, 1.9620000, 0.4446000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0196850, 0.1379770, 0.4781480}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.1220000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0297400},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7270000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1410000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

  }

  return shells;

}

std::vector<libint2::Shell> make_aug_cc_pvtz_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  bool Spherical_H = false;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pVTZ

    shells.push_back(
        {
      {33.8700000, 5.0950000, 1.1590000}, // exponents of primitive Gaussians
      {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
          {0, false, {0.0060680, 0.0453080, 0.2028220}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
        }
    );
    shells.push_back(
        {
      {0.3258000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.1027000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0252600},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.4070000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.3880000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.1020000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.0570000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.2470000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_aug_cc_pvqz_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  bool Spherical_H = true;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pVQZ

    shells.push_back(
        {
      {82.6400000, 12.4100000, 2.8240000}, // exponents of primitive Gaussians
      {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
          {0, false, {0.0020060, 0.0153430, 0.0755790}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
        }
    );
    shells.push_back(
        {
      {0.7977000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.2581000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0898900},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0236300},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.2920000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.8380000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.2920000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0848000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.0620000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.6620000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.1900000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.3970000},
      {
          {3, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.3600000},
      {
          {3, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_aug_cc_pv5z_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  bool Spherical_H = true;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pV5Z
    shells.push_back(
        {
      {402.0000000, 60.2400000, 13.7300000, 3.9050000}, // exponents of primitive Gaussians
      {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
          {0, false, {0.0002790, 0.0021650, 0.0112010, 0.0448780}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
        }
    );
    shells.push_back(
        {
      {1.2830000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.4655000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.1811000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0727900},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0207000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.5160000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.7120000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.6490000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.2460000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0744000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.9500000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.2060000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.4930000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.1560000},
      {
          {2, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.5060000},
      {
          {3, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.8750000},
      {
          {3, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.2740000},
      {
          {3, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.3580000},
      {
          {4, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.5430000},
      {
          {4, Spherical_H, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_aug_cc_pv6z_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  bool Spherical_H = true;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pV6Z
      shells.push_back(
          {
        {1776.7755600, 254.0177120, 54.6980390, 15.0183440, 4.91507800},
        {
            {0, false, {0.0000440, 0.0003720, 0.0020940, 0.0088630, 0.0305400}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.79492400},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.71071600},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.30480200},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.13804600},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.06215700},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.018900},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {8.6490000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.4300000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.3600000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5390000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2140000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.067000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {4.4530000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.9580000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8610000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3780000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.126000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {4.1000000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.7800000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7730000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.245000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.1990000},
        {
            {4, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.3260000},
        {
            {4, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.407000},
        {
            {4, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.6530000},
        {
            {5, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
              shells.push_back(
          {
        {0.682000},
        {
            {5, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_6s3p1delectron_es_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {39.909},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {6.0215},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {1.3866},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.39899},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.12515},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.026618},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
        {
      {0.45503},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.11310},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.043333},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.076506},
          {
              {2, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    break;

  }
  return shells;

}

std::vector<libint2::Shell> make_6s3p1d_es_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {3.7301},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.65793},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.19757},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.092797},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.049211},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.021165},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
        {
      {0.16282},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.066130},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.024500},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.067043},
          {
              {2, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    break;

  }
  return shells;

}
