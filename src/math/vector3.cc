// Vector3 class

#include "vector3.h"

Vector3::Vector3() :
x_(0.0),
y_(0.0),
z_(0.0)
{
}


Vector3::Vector3(double x, double y, double z) {
    x_ = x;
    y_ = y;
    z_ = z;
}

int Vector3::x() {return x_;}
int Vector3::y() {return y_;}
int Vector3::z() {return z_;}
