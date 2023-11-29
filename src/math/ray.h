#include <iostream>
#include "vector3.h"

class Ray {
    public:
        Ray(); // default constructor
        Ray(Vector3 &origin, Vector3 &direction);

        Vector3 origin();
        Vector3 direction();
        void setOrigin(Vector3 &origin);
        void setDirection(Vector3 &direction);

    protected:
        Vector3 origin_;
        Vector3 direction_;
};
