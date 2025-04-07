#pragma once

#include <Eigen/Dense>
#include <vector>

using namespace std;

class KalmanFilter{
public:
    using Vector = Eigen::VectorXd;
    using Matrix = Eigen::MatrixXd;

    double dt; //discrete time step
    int n;
    int m;
    Vector x; //state vector
    Vector z; //state measurement
    Matrix F; //state-transition model
    Matrix P; //Covariance Matrix
    Matrix Q; //Covariance of the process noise
    Matrix R; //Covariance of the observation noise
    Matrix H; //Observation model matrix
    

    KalmanFilter(const Vector& x0, const Matrix& F, const Matrix& P, const Matrix& Q)
        : x(x0), F(F), P(P), Q(Q), n(x0.size()) {}

    
};
