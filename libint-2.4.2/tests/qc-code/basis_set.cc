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

std::vector<libint2::Shell> make_cc_pvdz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  bool Spherical_H = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

    //cc-pVDZ
    case 0: // Z=1: hydrogen
      shells.push_back(
          {
        {13.0100000, 1.9620000, 0.4446000, 0.1220000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0196850, 0.1379770, 0.4781480, 0.5012400}}
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
        {0.7270000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //cc-pVDZ
    case 1: // Z=1: hydrogen
      shells.push_back(
          {
        {13.0100000, 1.9620000, 0.4446000, 0.1220000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0196850, 0.1379770, 0.4781480, 0.5012400}}
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
        {0.7270000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;


    //aug-cc-pVDZ
    /*case 0: // Z=1: hydrogen
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

      break;*/


      //cc-pVTZ
    /*case 0: // Z=1: hydrogen
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
        {1.0570000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

          break;*/

      //aug-cc-pVTZ
      /*    case 0: // Z=1: hydrogen
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

      break;*/

      //cc-pVQZ
       /*  case 0: // Z=1: hydrogen
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
        {1.3970000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

      //aug-cc-pVQZ
      /*case 0: // Z=1: hydrogen
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

      break;*/

      // //cc-pV5Z
      /*case 0: // Z=0: quantum hydrogen
        shells.push_back(
            {
          {402.0000000, 60.2400000, 13.7300000, 3.9050000},
          {
              {0, false, {0.0002790, 0.0021650, 0.0112010, 0.0448780}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
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
          {2.3580000},
          {
              {4, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/

      //aug-cc-pV5Z
      /*case 0: // Z=0: quantum hydrogen
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

      break;*/

      //cc-pV6Z
      /*case 0:
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
          {2.6530000},
          {
              {5, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/

      //aug-cc-pV6Z
      /*case 0:
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

        break;*/

    case 6: // Z=6: carbon
      shells.push_back(
          {
        {6665.0000000, 1000.0000000, 228.0000000, 64.7100000, 21.0600000, 7.4950000, 2.7970000, 0.5215000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0006920, 0.0053290, 0.0270770, 0.1017180, 0.2747400, 0.4485640, 0.2850740, 0.0152040}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {6665.0000000, 1000.0000000, 228.0000000, 64.7100000, 21.0600000, 7.4950000, 2.7970000, 0.5215000}, // exponents of primitive Gaussians
        {
            {0, false, {-0.0001460, -0.0011540, -0.0057250, -0.0233120, -0.0639550, -0.1499810, -0.1272620, 0.5445290}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1596000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {9.4390000, 2.0020000, 0.5456000},
        {
            {1, false, {0.0381090, 0.2094800, 0.5085570}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1517000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5500000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 7: // Z=7: nitrogen
      shells.push_back(
          {
        {9046.0000000, 1357.0000000, 309.3000000, 87.7300000, 28.5600000, 10.2100000, 3.8380000, 0.7466000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0007000, 0.0053890, 0.0274060, 0.1032070, 0.2787230, 0.4485400, 0.2782380, 0.0154400}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {9046.0000000, 1357.0000000, 309.3000000, 87.7300000, 28.5600000, 10.2100000, 3.8380000, 0.7466000}, // exponents of primitive Gaussians
        {
            {0, false, {-0.0001530, -0.0012080, -0.005992, -0.0245440, -0.0674590, -0.1580780, -0.1218310, 0.5490030}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2248000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {13.5500000, 2.9170000, 0.7973000},
        {
            {1, false, {0.0399190, 0.2171690, 0.5103190}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2185000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8170000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;
      /*
      //aug-cc-pVDZ
    case 6: // Z=6: carbon
          shells.push_back(
              {
            {6665.00000000,
              1000.00000000,
              228.00000000,
              64.71000000,
              21.06000000,
              7.49500000,
              2.79700000,
              0.52150000}, // exponents of primitive Gaussians
            {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                {0, false, {0.00069200,
                    0.00532900,
                    0.02707700,
                    0.10171800,
                    0.27474000,
                    0.44856400,
                    0.28507400,
                    0.01520400}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {6665.00000000,
              1000.00000000,
              228.00000000,
              64.71000000,
              21.06000000,
              7.49500000,
              2.79700000,
              0.52150000}, // exponents of primitive Gaussians
            {
                {0, false, {-0.00014600,
                    -0.00115400,
                    -0.00572500,
                    -0.02331200,
                    -0.06395500,
                    -0.14998100,
                    -0.12726200,
                    0.54452900}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.15960000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.04690000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {9.43900000,
              2.00200000,
              0.54560000},
            {
                {1, false, {0.03810900,
                    0.20948000,
                    0.50855700}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1517000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.04041000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.5500000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.15100000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVDZ
        case 7: // Z=7: nitrogen
              shells.push_back(
                  {
                {9046.00000000,
                  1357.00000000,
                  309.30000000,
                  87.73000000,
                  28.56000000,
                  10.21000000,
                  3.83800000,
                  0.74660000}, // exponents of primitive Gaussians
                {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                    {0, false, {0.0007000,
                        0.0053890,
                        0.0274060,
                        0.1032070,
                        0.2787230,
                        0.4485400,
                        0.2782380,
                        0.0154400}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
                  }
              );
              shells.push_back(
                  {
                {9046.00000000,
                  1357.00000000,
                  309.30000000,
                  87.73000000,
                  28.56000000,
                  10.21000000,
                  3.83800000,
                  0.74660000}, // exponents of primitive Gaussians
                {
                    {0, false, {-0.0001530,
                        -0.0012080,
                        -0.0059920,
                        -0.0245440,
                        -0.0674590,
                        -0.1580780,
                        -0.1218310,
                        0.5490030}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.22480000},
                {
                    {0, false, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.06124000},
                {
                    {0, false, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {13.55000000,
                  2.91700000,
                  0.79730000},
                {
                    {1, false, {0.0399190,
                        0.2171690,
                        0.5103190}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.21850000},
                {
                    {1, false, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.05611000},
                {
                    {1, false, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.81700000},
                {
                    {2, Spherical, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );
              shells.push_back(
                  {
                {0.23000000},
                {
                    {2, Spherical, {1.0000000}}
                },
                {{atoms[a].x, atoms[a].y, atoms[a].z}}
                  }
              );

              break;*/

    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {11720.0000000, 1759.0000000, 400.8000000, 113.7000000, 37.0300000, 13.2700000, 5.0250000, 1.0130000, 0.3023000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0007100, 0.0054700, 0.0278370, 0.1048000, 0.2830620, 0.4487190, 0.2709520, 0.0154580, -0.0025850}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {11720.0000000, 1759.0000000, 400.8000000, 113.7000000, 37.0300000, 13.2700000, 5.0250000, 1.0130000, 0.3023000}, // exponents of primitive Gaussians
        {
            {0, false, {-0.0001600, -0.0012630, -0.0062670, -0.0257160, -0.0709240, -0.1654110, -0.1169550, 0.5573680, 0.5727590}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3023000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {17.7000000, 3.8540000, 1.0460000, 0.2753000},
        {
            {1, false, {0.0430180, 0.2289130, 0.5087280, 0.4605310}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2753000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.1850000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 9: // Z=9: fluorine
      shells.push_back(
          {
        {14710.0000000, 2207.0000000, 502.8000000, 142.6000000, 46.4700000, 16.7000000, 6.3560000, 1.3160000, 0.3897000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0007210, 0.0055530, 0.0282670, 0.1064440, 0.2868140, 0.4486410, 0.2647610, 0.0153330, -0.0023320}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {14710.0000000, 2207.0000000, 502.8000000, 142.6000000, 46.4700000, 16.7000000, 6.3560000, 1.3160000, 0.3897000},
        {
            {0, false, {-0.0001650, -0.0013080, -0.0064950, -0.0266910, -0.0736900, -0.1707760, -0.1123270, 0.5628140, 0.5687780}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3897000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {22.6700000, 4.9770000, 1.3470000, 0.3471000},
        {
            {1, false, {0.0448780, 0.2357180, 0.5085210, 0.4581200}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3471000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.6400000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 10: // Z=10: neon
      shells.push_back(
          {
        {17880.0000000, 2683.0000000, 611.5000000, 173.5000000, 56.6400000, 20.4200000, 7.8100000, 1.6530000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0007380, 0.0056770, 0.0288830, 0.1085400, 0.2909070, 0.4483240, 0.2580260, 0.0150630}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {17880.0000000, 2683.0000000, 611.5000000, 173.5000000, 56.6400000, 20.4200000, 7.8100000, 1.6530000},
        {
            {0, false, {-0.0003321491, -0.0026205019, -0.0130098168, -0.0534200031, -0.1471652242, -0.3383807572, -0.2067010192, 1.0950299235}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.4869000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.04},
        {
            {0, false, {1}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {28.3900000, 6.2700000, 1.6950000},
        {
            {1, false, {0.0661719866, 0.3448532975, 0.7304576382}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.4317000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.03},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.2020000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    default:
      throw "do not know cc-pVDZ basis for this Z";
    }
  }

  return shells;

}

std::vector<libint2::Shell> make_sto3g_basis(const std::vector<Atoms>& atoms) {

  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // STO-3G basis set
    // cite: W. J. Hehre, R. F. Stewart, and J. A. Pople, The Journal of Chemical Physics 51, 2657 (1969)
    //       doi: 10.1063/1.1672392
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {
    case 0: // Z=0: quantum hydrogen
      shells.push_back(
          {
        {3.425250910, 0.623913730, 0.168855400}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      break;


    case 1: // Z=1: hydrogen
      shells.push_back(
          {
        {3.425250910, 0.623913730, 0.168855400}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      break;

      //aug-pcseg-0
    /*case 4:
      shells.push_back(
          {
        {196.1270000000, 29.6333000000, 6.5533100000, 1.6679900000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0195124399, 0.1331108337, 0.4446691935, 0.5480983586}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.1562520000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0560242000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0187430000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5776310000, 0.1024590000},
        {
            {1, false, {0.3441205552, 0.8016935790}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0256150000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

      //aug-pcseg-2
    /*case 4:
      shells.push_back(
          {
        {2944.7500000000, 441.8790000000, 100.6240000000, 28.4712000000, 9.1444400000, 3.1766400000, 1.1227500000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0006862638, 0.0052966548, 0.0269759908, 0.1014696324, 0.2713650297, 0.4436490335, 0.3083706829}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {1.9230300000, 0.1914130000},
        {
            {0, false, {-0.1892572230, 1.0676441592}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0833307000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0374215000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
                {
              {0.0154200000},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
      shells.push_back(
          {
        {3.7237900000, 0.7520880000, 0.2043750000},
        {
            {1, false, {0.0614681997, 0.3184527314, 0.7555404194}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0548729000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
                {
              {0.0139820000},
              {
                  {1, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
      shells.push_back(
                {
              {0.3900000000},
              {
                  {2, true, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
      shells.push_back(
                {
              {0.0419460000},
              {
                  {2, true, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );

      break;*/

      //Mikes basis set from the Kurt's paper
    case 4:
          shells.push_back(
              {
            {3067.300000000000,
              460.240000000000,
              104.800000000000,
              29.657000000000,
              9.536500000000,
              3.310600000000,
              1.180400000000}, // exponents of primitive Gaussians
            {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                {0, false, {0.000651080262,
                    0.005026882272,
                    0.025632438059,
                    0.096830334711,
                    0.261185121155,
                    0.440733706082,
                    0.325609854724}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
                        {
                      {460.240000000000,
                        104.800000000000,
                        29.657000000000,
                        9.536500000000,
                        3.310600000000,
                        1.180400000000,
                        0.268710000000}, // exponents of primitive Gaussians
                      {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                          {0, false, {0.000015257342,
                              -0.000400057751,
                              -0.003645334221,
                              -0.040211124380,
                              -0.192611044191,
                              -0.449187842795,
                              1.247140039267}}
                      },
                      {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
                        }
                    );
          shells.push_back(
              {
            {0.117740000000},
            {
                {0, false, {1.000000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.044685000000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.015760000000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {8.240000000000,
              1.790000000000,
              0.450000000000},
            {
                {1, false, {0.035723579413,
                    0.258140044276,
                    0.819593534939}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.140000000000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
                    {
                  {0.047280000000},
                  {
                      {1, false, {1.0000000}}
                  },
                  {{atoms[a].x, atoms[a].y, atoms[a].z}}
                    }
                );
          shells.push_back(
                    {
                  {0.390000000000},
                  {
                      {2, Spherical, {1.0000000}}
                  },
                  {{atoms[a].x, atoms[a].y, atoms[a].z}}
                    }
                );
          shells.push_back(
                    {
                  {0.063040000000},
                  {
                      {2, Spherical, {1.0000000}}
                  },
                  {{atoms[a].x, atoms[a].y, atoms[a].z}}
                    }
                );

          break;

    case 6: // Z=6: carbon
      shells.push_back(
          {
        {71.616837000, 13.045096000, 3.530512200},
        {
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.941249400, 0.683483100, 0.222289900},
        {
            {0, false, {-0.09996723, 0.39951283, 0.70011547}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.941249400, 0.683483100, 0.222289900},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.15591627, 0.60768372, 0.39195739}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 16: // Z=16: S
      shells.push_back(
          {
        {533.1257359,
          97.1095183,
          26.28162542},
        {
            {0, false, {0.154328967,
                0.535328142,
                0.444634542}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {33.32975173,
          7.745117521,
          2.518952599},
        {
            {0, false, {-0.099967229,
                0.399512826,
                0.700115469}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {33.32975173,
          7.745117521,
          2.518952599},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.155916275,
                0.607683719,
                0.391957393}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.029194274,
          0.566140052,
          0.221583379},
        {
            {0, false, {-0.219620369,
                0.225595434,
                0.900398426}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.029194274,
          0.566140052,
          0.221583379},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.010587604,
                0.595167005,
                0.462001012}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 7: // Z=7: nitrogen
      shells.push_back(
          {
        {99.106169000, 18.052312000, 4.885660200},
        {
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.780455900, 0.878496600, 0.285714400},
        {
            {0, false, {-0.09996723, 0.39951283, 0.70011547}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.780455900, 0.878496600, 0.285714400},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.15591627, 0.60768372, 0.39195739}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {130.709320000, 23.808861000, 6.443608300},
        {
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {5.033151300, 1.169596100, 0.380389000},
        {
            {0, false, {-0.09996723, 0.39951283, 0.70011547}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {5.033151300, 1.169596100, 0.380389000},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.15591627, 0.60768372, 0.39195739}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 10: // Z=10: neon
          shells.push_back(
              {
            {207.0156100, 37.7081510, 10.2052970},
            {
                {0, false, {0.15432897, 0.53532814, 0.44463454}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {8.2463151, 1.9162662, 0.6232293},
            {
                {0, false, {-0.09996723, 0.39951283, 0.70011547}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
                        {
                      {0.04},
                      {
                          {0, false, {1}}
                      },
                      {{atoms[a].x, atoms[a].y, atoms[a].z}}
                        }
                    );
          shells.push_back(
              {
            {8.2463151, 1.9162662, 0.6232293},
            { // contraction 0: p shell (l=1), spherical=false
                {1, false, {0.15591627, 0.60768372, 0.39195739}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
                        {
                      {0.03},
                      { // contraction 0: p shell (l=1), spherical=false
                          {1, false, {1}}
                      },
                      {{atoms[a].x, atoms[a].y, atoms[a].z}}
                        }
                    );
          break;

    case 9: // Z=9: fluorine
      shells.push_back(
          {
        {166.6791300, 30.3608120, 8.2168207},
        {
            {0, false, {0.15432897, 0.53532814, 0.44463454}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {6.4648032, 1.5022812, 0.4885885},
        {
            {0, false, {-0.09996723, 0.39951283, 0.70011547}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {6.4648032, 1.5022812, 0.4885885},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.15591627, 0.60768372, 0.39195739}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    default:
      throw "do not know STO-3G basis for this Z";
    }

  }

  return shells;
}

std::vector<libint2::Shell> make_svp_basis(const std::vector<Atoms>& atoms) {

  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // SVP basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {
    case 0: // Z=0: quantum hydrogen
      shells.push_back(
          {
        { 1.30107010000000e+01,
          1.96225720000000e+00,
          4.44537960000000e-01}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.19682158e-01,
                0.13796524,
                0.47831935}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {1.21949620000000e-01},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 1: // Z=0: quantum hydrogen
      shells.push_back(
          {
        { 1.30107010000000e+01,
          1.96225720000000e+00,
          4.44537960000000e-01}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.19682158e-01,
                0.13796524,
                0.47831935}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {1.21949620000000e-01},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {2.26617677850000e+03,
          3.40870101910000e+02,
          7.73631351700000e+01,
          2.14796449400000e+01,
          6.65894331000000e+00},
        {
            {0, false, {-0.53431809926e-02,
                -0.39890039230e-01,
                -0.17853911985,
                -0.46427684959,
                -0.44309745172}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {8.09759760000000e-01},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.55307720000000e-01},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.77215043200000e+01,
          3.86355054000000e+00,
          1.04809209000000e+00},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {0.43394573193e-01,
                0.23094120765,
                0.51375311064}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.76415440000000e-01},
        { // contraction 0: p shell (l=1), spherical=false
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

    default:
      throw "do not know SVP basis for this Z";
    }

  }

  return shells;
}

std::vector<libint2::Shell> make_631g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // cc-pVDZ basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {
    case 1: // Z=1: hydrogen
      shells.push_back(
          {
        {18.7311370, 2.8253937, 0.6401217}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.03349460, 0.23472695, 0.81375733}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.1612778},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      case 0: // Z=1: hydrogen
        shells.push_back(
            {
          {18.7311370, 2.8253937, 0.6401217}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.03349460, 0.23472695, 0.81375733}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
            }
        );
        shells.push_back(
            {
          {0.1612778},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;

    case 6: // Z=1: hydrogen
      shells.push_back(
          {
        {3047.524900000000,
          457.369510000000,
          103.948690000000,
          29.210155000000,
          9.286663000000,
          3.163927000000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.00183470020,
                0.01403730120,
                0.06884260610,
                0.23218442060,
                0.46794134160,
                0.36231203220}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {7.868272400000,
          1.881288500000,
          0.544249300000},
        {
            {0, false, {-0.11933240860,
                -0.16085421160,
                1.14345648260}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.168714400000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {7.868272400000,
          1.881288500000,
          0.544249300000},
        {
            {1, false, {0.06899909560,
                0.31642397980,
                0.74430825240}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.168714400000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 7: // Z=1: hydrogen
      shells.push_back(
          {
        {4173.511000000000,
          627.457900000000,
          142.902100000000,
          40.234330000000,
          12.820210000000,
          4.390437000000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.00183479940,
                0.01399499580,
                0.06858697920,
                0.23224092950,
                0.46906985760,
                0.36045489060}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {11.626358000000,
          2.716280000000,
          0.772218000000},
        {
            {0, false, {-0.11496102290,
                -0.16911803370,
                1.14585222810}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.212031300000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {11.626358000000,
          2.716280000000,
          0.772218000000},
        {
            {1, false, {0.06758002320,
                0.32390711140,
                0.74089525490}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.212031300000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 8: // Z=1: hydrogen
      shells.push_back(
          {
        {5484.6717000,
          825.2349500,
          188.0469600,
          52.9645000,
          16.8975700,
          5.7996353}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0018311,
                0.0139501,
                0.0684451,
                0.2327143,
                0.4701930,
                0.3585209}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {15.5396160,
          3.5999336,
          1.0137618},
        {
            {0, false, {-0.1107775,
                -0.1480263,
                1.1307670}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2700058},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {15.5396160,
          3.5999336,
          1.0137618},
        {
            {1, false, {0.0708743,
                0.3397528,
                0.7271586}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2700058},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 9: // Z=1: fluorine
      shells.push_back(
          {
        {7001.7130900000,
          1051.3660900000,
          239.2856900000,
          67.3974453000,
          21.5199573000,
          7.4031013000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0018196169,
                0.0139160796,
                0.0684053245,
                0.2331857600,
                0.4712674390,
                0.3566185460}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {20.8479528000,
          4.8083083400,
          1.3440698600},
        {
            {0, false, {-0.1085069750,
                -0.1464516580,
                1.1286885800}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3581513930},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {20.8479528000,
          4.8083083400,
          1.3440698600},
        {
            {1, false, {0.0716287243,
                0.3459121030,
                0.7224699570}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3581513930},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;


    default:
      throw "do not know 6-31G basis for this Z";
    }
  }

  return shells;

}

std::vector<libint2::Shell> make_6311g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // 6-311G basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

    case 0: // Z=0: quantum hydrogen
      shells.push_back(
          {
        {33.8650000, 5.0947900, 1.1587900}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0254938, 0.1903730, 0.8521610 }}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.3258400},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1027410},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 1: // Z=0: quantum hydrogen
      shells.push_back(
          {
        {33.8650000, 5.0947900, 1.1587900}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0254938, 0.1903730, 0.8521610 }}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.3258400},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1027410},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 6: // Z=6: carbon
      shells.push_back(
          {
        {4563.2400000, 682.0240000, 154.9730000, 44.4553000, 13.0290000, 1.8277300}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.00196665, 0.0152306, 0.0761269, 0.2608010, 0.6164620, 0.2210060}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {20.9642000, 4.8033100, 1.4593300},
        {
            {0, false, {0.1146600, 0.9199990, -0.00303068}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.4834560},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1455850},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {20.9642000, 4.8033100, 1.4593300},
        {
            {1, false, {0.0402487, 0.2375940, 0.8158540}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.4834560},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1455850},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 7: // Z=7: nytrogen
      shells.push_back(
          {
        {6293.4800000, 949.0440000, 218.7760000, 63.6916000, 18.8282000, 2.7202300}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.00196979, 0.0149613, 0.0735006, 0.2489370, 0.6024600, 0.2562020}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {30.6331000, 7.0261400, 2.1120500},
        {
            {0, false, {0.1119060, 0.9216660, -0.00256919}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.6840090},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2008780},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {30.6331000, 7.0261400, 2.1120500},
        {
            {1, false, {0.0383119, 0.2374030, 0.8175920}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.6840090},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2008780},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 8: // Z=7: nytrogen
      shells.push_back(
          {
        {8588.500000000,
          1297.230000000,
          299.296000000,
          87.377100000,
          25.678900000,
          3.740040000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.001895150,
                0.014385901,
                0.070732003,
                0.240001011,
                0.594797026,
                0.280802012}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {42.117500000,
          9.628370000,
          2.853320000},
        {
            {0, false, {0.113889012,
                0.920811101,
                -0.003274470}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.905661000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.255611000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {42.117500000,
          9.628370000,
          2.853320000},
        {
            {1, false, {0.036511397,
                0.237152983,
                0.819701941}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.905661000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.255611000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 9: // Z=9: fluorine
      shells.push_back(
          {
        {11427.1000000,1722.3500000,395.7460000,115.1390000,33.6026000,4.9190100}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.00180093,0.0137419,0.0681334,0.2333250,0.5890860,0.2995050}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {55.4441000,12.6323000,3.7175600},
        {
            {0, false, {0.1145360,0.9205120,-0.00337804}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.1654500},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3218920},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1076000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {55.4441000,12.6323000,3.7175600},
        {
            {1, false, {0.0354609, 0.2374510, 0.8204580}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.1654500},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3218920},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1076000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );


      break;

    default:
      throw "do not know cc-pVDZ basis for this Z";
    }
  }


  return shells;

}

std::vector<libint2::Shell> make_aug_cc_pvdz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  bool Spherical_H = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

    //aug-cc-pVDZ
    case 0: // Z=1: proton
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

    //aug-cc-pVTZ
    /*    case 0: // Z=1: hydrogen
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

    break;*/

    //aug-cc-pVQZ
    /*case 0: // Z=1: hydrogen
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

    break;*/

    //aug-cc-pV5Z
    /*case 0: // Z=0: quantum hydrogen
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

    break;*/

    //aug-cc-pV6Z
    /*case 0:
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

      break;*/

      //aug-cc-pVDZ
    case 1: // Z=1: hydrogen
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

      //aug-cc-pVDZ
    case 6: // Z=6: carbon
      shells.push_back(
          {
        {6665.00000000,
          1000.00000000,
          228.00000000,
          64.71000000,
          21.06000000,
          7.49500000,
          2.79700000,
          0.52150000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.00069200,
                  0.00532900,
                  0.02707700,
                  0.10171800,
                  0.27474000,
                  0.44856400,
                  0.28507400,
                  0.01520400}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {6665.00000000,
          1000.00000000,
          228.00000000,
          64.71000000,
          21.06000000,
          7.49500000,
          2.79700000,
          0.52150000}, // exponents of primitive Gaussians
          {
              {0, false, {-0.00014600,
                  -0.00115400,
                  -0.00572500,
                  -0.02331200,
                  -0.06395500,
                  -0.14998100,
                  -0.12726200,
                  0.54452900}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.15960000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.04690000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {9.43900000,
          2.00200000,
          0.54560000},
          {
              {1, false, {0.03810900,
                  0.20948000,
                  0.50855700}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1517000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.04041000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5500000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.15100000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //aug-cc-pVDZ
    case 7: // Z=7: nitrogen
      shells.push_back(
          {
        {9046.00000000,
          1357.00000000,
          309.30000000,
          87.73000000,
          28.56000000,
          10.21000000,
          3.83800000,
          0.74660000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0007000,
                  0.0053890,
                  0.0274060,
                  0.1032070,
                  0.2787230,
                  0.4485400,
                  0.2782380,
                  0.0154400}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {9046.00000000,
          1357.00000000,
          309.30000000,
          87.73000000,
          28.56000000,
          10.21000000,
          3.83800000,
          0.74660000}, // exponents of primitive Gaussians
          {
              {0, false, {-0.0001530,
                  -0.0012080,
                  -0.0059920,
                  -0.0245440,
                  -0.0674590,
                  -0.1580780,
                  -0.1218310,
                  0.5490030}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.22480000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.06124000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {13.55000000,
          2.91700000,
          0.79730000},
          {
              {1, false, {0.0399190,
                  0.2171690,
                  0.5103190}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.21850000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.05611000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.81700000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.23000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //aug-cc-pVDZ
    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {11720.0000000000,
          1759.0000000000,
          400.8000000000,
          113.7000000000,
          37.0300000000,
          13.2700000000,
          5.0250000000,
          1.0130000000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0007096459,
                  0.0054672723,
                  0.0278231186,
                  0.1047477397,
                  0.2829208464,
                  0.4484952387,
                  0.2708168852,
                  0.0154502916}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {11720.0000000000,
          1759.0000000000,
          400.8000000000,
          113.7000000000,
          37.0300000000,
          13.2700000000,
          5.0250000000,
          1.0130000000}, // exponents of primitive Gaussians
          {
              {0, false, {-0.0003144434,
                  -0.0024821377,
                  -0.0123163554,
                  -0.0505389173,
                  -0.1393849033,
                  -0.3250774948,
                  -0.2298483076,
                  1.0953793468}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3023000000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0789600000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {17.7000000000,
          3.8540000000,
          1.0460000000},
          {
              {1, false, {0.0626791663,
                  0.3335365659,
                  0.7412396416}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2753000000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0685600000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.1850000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3320000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    default:
      throw "do not know cc-pVDZ basis for this Z";
    }
  }

  return shells;

}

std::vector<libint2::Shell> make_cc_pvtz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical_H = false;
  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // cc-pVTZ basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {


/*
    case 16: // Z=0: quantum hydrogen
      shells.push_back(
          {
        {33.8700000, 5.0950000, 1.1590000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.02549486323, 0.1903627659, 0.8521620222}}
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
        {1.0570000},
        {
            {2, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

    //cc-pVTZ
    case 0: // Z=1: hydrogen
      shells.push_back(
          {
        {33.8700000, 5.0950000, 1.1590000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.02549486323, 0.1903627659, 0.8521620222}}
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
        {1.0570000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //aug-cc-pVTZ
      /*    case 0: // Z=1: hydrogen
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

      break;*/

      //cc-pVQZ
       /*  case 0: // Z=1: hydrogen
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
        {1.3970000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

      //aug-cc-pVQZ
      /*case 0: // Z=1: hydrogen
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

      break;*/

      // //cc-pV5Z
      /*case 0: // Z=0: quantum hydrogen
        shells.push_back(
            {
          {402.0000000, 60.2400000, 13.7300000, 3.9050000},
          {
              {0, false, {0.0002790, 0.0021650, 0.0112010, 0.0448780}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
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
          {2.3580000},
          {
              {4, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/

      //aug-cc-pV5Z
      /*case 0: // Z=0: quantum hydrogen
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

      break;*/

      //cc-pV6Z
      /*case 0:
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
          {2.6530000},
          {
              {5, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/

      //aug-cc-pV6Z
      /*case 0:
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

        break;*/

    case 1: // Z=1: hydrogen
      shells.push_back(
          {
        {33.8700000, 5.0950000, 1.1590000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.02549486323, 0.1903627659, 0.8521620222}}
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
        {1.0570000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 6: // Z=8: oxygen
      shells.push_back(
          {
        {8236.0000000,
          1235.0000000,
          280.8000000,
          79.2700000,
          25.5900000,
          8.9970000,
          3.3190000,
          0.3643000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0005310,
                  0.0041080,
                  0.0210870,
                  0.0818530,
                  0.2348170,
                  0.4344010,
                  0.3461290,
                  -0.0089830}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {8236.0000000,
          1235.0000000,
          280.8000000,
          79.2700000,
          25.5900000,
          8.9970000,
          3.3190000,
          0.3643000},
          {
              {0, false, {-0.0001130,
                  -0.0008780,
                  -0.0045400,
                  -0.0181330,
                  -0.0557600,
                  -0.1268950,
                  -0.1703520,
                  0.5986840}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.9059000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1285000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {18.7100000,
          4.1330000,
          1.2000000},
          {
              {1, false, {0.0140310,
                  0.0868660,
                  0.2902160}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3827000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1209000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.0970000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3180000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7610000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 7: // Z=8: oxygen
      shells.push_back(
          {
        {11420.00000000,
          1712.00000000,
          389.30000000,
          110.00000000,
          35.57000000,
          12.54000000,
          4.64400000,
          0.51180000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.00052300,
                  0.00404500,
                  0.02077500,
                  0.08072700,
                  0.23307400,
                  0.43350100,
                  0.34747200,
                  -0.00850800}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {11420.00000000,
          1712.00000000,
          389.30000000,
          110.00000000,
          35.57000000,
          12.54000000,
          4.64400000,
          0.51180000},
          {
              {0, false, {-0.00011500,
                  -0.00089500,
                  -0.00462400,
                  -0.01852800,
                  -0.05733900,
                  -0.13207600,
                  -0.17251000,
                  0.59994400}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.29300000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.17870000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {26.63000000,
          5.94800000,
          1.74200000},
          {
              {1, false, {0.01467000,
                  0.09176400,
                  0.29868300}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.55500000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.17250000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.65400000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.46900000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.09300000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

/*
      //aug-cc-pVTZ
    case 6: // Z=6: carbon
          shells.push_back(
              {
            {8236.0000000,
              1235.0000000,
              280.8000000,
              79.2700000,
              25.5900000,
              8.9970000,
              3.3190000,
              0.3643000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.0005310,
                      0.0041080,
                      0.0210870,
                      0.0818530,
                      0.2348170,
                      0.4344010,
                      0.3461290,
                      -0.0089830}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {8236.0000000,
              1235.0000000,
              280.8000000,
              79.2700000,
              25.5900000,
              8.9970000,
              3.3190000,
              0.3643000},
              {
                  {0, false, {-0.0001130,
                      -0.0008780,
                      -0.0045400,
                      -0.0181330,
                      -0.0557600,
                      -0.1268950,
                      -0.1703520,
                      0.5986840}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9059000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1285000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0440200},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {18.7100000,
              4.1330000,
              1.2000000},
              {
                  {1, false, {0.0140310,
                      0.0868660,
                      0.2902160}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.3827000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1209000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0356900},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.0970000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.3180000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1000000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.7610000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2680000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVTZ
        case 7: // Z=7: nitrogen
          shells.push_back(
              {
            {11420.00000000,
              1712.00000000,
              389.30000000,
              110.00000000,
              35.57000000,
              12.54000000,
              4.64400000,
              0.51180000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.00052300,
                      0.00404500,
                      0.02077500,
                      0.08072700,
                      0.23307400,
                      0.43350100,
                      0.34747200,
                      -0.00850800}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {11420.00000000,
              1712.00000000,
              389.30000000,
              110.00000000,
              35.57000000,
              12.54000000,
              4.64400000,
              0.51180000},
              {
                  {0, false, {-0.00011500,
                      -0.00089500,
                      -0.00462400,
                      -0.01852800,
                      -0.05733900,
                      -0.13207600,
                      -0.17251000,
                      0.59994400}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.29300000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.17870000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0576000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {26.63000000,
              5.94800000,
              1.74200000},
              {
                  {1, false, {0.01467000,
                      0.09176400,
                      0.29868300}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.55500000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.17250000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0491000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.65400000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.46900000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1510000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.09300000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.3640000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;*/

          //cc-pVTZ
    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {15330,
          2299,
          522.4,
          147.3,
          47.55,
          16.76,
          6.207,
          0.6882}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.000508,
                  0.003929,
                  0.020243,
                  0.079181,
                  0.230687,
                  0.433118,
                  0.35026,
                  -0.008154}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {15330,
          2299,
          522.4,
          147.3,
          47.55,
          16.76,
          6.207,
          0.6882},
          {
              {0, false, {-0.000115,
                  -0.000895,
                  -0.004636,
                  -0.018724,
                  -0.058463,
                  -0.136463,
                  -0.17574,
                  0.603418}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.752},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2384},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {34.46,
          7.749,
          2.28},
          {
              {1, false, {0.015928,
                  0.09974,
                  0.310492}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7156},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.214},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.314},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.645},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.428},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 9: // Z=9: fluorine
      shells.push_back(
          {
        {19500.0000000, 2923.0000000, 664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0005190024441, 0.004015781354, 0.02067746110, 0.08086901703, 0.2358075463, 0.4425823060, 0.3569628672}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000, 0.8815000},
        {
            {0, false, {-0.00003735980873, -0.001277472297, -0.01082201399, -0.07004820894, -0.1697466078, 1.073026608}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.2570000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3041000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {43.8800000, 9.9260000, 2.9300000},
        {
            {1, false, {0.04190462069, 0.2626978417, 0.7977593735}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.9132000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2672000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.1070000},
        {
            {2, true, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8550000},
        {
            {2, true, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.9170000},
        {
            {3, true, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //aug-cc-pVTZ
    /*case 9: // Z=9: fluorine
      shells.push_back(
          {
        {19500.0000000, 2923.0000000, 664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000, 0.8815000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0005070, 0.0039230, 0.0202000, 0.0790100, 0.2304390, 0.4328720, 0.3499640, -0.0078920}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {19500.0000000, 2923.0000000, 664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000, 0.8815000},
        {
            {0, false, {-0.0001170, -0.0009120, -0.0047170, -0.0190860, -0.0596550, -0.1400100, -0.1767820, 0.6050430}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.2570000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3041000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0915800},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {43.8800000, 9.9260000, 2.9300000},
        {
            {1, false, {0.0166650, 0.1044720, 0.3172600}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.9132000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2672000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0736100},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.1070000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8550000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2920000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.9170000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7240000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

    default:
      throw "do not know cc-pVTZ basis for this Z";
    }
  }

  return shells;
}

std::vector<libint2::Shell> make_aug_cc_pvtz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical_H = false;
  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // aug-cc-pVTZ basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

    //aug-cc-pVTZ
        case 0: // Z=1: hydrogen
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

    //aug-cc-pVQZ
    /*case 0: // Z=1: hydrogen
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

    break;*/

    //aug-cc-pV5Z
    /*case 0: // Z=0: quantum hydrogen
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

    break;*/

    //aug-cc-pV6Z
    /*case 0:
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

      break;*/

      //aug-cc-pVTZ
    case 1: // Z=1: hydrogen
      shells.push_back(
          {
        {33.8700000, 5.0950000, 1.1590000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.02549486323, 0.1903627659, 0.8521620222}}
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

      //aug-cc-pVTZ
    case 6: // Z=6: carbon
      shells.push_back(
          {
        {8236.0000000,
          1235.0000000,
          280.8000000,
          79.2700000,
          25.5900000,
          8.9970000,
          3.3190000,
          0.3643000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0005310,
                  0.0041080,
                  0.0210870,
                  0.0818530,
                  0.2348170,
                  0.4344010,
                  0.3461290,
                  -0.0089830}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {8236.0000000,
          1235.0000000,
          280.8000000,
          79.2700000,
          25.5900000,
          8.9970000,
          3.3190000,
          0.3643000},
          {
              {0, false, {-0.0001130,
                  -0.0008780,
                  -0.0045400,
                  -0.0181330,
                  -0.0557600,
                  -0.1268950,
                  -0.1703520,
                  0.5986840}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.9059000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1285000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0440200},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {18.7100000,
          4.1330000,
          1.2000000},
          {
              {1, false, {0.0140310,
                  0.0868660,
                  0.2902160}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3827000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1209000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0356900},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.0970000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3180000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7610000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2680000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    case 16: // Z=16: S
      shells.push_back(
          {
        {374100.0000,
          56050.0000,
          12760.0000,
          3615.0000,
          1183.0000,
          428.8000,
          167.8000,
          69.4700,
          29.8400,
          12.7200,
          5.2440,
          2.2190,
          0.3490}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0000542093,
                  0.0004208183,
                  0.0022067874,
                  0.0091917777,
                  0.0321094974,
                  0.0946600377,
                  0.2236104825,
                  0.3743603245,
                  0.3290792768,
                  0.0846964074,
                  0.0004408125,
                  0.0016481261,
                  0.0003012797}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {374100.0000,
          56050.0000,
          12760.0000,
          3615.0000,
          1183.0000,
          428.8000,
          167.8000,
          69.4700,
          29.8400,
          12.7200,
          5.2440,
          2.2190,
          0.3490},
          {
              {0, false, {-0.0000157790,
                  -0.0001223657,
                  -0.0006440453,
                  -0.0026892484,
                  -0.0095694150,
                  -0.0291750327,
                  -0.0758238087,
                  -0.1542118652,
                  -0.2055084062,
                  0.0086267511,
                  0.5440217687,
                  0.5709563754,
                  -0.0096680253}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {374100.0000,
          56050.0000,
          12760.0000,
          3615.0000,
          1183.0000,
          428.8000,
          167.8000,
          69.4700,
          29.8400,
          12.7200,
          5.2440,
          2.2190,
          0.3490},
          {
              {0, false, {0.0000068239,
                  0.0000528789,
                  0.0002786737,
                  0.0011624074,
                  0.0041499919,
                  0.0126650737,
                  0.0332945444,
                  0.0687490087,
                  0.0961017734,
                  -0.0056701232,
                  -0.3207648188,
                  -0.5989476414,
                  1.1201077360}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7767},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1322},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0497},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {574.4000,
          135.8000,
          43.1900,
          15.8700,
          6.2080,
          2.4830,
          0.3229},
          {
              {1, false, {0.0024969230,
                  0.0198707511,
                  0.0912549164,
                  0.2624622005,
                  0.4472908166,
                  0.3658365683,
                  -0.0051839928}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {574.4000,
          135.8000,
          43.1900,
          15.8700,
          6.2080,
          2.4830,
          0.3229},
          {
              {1, false, {-0.0010640239,
                  -0.0084744487,
                  -0.0399195571,
                  -0.1175716038,
                  -0.2125913270,
                  -0.1663549097,
                  0.9770148029}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8688},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1098},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0351},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2690},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8190},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1010},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5570},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2180},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      break;

      //aug-cc-pVTZ
    case 7: // Z=7: nitrogen
      shells.push_back(
          {
        {11420.00000000,
          1712.00000000,
          389.30000000,
          110.00000000,
          35.57000000,
          12.54000000,
          4.64400000,
          0.51180000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.00052300,
                  0.00404500,
                  0.02077500,
                  0.08072700,
                  0.23307400,
                  0.43350100,
                  0.34747200,
                  -0.00850800}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {11420.00000000,
          1712.00000000,
          389.30000000,
          110.00000000,
          35.57000000,
          12.54000000,
          4.64400000,
          0.51180000},
          {
              {0, false, {-0.00011500,
                  -0.00089500,
                  -0.00462400,
                  -0.01852800,
                  -0.05733900,
                  -0.13207600,
                  -0.17251000,
                  0.59994400}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.29300000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.17870000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0576000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {26.63000000,
          5.94800000,
          1.74200000},
          {
              {1, false, {0.01467000,
                  0.09176400,
                  0.29868300}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.55500000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.17250000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0491000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.65400000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.46900000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1510000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.09300000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3640000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;


      //aug-cc-pVTZ
    case 8: // Z=8: oxygen
      shells.push_back(
          {
        {15330.0000000000,
          2299.0000000000,
          522.4000000000,
          147.3000000000,
          47.5500000000,
          16.7600000000,
          6.2070000000,
          0.6882000000}, // exponents of primitive Gaussians
          {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
              {0, false, {0.0005201983,
                  0.0040233448,
                  0.0207290833,
                  0.0810823271,
                  0.2362263521,
                  0.4435182094,
                  0.3586705887,
                  -0.0083497972}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {15330.0000000000,
          2299.0000000000,
          522.4000000000,
          147.3000000000,
          47.5500000000,
          16.7600000000,
          6.2070000000,
          0.6882000000},
          {
              {0, false, {-0.0001972360,
                  -0.0015350107,
                  -0.0079511839,
                  -0.0321134529,
                  -0.1002696430,
                  -0.2340471118,
                  -0.3014109278,
                  1.0349196495}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.7520000000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2384000000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0737600000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {34.4600000000,
          7.7490000000,
          2.2800000000},
          {
              {1, false, {0.0411634896,
                  0.2577628359,
                  0.8024192744}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7156000000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2140000000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0597400000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.3140000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.6450000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2140000000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.4280000000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.5000000000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //aug-cc-pVTZ
    case 9: // Z=9: fluorine
      shells.push_back(
          {
        {19500.0000000, 2923.0000000, 664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000, 0.8815000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0005070, 0.0039230, 0.0202000, 0.0790100, 0.2304390, 0.4328720, 0.3499640, -0.0078920}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {19500.0000000, 2923.0000000, 664.5000000, 187.5000000, 60.6200000, 21.4200000, 7.9500000, 0.8815000},
        {
            {0, false, {-0.0001170, -0.0009120, -0.0047170, -0.0190860, -0.0596550, -0.1400100, -0.1767820, 0.6050430}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {2.2570000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3041000},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0915800},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {43.8800000, 9.9260000, 2.9300000},
        {
            {1, false, {0.0166650, 0.1044720, 0.3172600}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.9132000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2672000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0736100},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {3.1070000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.8550000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2920000},
        {
            {2, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.9170000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.7240000},
        {
            {3, Spherical, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

    default:
      throw "do not know aug-cc-pVTZ basis for this Z";
    }
  }

  return shells;
}

std::vector<libint2::Shell> make_cc_pvqz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical_H = true;
  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // cc-pVQZ basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

    //cc-pVQZ
     case 0: // Z=1: hydrogen
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
         {1.3970000},
         {
             {3, Spherical_H, {1.0000000}}
         },
         {{atoms[a].x, atoms[a].y, atoms[a].z}}
           }
       );

       break;

      //cc-pVQZ
    case 6: // Z=6: carbon
          shells.push_back(
              {
            {33980.0000000,
              5089.0000000,
              1157.0000000,
              326.6000000,
              106.1000000,
              38.1100000,
              14.7500000,
              6.0350000,
              2.5300000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.0000910,
                      0.0007040,
                      0.0036930,
                      0.0153600,
                      0.0529290,
                      0.1470430,
                      0.3056310,
                      0.3993450,
                      0.2170510}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {33980.0000000,
              5089.0000000,
              1157.0000000,
              326.6000000,
              106.1000000,
              38.1100000,
              14.7500000,
              6.0350000,
              2.5300000},
              {
                  {0, false, {-0.0000190,
                      -0.0001510,
                      -0.0007850,
                      -0.0033240,
                      -0.0115120,
                      -0.0341600,
                      -0.0771730,
                      -0.1414930,
                      -0.1180190}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.7355000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2905000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1111000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {34.5100000,
              7.9150000,
              2.3680000},
              {
                  {1, false, {0.0053780,
                      0.0361320,
                      0.1424930}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.8132000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2890000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1007000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.8480000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.6490000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2280000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.4190000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4850000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.0110000},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //cc-pVQZ
        case 7: // Z=7: nitrogen
          shells.push_back(
              {
            {45840.0000000,
              6868.0000000,
              1563.0000000,
              442.4000000,
              144.3000000,
              52.1800000,
              20.3400000,
              8.3810000,
              3.5290000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.0000920,
                      0.0007170,
                      0.0037490,
                      0.0155320,
                      0.0531460,
                      0.1467870,
                      0.3046630,
                      0.3976840,
                      0.2176410}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {45840.0000000,
              6868.0000000,
              1563.0000000,
              442.4000000,
              144.3000000,
              52.1800000,
              20.3400000,
              8.3810000,
              3.5290000},
              {
                  {0, false, {-0.0000200,
                      -0.0001590,
                      -0.0008240,
                      -0.0034780,
                      -0.0119660,
                      -0.0353880,
                      -0.0800770,
                      -0.1467220,
                      -0.1163600}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.0540000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4118000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1552000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {49.3300000,
              11.3700000,
              3.4350000},
              {
                  {1, false, {0.0055330,
                      0.0379620,
                      0.1490280}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.1820000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4173000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1428000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.8370000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9680000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9680000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.0270000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.6850000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.4270000},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

    default:
      throw "do not know cc-pVTZ basis for this Z";
    }
  }

  return shells;
}

std::vector<libint2::Shell> make_aug_cc_pvqz_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical_H = true;
  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    //aug-cc-pVQZ basis set
    // obtained from https://bse.pnl.gov/bse/portal
    switch (atoms[a].atomic_number) {

     //aug-cc-pVQZ
     case 0: // Z=1: hydrogen
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

       // Z=1: hydrogen
     case 1:
       shells.push_back(
           {
         {82.6400000, 12.4100000, 2.8240000},
         {
             {0, false, {0.0020060, 0.0153430, 0.0755790}}
         },
         {{atoms[a].x, atoms[a].y, atoms[a].z}}
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

      //aug-cc-pVQZ
    case 6: // Z=6: carbon
          shells.push_back(
              {
            {33980.0000000,
              5089.0000000,
              1157.0000000,
              326.6000000,
              106.1000000,
              38.1100000,
              14.7500000,
              6.0350000,
              2.5300000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.0000910,
                      0.0007040,
                      0.0036930,
                      0.0153600,
                      0.0529290,
                      0.1470430,
                      0.3056310,
                      0.3993450,
                      0.2170510}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {33980.0000000,
              5089.0000000,
              1157.0000000,
              326.6000000,
              106.1000000,
              38.1100000,
              14.7500000,
              6.0350000,
              2.5300000},
              {
                  {0, false, {-0.0000190,
                      -0.0001510,
                      -0.0007850,
                      -0.0033240,
                      -0.0115120,
                      -0.0341600,
                      -0.0771730,
                      -0.1414930,
                      -0.1180190}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.7355000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2905000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1111000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {34.5100000,
              7.9150000,
              2.3680000},
              {
                  {1, false, {0.0053780,
                      0.0361320,
                      0.1424930}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.8132000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2890000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1007000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.8480000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.6490000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2280000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.4190000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4850000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.0110000},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.04145},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.03218},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.07660},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.18700},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.42400},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVQZ
        case 7: // Z=7: nitrogen
          shells.push_back(
              {
            {45840.0000000,
              6868.0000000,
              1563.0000000,
              442.4000000,
              144.3000000,
              52.1800000,
              20.3400000,
              8.3810000,
              3.5290000}, // exponents of primitive Gaussians
              {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
                  {0, false, {0.0000920,
                      0.0007170,
                      0.0037490,
                      0.0155320,
                      0.0531460,
                      0.1467870,
                      0.3046630,
                      0.3976840,
                      0.2176410}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
              }
          );
          shells.push_back(
              {
            {45840.0000000,
              6868.0000000,
              1563.0000000,
              442.4000000,
              144.3000000,
              52.1800000,
              20.3400000,
              8.3810000,
              3.5290000},
              {
                  {0, false, {-0.0000200,
                      -0.0001590,
                      -0.0008240,
                      -0.0034780,
                      -0.0119660,
                      -0.0353880,
                      -0.0800770,
                      -0.1467220,
                      -0.1163600}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.0540000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4118000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1552000},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {49.3300000,
              11.3700000,
              3.4350000},
              {
                  {1, false, {0.0055330,
                      0.0379620,
                      0.1490280}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.1820000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4173000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1428000},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.8370000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9680000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9680000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.0270000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.6850000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.4270000},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.054640},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.044020},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.111000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.245000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.559000},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVQZ // Z=8: oxygen
        case 8:
          shells.push_back(
              {
            {61420.0000,
              9199.0000,
              2091.0000,
              590.9000,
              192.3000,
              69.3200,
              26.9700,
              11.1000,
              4.6820},
              {
                  {0, false, {0.000090738900,
                      0.000703730800,
                      0.003694082500,
                      0.015342944300,
                      0.052853408400,
                      0.147119054800,
                      0.307764259100,
                      0.401779869300,
                      0.218761470400}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {61420.0000,
              9199.0000,
              2091.0000,
              590.9000,
              192.3000,
              69.3200,
              26.9700,
              11.1000,
              4.6820},
              {
                  {0, false, {-0.000056106400,
                      -0.000446045800,
                      -0.002325609700,
                      -0.009841060100,
                      -0.034101461300,
                      -0.101723682900,
                      -0.232819058800,
                      -0.426661011400,
                      -0.323540279500}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.4280},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.5547},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2067},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {63.4200,
              14.6600,
              4.4590},
              {
                  {1, false, {0.031327502500,
                      0.216654248500,
                      0.835242842200}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.5310},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.5302},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1750},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {3.7750},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.3000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4440},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.6660},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.8590},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.8460},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0696},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0535},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.1540},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.3240},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.7140},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVQZ // Z=9: fluorine
        case 9:
          shells.push_back(
              {
            {74530.0000,
              11170.0000,
              2543.0000,
              721.0000,
              235.9000,
              85.6000,
              33.5500,
              13.9300,
              5.9150},
              {
                  {0, false, {0.000095,
                      0.000738,
                      0.003858,
                      0.015926,
                      0.054289,
                      0.149513,
                      0.308252,
                      0.394853,
                      0.211031}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {74530.0000,
              11170.0000,
              2543.0000,
              721.0000,
              235.9000,
              85.6000,
              33.5500,
              13.9300,
              5.9150},
              {
                  {0, false, {-0.000022,
                      -0.000172,
                      -0.000891,
                      -0.003748,
                      -0.012862,
                      -0.038061,
                      -0.086239,
                      -0.155865,
                      -0.110914}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.8430},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.7124},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2637},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0859},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {80.3900,
              18.6300,
              5.6940},
              {
                  {1, false, {0.006347,
                      0.044204,
                      0.168514}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.9530},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.6702},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2166},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.0657},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {5.0140},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.7250},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.5860},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.2070},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {3.5620},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.1480},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.4600},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {2.3760},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.9240},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

          //aug-cc-pVQZ // Z=16: sulphur
        case 16:
          shells.push_back(
              {
            {727800.00000,
              109000.00000,
              24800.00000,
              7014.00000,
              2278.00000,
              814.70000,
              313.40000,
              127.70000,
              54.48000,
              23.85000,
              9.42800,
              4.29000,
              1.90900},
              {
                  {0, false, {0.00002360080,
                      0.00018346870,
                      0.00096420790,
                      0.00406507430,
                      0.01469623090,
                      0.04650471710,
                      0.12549887080,
                      0.26841347470,
                      0.38478100970,
                      0.26535269730,
                      0.04372941900,
                      -0.00378779450,
                      0.00218067140}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {727800.00000,
              109000.00000,
              24800.00000,
              7014.00000,
              2278.00000,
              814.70000,
              313.40000,
              127.70000,
              54.48000,
              23.85000,
              9.42800,
              4.29000,
              1.90900},
              {
                  {0, false, {-0.00000667730,
                      -0.00005187100,
                      -0.00027319500,
                      -0.00115285720,
                      -0.00420989800,
                      -0.01356120670,
                      -0.03859928090,
                      -0.09199779910,
                      -0.17108207450,
                      -0.17339186380,
                      0.13087167470,
                      0.57832985910,
                      0.44206150930}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {727800.00000,
              109000.00000,
              24800.00000,
              7014.00000,
              2278.00000,
              814.70000,
              313.40000,
              127.70000,
              54.48000,
              23.85000,
              9.42800,
              4.29000,
              1.90900},
              {
                  {0, false, {0.00000335660,
                      0.00002604110,
                      0.00013742180,
                      0.00057861750,
                      0.00212099540,
                      0.00681915110,
                      0.01958898410,
                      0.04689862120,
                      0.09016100210,
                      0.09392838030,
                      -0.07540746090,
                      -0.44454494990,
                      -0.59038974670}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.62700},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.28730},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.11720},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.04280},
            {
                {0, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1546.00000,
              366.40000,
              118.40000,
              44.53000,
              18.38000,
              7.96500,
              3.54100,
              1.59100},
              {
                  {1, false, {0.00044379950,
                      0.00379810250,
                      0.01995364070,
                      0.07464639300,
                      0.19849728100,
                      0.35393771160,
                      0.38093286700,
                      0.17194473510}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1546.00000,
              366.40000,
              118.40000,
              44.53000,
              18.38000,
              7.96500,
              3.54100,
              1.59100},
            {
                {1, false, {-0.00045707260,
                    -0.00387358380,
                    -0.02074913810,
                    -0.07784538400,
                    -0.21658716960,
                    -0.38806635760,
                    -0.47757232480,
                    0.03730586500}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.62050},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.24200},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.09014},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.03170},
            {
                {1, false, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.20300},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.50400},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {1.25000},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.07480},
            {
                {2, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.33500},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.86900},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.14000},
            {
                {3, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.68300},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );
          shells.push_back(
              {
            {0.29700},
            {
                {4, Spherical, {1.0000000}}
            },
            {{atoms[a].x, atoms[a].y, atoms[a].z}}
              }
          );

          break;

    default:
      throw "do not know cc-pVTZ basis for this Z";
    }
  }

  return shells;
}

std::vector<libint2::Shell> make_6s3p1delectron_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {66.011},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {10.002},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {2.3585},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.73659},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.26847},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.049378},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
        {
      {0.67771},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.19922},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.075304},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.17232},
          {
              {2, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    break;

  }

    //aug-cc-pVDZ
    /*shells.push_back(
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

    break;*/

    /*
    bool Spherical_H = false;
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
  }*/

  return shells;

}

std::vector<libint2::Shell> make_aug_pcseg_0_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    switch (atoms[a].atomic_number) {

    case 4:
    shells.push_back(
        {
      {196.1270000000, 29.6333000000, 6.5533100000, 1.6679900000}, // exponents of primitive Gaussians
      {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
          {0, false, {0.0195124399, 0.1331108337, 0.4446691935, 0.5480983586}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
        }
    );
    shells.push_back(
            {
          {0.1562520000},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.0560242000},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.0187430000},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
        {
      {0.5776310000, 0.1024590000},
      {
          {1, false, {0.3441205552, 0.8016935790}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.0256150000},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );


    break;

  }
  }

  return shells;

}

std::vector<libint2::Shell> make_sp_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    // cc-pVDZ basis set
    // obtained from https://bse.pnl.gov/bse/portal


    //DZSPD
/*    shells.push_back(
        {
      {29.29266},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {20.17583},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {26.16688},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {18.21766},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {23.70662},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.73036},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );*/

    //QZSPD
    /*shells.push_back(
        {
      {34.63529},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {23.53723},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.15828},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.88060},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {33.60131},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.91237},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {15.80526},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {6.89795},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );*/
    /*shells.push_back(
        {
      {2.8284},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );*/

    //Modified aug-cc-pVTZ basis set by multiplying with 1836
      /*shells.push_back(
          {
        {33.8700000*1836.0, 5.0950000*1836.0, 1.1590000*1836.0}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.02549486323, 0.1903627659, 0.8521620222}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}   // origin coordinates
          }
      );
      shells.push_back(
          {
        {0.3258000*1836.0},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1027000*1836.0},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.0252600*1836.0},
        {
            {0, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.4070000*1836.0},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.3880000*1836.0},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.1020000*1836.0},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {1.0570000*1836.0},
        {
            {2, true, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );
      shells.push_back(
          {
        {0.2470000*1836.0},
        {
            {2, true, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );*/


    shells.push_back(
        {
      {4.00000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.00000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.00000},
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

std::vector<libint2::Shell> make_cc_pvdz_basis_qh(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;
  bool Spherical_H = true;

  for(auto a=0; a<atoms.size(); ++a) {

    //cc-pVDZ
      shells.push_back(
          {
        {13.0100000, 1.9620000, 0.4446000, 0.1220000}, // exponents of primitive Gaussians
        {  // contraction 0: s shell (l=0), spherical=false, contraction coefficients
            {0, false, {0.0196850, 0.1379770, 0.4781480, 0.5012400}}
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
        {0.7270000},
        {
            {1, false, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;

      //cc-pVTZ
/*
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
        {1.0570000},
        {
            {2, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

          break;*/

      //cc-pVQZ
       /*
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
        {1.3970000},
        {
            {3, Spherical_H, {1.0000000}}
        },
        {{atoms[a].x, atoms[a].y, atoms[a].z}}
          }
      );

      break;*/

      // //cc-pV5Z
      /*
        shells.push_back(
            {
          {402.0000000, 60.2400000, 13.7300000, 3.9050000},
          {
              {0, false, {0.0002790, 0.0021650, 0.0112010, 0.0448780}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
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
          {2.3580000},
          {
              {4, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/

      //cc-pV6Z
      /*
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
          {2.6530000},
          {
              {5, Spherical_H, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

        break;*/
  }

  return shells;

}

std::vector<libint2::Shell> make_6s3p1d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    //6s3p1d

    shells.push_back(
        {
      {8.9346},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {1.5904},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.51619},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.11092},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.052472},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.024562},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
        {
      {0.47831},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.18726},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.069729},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.15439},
          {
              {2, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    //aug-cc-pVDZ
    /*shells.push_back(
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
    );*/

    /*
    bool Spherical_H = false;
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

        //break;*/

/*
    shells.push_back(
        {
      {0.8962524},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.379795917024},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.16094231779809},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0682009165901187},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0289008204142287},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.0122470116587336},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.00518979366050494},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.00219922696157557},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.0009320},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    break;*/

    /*
     11s9p4d2f1g basis set
    shells.push_back(
        {
      {0.000031623},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.0001000014129},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00031623446801367},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00100002825819963},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00316238936090469},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.0100004238759889},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.0316243404230397},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.100005651719778},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.316247872433455},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {1.00007064699631},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {3.16252340699645},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );

    shells.push_back(
        {
      {0.00031623446801367},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00100002825819963},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00316238936090469},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
            {
          {0.0100004238759889},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.0316243404230397},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.100005651719778},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {0.316243404230397},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {1.00005651719778},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
    shells.push_back(
            {
          {3.16247872433455},
          {
              {1, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );


    shells.push_back(
         {
       {0.1},
       {
           {2, false, {1.0000000}}
       },
       {{atoms[a].x, atoms[a].y, atoms[a].z}}
         }
     );
     shells.push_back(
             {
           {0.03},
           {
               {2, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );
     shells.push_back(
             {
           {0.01},
           {
               {2, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );
     shells.push_back(
             {
           {0.003},
           {
               {2, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );

     shells.push_back(
             {
           {0.1},
           {
               {3, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );
     shells.push_back(
             {
           {0.03},
           {
               {3, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );
     shells.push_back(
             {
           {0.1},
           {
               {4, false, {1.0000000}}
           },
           {{atoms[a].x, atoms[a].y, atoms[a].z}}
             }
         );

    break;*/


    /*
    shells.push_back(
                {
              {0.00518979366050494},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
        shells.push_back(
                {
              {0.00219922696157557},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
        shells.push_back(
                {
              {0.0009320},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
    shells.push_back(
            {
          {0.0122474139},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
        shells.push_back(
            {
          {0.028901569795359},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
        shells.push_back(
            {
          {0.0682022134187861},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
        shells.push_back(
            {
          {0.160944265247786},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
        shells.push_back(
            {
          {0.379797886574377},
          {
              {0, false, {1.0000000}}
          },
          {{atoms[a].x, atoms[a].y, atoms[a].z}}
            }
        );
        shells.push_back(
                {
              {0.896250850717081},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
        shells.push_back(
                {
              {2.11498172003067},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
        shells.push_back(
                {
              {4.99095501274559},
              {
                  {0, false, {1.0000000}}
              },
              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                }
            );
        shells.push_back(
                        {
                      {11.7777055486272},
                      {
                          {0, false, {1.0000000}}
                      },
                      {{atoms[a].x, atoms[a].y, atoms[a].z}}
                        }
                    );
        shells.push_back(
                                {
                              {27.7931473307059},
                              {
                                  {0, false, {1.0000000}}
                              },
                              {{atoms[a].x, atoms[a].y, atoms[a].z}}
                                }
                            );*/

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_7s5p3d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {0.00079879},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00252600},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.00798791},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.02526000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.07987913},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.25260000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.79879134},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.01020000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.03225523},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.10200000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.32255232},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.02000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.07810826},
      {
          {2, true, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.24700000},
      {
          {2, true, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.78108258},
      {
          {2, true, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;

  }

  return shells;

}

std::vector<libint2::Shell> make_8spd_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );


    //From nakai paper: https://onlinelibrary.wiley.com/doi/epdf/10.1002/qua.1106
    //NAKAI, H., 2002, Int. J. Quantum Chem., 86, 511.
    //6s6p basis set
    /*shells.push_back(
        {
      {4.2159},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.332},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {42.159},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {133.32},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {421.59},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1333.2},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4215.9},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.2159},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.332},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {42.159},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {133.32},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {421.59},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1333.2},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4215.9},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.2159},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.332},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {42.159},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {133.32},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {421.59},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1333.2},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4215.9},
      {
          {2, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );*/


    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8spdf_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

//basis set convergence
std::vector<libint2::Shell> make_2s_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_4s_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s_r_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s_l_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_4s_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s2p_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
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

std::vector<libint2::Shell> make_8s4p_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
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

std::vector<libint2::Shell> make_8s6p_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
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

std::vector<libint2::Shell> make_8s8p_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
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

std::vector<libint2::Shell> make_6s6p_r_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
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

std::vector<libint2::Shell> make_6s6p_l_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
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

std::vector<libint2::Shell> make_4s4p_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
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

std::vector<libint2::Shell> make_6s6p_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
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

std::vector<libint2::Shell> make_8s8p2d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p4d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p6d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_16s16p16dd_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.3784},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {3.3636},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.7568},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {6.7272},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {9.5137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.4543},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {19.0273},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {26.9087},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.3784},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {3.3636},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.7568},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {6.7272},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {9.5137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.4543},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {19.0273},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {26.9087},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.3784},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {3.3636},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.7568},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {6.7272},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {9.5137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {13.4543},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {19.0273},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {26.9087},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_16s16p16dw_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {0.7071},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.4142},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.2548},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {90.5097},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {128.0000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.7071},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.4142},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.2548},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {90.5097},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {128.0000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {0.7071},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {1.4142},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.2548},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {90.5097},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {128.0000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d_r_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d_l_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_4s4p4d_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d2f_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d4f_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d6f_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d8f_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d4f_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d8f8g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d8f4g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );


    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d6f4g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );


    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_5s5p5d5f_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_5s5p5d5f4g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );


    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_8s8p8d4f4g_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = true;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {4, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d6f_r_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d6f_l_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_4s4p4d4f_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_6s6p6d6f_lr_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {3, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}

std::vector<libint2::Shell> make_10spd_basis(const std::vector<Atoms>& atoms) {
  using libint2::Shell;

  bool Spherical = false;
  std::vector<Shell> shells;

  for(auto a=0; a<atoms.size(); ++a) {

    shells.push_back(
        {
      {2.8284},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.25526},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000000},
      {
          {0, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.25526},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000000},
      {
          {1, false, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {2.8284},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {4.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {5.6569},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {8.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {11.3137},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {16.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {22.6274},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {32.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {45.25526},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );
    shells.push_back(
        {
      {64.0000000},
      {
          {2, Spherical, {1.0000000}}
      },
      {{atoms[a].x, atoms[a].y, atoms[a].z}}
        }
    );

    break;
  }

  return shells;

}
