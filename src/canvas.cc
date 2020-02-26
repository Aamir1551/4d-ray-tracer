#include "canvas.h"
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


void Canvas::draw(const char* file_name, Vector3* color, int window_height, int window_width) {
    std::ofstream file_pointer;
    file_pointer.open(file_name);



    for(int i = 0;i < window_height;i++) {
        std::string row_color;
        for(int j = 0;j<window_width;j++) {
            for(int c = 0;c<3;c++) {
                char pixel_colour[3];
                std::sprintf(pixel_colour, "%03i ", (int) round(color[i+j * window_height][c]));
                row_color.append(pixel_colour);
            }
        }
        file_pointer << row_color << std::endl;
    }

    file_pointer.close();
}