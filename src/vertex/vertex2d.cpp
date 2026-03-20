#include "vertex2d.hpp"

Vertex2D::Vertex2D(float x, float y) : x(x), y(y) {}

// Vector operations
Vertex2D Vertex2D::scalar_product(float scalar) const
{
    return Vertex2D(x * scalar, y * scalar);
}
float Vertex2D::dot_product(Vertex2D &rhs) const
{
    return x * rhs.x + y * rhs.y;
}

// Operator overloads
Vertex2D Vertex2D::operator+(Vertex2D &rhs) const
{
    return Vertex2D(x + rhs.x, y + rhs.y);
}
Vertex2D Vertex2D::operator-(Vertex2D &rhs) const
{
    return Vertex2D(x - rhs.x, y - rhs.y);
}
Vertex2D Vertex2D::operator*(Vertex2D &rhs) const
{
    return Vertex2D(x * rhs.x, y * rhs.y);
}