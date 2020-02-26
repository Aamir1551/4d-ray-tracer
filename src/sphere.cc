#include "shape.h"
#include "sphere.h"


Sphere::Intersect* Sphere::compute_intersection_point(Ray *r) const {

    const Vector3 * origin_to_center = Vector3::subtract(r->origin, this->center);

    float a = Vector3::dot(r->direction, r->direction);
    float b = 2 * Vector3::dot(r->direction, origin_to_center);
    float c = Vector3::dot(origin_to_center, origin_to_center) - (this->radius) * this->radius;

    float discriminant = b*b - 4 * a * c;

    if(discriminant > 0) {
        float intersect_t = (-b - sqrt(discriminant))/ (2 * a); //negative is the only one to be considered???
        return new Intersect(true, r->get_value_at_t(intersect_t));
    } else {
        return new Intersect(false, nullptr);
    }

}


