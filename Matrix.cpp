#include "Matrix.h"
#include "Vector.h"

   
Matrix::Matrix() {}

Matrix::Matrix(int rows, int cols) : data(rows, std::vector<double>(cols, 0.0)) {}

int Matrix::rows() const {
    return data.size();
}

int Matrix::cols() const {
    return data[0].size();
}

double& Matrix::operator()(int row, int col) {
    return data[row][col];
}

const double& Matrix::operator()(int row, int col) const {
    return data[row][col];
}

Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(rows(), cols());
    for (int i = 0; i < rows(); ++i) {
        for (int j = 0; j < cols(); ++j) {
            result(i, j) = data[i][j] + other(i, j);
        }
    }
    return result;
}

Vector Matrix::operator*(const Vector& vec) const {
    int numRows = rows();
    int numCols = cols();
    Vector result(numRows);

    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            result[i] += data[i][j] * vec[j];
        }
    }

    return result;
}


