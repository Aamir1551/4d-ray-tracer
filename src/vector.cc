#include "vector.h"


Vector3::Vector3(float a, float b, float c) {
    values[0] = a;
    values[1] = b;
    values[2] = c;
}

Vector3* Vector3::add(const Vector3 *a, const Vector3 *b) {
    return  new Vector3(a->values[0] + b->values[0], a->values[1] + b->values[1], a->values[2] + b->values[2]);

}

Vector3* Vector3::multiply(const Vector3 * b, float a) {
    return new Vector3(a * b->values[0], a * b->values[1], a * b->values[2]);
}

Vector3* Vector3::subtract(const Vector3 *a, const Vector3 *b) {
    return new Vector3(a->values[0] - b->values[0], a->values[1] - b->values[1], a->values[2] - b->values[2]);
}

Vector3* Vector3::multiply(const Vector3* a, const Vector3 *b) {
    return new Vector3(a->values[0] * b->values[0], a->values[1] * b->values[1], a->values[2] * b->values[2]);
}

float Vector3::dot(const Vector3 *a, const Vector3 *b) {
    return a->values[0] * b->values[0] + a->values[1] * a->values[1] + a->values[2] * a->values[2];
}

Vector3* Vector3::get_unit_vector(const Vector3 *a) {
    const float length = sqrt(a->values[0] * a->values[0] + a->values[1] * a->values[1] + a->values[2] * a->values[2]);
    return new Vector3(a->values[0] / length, a->values[1] / length, a->values[2] / length);
}

void Vector3::make_unit_vector() {
    float length = this->length();
    values[0] /= length;
    values[1] /= length;
    values[2] /= length;
}

float Vector3::operator [](int a) const {return this->values[a];}



