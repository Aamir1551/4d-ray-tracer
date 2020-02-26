#ifndef RAY_H
#define RAY_H

#include "vector.h"

class Ray {

public:

    const Vector3 * const origin;
    const Vector3 * const direction;
    //const Vector3 * color;

    inline Ray(const Vector3 * origin, const Vector3* direction): origin(origin), direction(direction){}

    inline const Vector3 * get_value_at_t(float t_val) {
        return Vector3::add(origin, Vector3::multiply(direction, t_val));
    }

};

#endif