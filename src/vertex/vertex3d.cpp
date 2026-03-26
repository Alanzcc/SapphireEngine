#include "vertex3d.hpp"
#include <cmath>

Vertex3D::Vertex3D(float x, float y, float z) : x(x), y(y), z(z) {}


// Vector operations
Vertex3D Vertex3D::scalar_product(float scalar) const {
    return Vertex3D(x * scalar, y * scalar, z * scalar);
}

float Vertex3D::dot_product(const Vertex3D& rhs) const {
    return x * rhs.x + y * rhs.y + z * rhs.z;
}

float Vertex3D::length() const {
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

Vertex3D Vertex3D::normalized() const {
    auto len = this->length();
    return Vertex3D(this->x / len, this->y / len, this->z / len);
}

Vertex3D Vertex3D::cross_product(const Vertex3D& rhs) const {
    return Vertex3D(
        y * rhs.z - z * rhs.y,
        z * rhs.x - x * rhs.z,
        x * rhs.y - y * rhs.x
    );
}

// Operator overloads
Vertex3D Vertex3D::operator+(const Vertex3D& rhs) const {
    return Vertex3D(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vertex3D Vertex3D::operator-(const Vertex3D& rhs) const {
    return Vertex3D(x - rhs.x, y - rhs.y, z - rhs.z);
}

Vertex3D Vertex3D::operator*(const Vertex3D& rhs) const {
    return Vertex3D(x * rhs.x, y * rhs.y, z * rhs.z);
}
Vertex3D Vertex3D::operator/(const Vertex3D& rhs) const {
    return Vertex3D(x / rhs.x, y / rhs.y, z / rhs.z);
}