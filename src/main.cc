#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "vector.h"
#include "scene.h"
#include "sphere.h"
#include "camera.h"
#include "canvas.h"

int main() {

    std::cout << "Hello, World!" << std::endl;


    Vector3 *sphere_center = new Vector3(10, 4, 1);

    Sphere *scene_spheres = new Sphere(10, sphere_center);
    Scene* s = new Scene(scene_spheres, 1);

    Camera *c = new Camera();
    Vector3 *colours = c->fill_camera(s);

    Canvas::draw("pic.ppm", colours, 10, 10);







    return 0;

}