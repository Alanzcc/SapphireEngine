#ifndef VERTEX2D_HPP
#define VERTEX2D_HPP


class Vertex2D
{

public:
    // data
    float x, y;
    // Initializer and destructor
    Vertex2D(float x, float y);

    // Vector operations
    Vertex2D scalar_product(float scalar) const;
    float dot_product(const Vertex2D &rhs) const;
    float length() const;
    Vertex2D normalized() const;

    // Operator overloads
    Vertex2D operator+(const Vertex2D &rhs) const;
    Vertex2D operator-(const Vertex2D &rhs) const;
    Vertex2D operator*(const Vertex2D &rhs) const;
    Vertex2D operator/(const Vertex2D &rhs) const;
};

#endif // !VERTEX2D_HPP