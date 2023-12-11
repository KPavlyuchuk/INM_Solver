#pragma once

#include "Matrix.h"
#include "Vector.h"

class Solver {
public:
    static Vector solve(const Matrix& A, const Vector& b, double alpha, int maxIterations, double tolerance);
};
