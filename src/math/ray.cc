#include "ray.h"

Ray::Ray() :
origin_(Vector3(0, 0, 0)),
direction_(Vector3(0, 0, 0))
{
}

Ray::Ray(Vector3 &origin, Vector3 &direction) :
origin_(origin),
direction_(direction)
{
}

Vector3 Ray::origin() {
    return origin_;
}

Vector3 Ray::direction() {
    return direction_;
}

void Ray::setOrigin(Vector3 &origin) {
    origin_ = origin;
}

void Ray::setDirection(Vector3 &direction) {
    direction_ = direction;
}


