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
    Vertex3D scalar_product(float scalar);
    float dot_product(Vertex3D rhs);
    Vertex3D cross_product(Vertex3D rhs);
    
    // Operator overloads
    Vertex3D operator+(Vertex3D rhs);
    Vertex3D operator-(Vertex3D rhs);
    Vertex3D operator*(Vertex3D rhs);

};

#endif // !VERTEX3D_HPP
