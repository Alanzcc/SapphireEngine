#include "vertex2d.hpp"
#include <cmath>

Vertex2D::Vertex2D(float x, float y) : x(x), y(y) {}

// Vector operations
Vertex2D Vertex2D::scalar_product(float scalar) const
{
    return Vertex2D(x * scalar, y * scalar);
}

float Vertex2D::dot_product(const Vertex2D& rhs) const
{
    return x * rhs.x + y * rhs.y;
}

float Vertex2D::length() const {
    return sqrt(this->x * this->x + this->y + this->y);
}

Vertex2D Vertex2D::normalized() const {
    auto len = this->length();
    return Vertex2D(this->x / len, this->y / len);
}

// Operator overloads
Vertex2D Vertex2D::operator+(const Vertex2D& rhs) const
{
    return Vertex2D(x + rhs.x, y + rhs.y);
}

Vertex2D Vertex2D::operator-(const Vertex2D& rhs) const
{
    return Vertex2D(x - rhs.x, y - rhs.y);
}

Vertex2D Vertex2D::operator*(const Vertex2D& rhs) const
{
    return Vertex2D(x * rhs.x, y * rhs.y);
}

Vertex2D Vertex2D::operator/(const Vertex2D& rhs) const
{
    return Vertex2D(x / rhs.x, y / rhs.y);
}