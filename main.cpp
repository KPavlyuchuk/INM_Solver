#include <iostream>
#include "Matrix.h"
#include "Vector.h"
#include "Solver.h"

int main() {
    // Ввод размерности матрицы A
    int n;
    std::cout << "Enter the size of the matrix A: ";
    std::cin >> n;

    // Ввод матрицы A
    Matrix A(n, n);
    std::cout << "Enter the elements of the matrix A:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "A(" << i << ", " << j << "): ";
            std::cin >> A(i, j);
        }
    }

    // Ввод вектора b
    Vector b(n);
    std::cout << "Enter the elements of the vector b:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "b[" << i << "]: ";
        std::cin >> b[i];
    }

    // Ввод параметров метода
    double alpha;
    int maxIterations;
    double tolerance;

    std::cout << "Enter the relaxation parameter (alpha): ";
    std::cin >> alpha;

    std::cout << "Enter the maximum number of iterations: ";
    std::cin >> maxIterations;

    std::cout << "Enter the tolerance for convergence: ";
    std::cin >> tolerance;

    Vector solution = Solver::solve(A, b, alpha, maxIterations, tolerance);

    // Вывод решения
    std::cout << "Solution: ";
    for (int i = 0; i < n; ++i) {
        std::cout << solution[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
