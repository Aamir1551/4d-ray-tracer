#ifndef CANVAS_H
#define CANVAS_H

#include "vector.h"
//#include "spectrum.h"

class Canvas {

private:


    //TODO add extra functionality for changing cnavas height and width to set variables
    //int const kCanvasHeight = 500;
    //int const kCanvasWidth = 500;

public:

    static void draw(const char* file_name, Vector3* colors, int window_height, int window_width);






};

#endif