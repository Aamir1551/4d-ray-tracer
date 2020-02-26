#ifndef SHAPE_H
#define SHAPE_H
#include "vector.h"
#include "ray.h"

class Shape {

protected:
    Shape() = default;


public:

    class Intersect  {

    public:
           const bool hit;
           const Vector3* intersection_point;

    public:
        Intersect(bool hit, const Vector3* intersection_point) : hit(hit) {
            this-> intersection_point = intersection_point;
        }

   };

   virtual Intersect* compute_intersection_point(Ray *r ) const{};

};
#endif