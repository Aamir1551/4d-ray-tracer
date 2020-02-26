#ifndef SCENE_H
#define SCENE_H
#include "shape.h"

class Scene{

public:

    const Shape * const scene_objects;
    const int num_shapes;
    //const Vector3 * const lights;

    Scene(const Shape * const scene_objects, int num_shapes): scene_objects(scene_objects), num_shapes(num_shapes) {}


};

#endif