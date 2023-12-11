#include "Solver.h"
#include <iostream>

Vector Solver::solve(const Matrix& A, const Vector& b, double alpha, int maxIterations, double tolerance) {
    int size = A.rows();
    Vector x(size);

    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        Vector Ax = A * x;
        Vector residual = Ax - b;
        x = x - alpha * residual;

        // Проверка на сходимость (можно использовать другие критерии)
        if (residual.size() < tolerance) {
            std::cout << "Converged in " << iteration + 1 << " iterations." << std::endl;
            break;
        }
    }

    return x;
}

