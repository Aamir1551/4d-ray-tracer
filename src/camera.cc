#include "vector.h"
#include "ray.h"
#include "camera.h"
#include "scene.h"
#include "compute.h"

Vector3 * Camera::fill_camera(Scene *input_scene) const {

    //loop over each image in input scene
    //find which object in scene is closest
    //use the rendering equation to find the intensity of light for that image for all 3 rgb colors
    //then plot that point
    Vector3 (*colours)[];

    Compute * scene_compute = new Compute(input_scene);
    for(int i = 0; i < camera_height; i++) {
        Vector3* pixel_frame_height = Vector3::add(bottom_left_vertex, Vector3::multiply(unit_height_vector, i));
        for(int j = 0; j< camera_width; j++) {

            Vector3 * pixel_location = Vector3::add(pixel_frame_height, Vector3::multiply(unit_width_vector, j));

            Ray * pixel_ray = new Ray(eye, pixel_location);
            (*colours)[i*camera_width + j] = (scene_compute->get_color(pixel_ray));
        }
    }

    return (*colours);

}
