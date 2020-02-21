TensorRank4 plot_function(size_t nao_p, size_t n_pts, std::vector<Atoms> &atoms_neo);
void calculate_transition_denisty_xyz(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, Eigen::MatrixXd &XY);
void calculate_denisty_xyz(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, std::string basis_set_p, Eigen::MatrixXd &D_CISD, std::string method, Eigen::MatrixXd &XY);
void calculate_denisty_old(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, std::string basis_set_p, Eigen::MatrixXd &D_CISD, std::string method, Eigen::MatrixXd &XY);

