#ifndef LIGHT_H
#define LIGHT_H
#include "vector.h"

class Light {

    const Vector3 * const location;
    const int brightness;

    Light(const Vector3 * const location, int brightness) : location(location), brightness(brightness) {}
};
#endif