#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>


class Vector3 {

private:
    float values[3];

public:

    Vector3(float a, float b, float c);


    static Vector3* add (const Vector3 *a, const Vector3 *b);

    static Vector3*  subtract(const Vector3 *a, const Vector3 *b);

    static Vector3*  multiply(const Vector3* b, float a );

    static Vector3*  multiply(const Vector3 *a, const Vector3 *b);

    static float dot(const Vector3 *a, const Vector3 *b);

    float operator [](int a) const;

    float & operator [](int a) {return this->values[a];};

    static Vector3* get_unit_vector(const Vector3 *a);


    float length() const {
        return sqrt(values[0] * values[1] + values[1] * values[1] + values[2] * values[2]);
    }


    void make_unit_vector();

};

//Vector3 * operator +(Vector3& a, Vector3& b) {
//    return Vector3::add(&a, &b);
//}


#endif