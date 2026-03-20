#include "vertex3d.hpp"


Vertex3D::Vertex3D(float x, float y, float z) : x(x), y(y), z(z) {}


// Vector operations
Vertex3D Vertex3D::scalar_product(float scalar) {
    return Vertex3D(x * scalar, y * scalar, z * scalar);
}

float Vertex3D::dot_product(Vertex3D rhs) {
    return x * rhs.x + y * rhs.y + z * rhs.z;
}

Vertex3D Vertex3D::cross_product(Vertex3D rhs) {
    return Vertex3D(
        y * rhs.z - z * rhs.y,
        z * rhs.x - x * rhs.z,
        x * rhs.y - y * rhs.x
    );
}

// Operator overloads
Vertex3D Vertex3D::operator+(Vertex3D rhs) {
    return Vertex3D(x + rhs.x, y + rhs.y, z + rhs.z);
}

Vertex3D Vertex3D::operator-(Vertex3D rhs) {
    return Vertex3D(x - rhs.x, y - rhs.y, z - rhs.z);
}

Vertex3D Vertex3D::operator*(Vertex3D rhs) {
    return Vertex3D(x * rhs.x, y * rhs.y, z * rhs.z);
}