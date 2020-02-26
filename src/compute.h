#include "scene.h"
#ifndef COMPUTE_H
#define COMPUTE_H

class Compute {

private:
    const Scene * const modelling_scene;

public:


    explicit Compute(Scene *input_scene) : modelling_scene(input_scene){}; //TODO search up explicits

    Vector3  get_color(Ray * r) {
        for(int i = 0; i< modelling_scene->num_shapes; i++) {
            Shape::Intersect * intersection = modelling_scene->scene_objects->compute_intersection_point(r);
            if(intersection->hit != 0) {


                //TODO below is a test script just to see if everything is working fine (an integration test)

                return Vector3(255, 0, 0);

            } else {
                return Vector3(0,0,0);
            }

        }
    }


};




#endif
