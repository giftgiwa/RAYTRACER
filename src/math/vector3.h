#include <iostream>

#pragma once

class Vector3 {
    public:
        Vector3(); // default constructor
        
        Vector3(double x, double y, double z);

        int x();
        int y();
        int z();

        Vector3 operator+(Vector3 &other) {
            return Vector3(x_ + other.x(), y_ + other.y(), z_ + other.x());
        }

        Vector3 operator-(Vector3 &other) {
            return Vector3(x_ - other.x(), y_ - other.y(), z_ - other.x());
        }

        double operator[](int i) const {
            if (i >= 3 || i < 0) { // out of bounds
                exit(0);
            }
            else {
                if (i == 0) {
                    return x_;
                } else if (i == 1) {
                    return y_;
                } else { // i == 2
                    return z_;
                }
            }
        }

    protected:
        double x_;
        double y_;
        double z_;

};
