#pragma once

#include <vector>
#include "Vector.h" 


class Matrix {
private:
    std::vector<std::vector<double>> data;

public:
    Matrix();
    Matrix(int rows, int cols);
    int rows() const;
    int cols() const;
    double& operator()(int row, int col);
    const double& operator()(int row, int col) const;
    Matrix operator+(const Matrix& other) const;
	Vector operator*(const Vector& vec) const;
};
