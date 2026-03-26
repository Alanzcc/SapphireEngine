#ifndef VERTEX3D_HPP
#define VERTEX3D_HPP


class Vertex3D
{
public:
    // data
    float x, y, z;

    // Initializer and destructor
    Vertex3D(float x, float y, float z);

    // Vector operations
    Vertex3D scalar_product(float scalar) const;
    float dot_product(const Vertex3D& rhs) const;
    float length() const;
    Vertex3D normalized() const;
    Vertex3D cross_product(const Vertex3D& rhs) const;

    // Operator overloads
    Vertex3D operator+(const Vertex3D& rhs) const;
    Vertex3D operator-(const Vertex3D& rhs) const;
    Vertex3D operator*(const Vertex3D& rhs) const;
    Vertex3D operator/(const Vertex3D& rhs) const;

};

#endif // !VERTEX3D_HPP
