#ifndef SPHERE_H
#define SPHERE_H
#include "vector.h"
#include "shape.h"

class Sphere: public Shape {
private:
    const float radius;
    Vector3 *center;

public:

    Sphere(float radius, Vector3* center) : radius(radius), center(center) {}

    Intersect* compute_intersection_point(Ray *r) const override;

};
#endif