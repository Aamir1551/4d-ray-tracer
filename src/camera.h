#ifndef CAMERA_H
#define CAMERA_H
#include "vector.h"
#include "ray.h"
#include "scene.h"

class Camera {

private:

    const Vector3 * const bottom_left_vertex = new Vector3(0, 0, 5);
    const Vector3 * const top_right_vertex = new Vector3(10, 10, 5);
    const Vector3 * const top_left_vertex = new Vector3(0, 10, 5);

    const Vector3 * const eye = new Vector3(5, 5, 0);


    const Vector3 * const width_vector = Vector3::subtract(top_left_vertex, top_right_vertex);
    const int camera_width = (int) width_vector->length();
    const Vector3 * const unit_width_vector = Vector3::multiply(width_vector, camera_width);

    const Vector3 * const height_vector = Vector3::subtract(top_left_vertex, bottom_left_vertex);
    const int camera_height = (int) height_vector->length();
    const Vector3 * const unit_height_vector = Vector3::multiply(height_vector, camera_width);

    const int kcamera_area = camera_width * camera_height;

    inline Ray* get_ray(Vector3* point_on_frame) {
        return new Ray(this->eye, Vector3::subtract(point_on_frame, eye));
    }

public:


    Vector3* fill_camera(Scene * input_scene) const;

};

#endif