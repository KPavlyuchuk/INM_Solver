#pragma once

#include <vector>

class Vector {
private:
    std::vector<double> elements;

public:
    Vector();
    Vector(int size);
    int size() const;
    double& operator[](int index);
    const double& operator[](int index) const;
    Vector operator+(const Vector& other) const;
	Vector operator-(const Vector& other) const;
	Vector operator*(double scalar) const;
	friend Vector operator*(double scalar, const Vector& vec);
};
