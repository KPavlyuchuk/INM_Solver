#include "Vector.h"
  
Vector::Vector() {}

Vector::Vector(int size) : elements(size, 0.0) {}

int Vector::size() const {
    return elements.size();
}

double& Vector::operator[](int index) {
    return elements[index];
}

const double& Vector::operator[](int index) const {
    return elements[index];
}

Vector Vector::operator+(const Vector& other) const {
    Vector result(size());
    for (int i = 0; i < size(); ++i) {
        result[i] = elements[i] + other[i];
    }
    return result;
}

Vector Vector::operator-(const Vector& other) const {
    Vector result(size());
    for (int i = 0; i < size(); ++i) {
        result[i] = elements[i] - other[i];
    }
    return result;
}

Vector Vector::operator*(double scalar) const {
    Vector result(size());
    for (int i = 0; i < size(); ++i) {
        result[i] = elements[i] * scalar;
    }
    return result;
}

Vector operator*(double scalar, const Vector& vec) {
    Vector result(vec.size());
    for (int i = 0; i < vec.size(); ++i) {
        result[i] = scalar * vec[i];
    }
    return result;
}
