#ifndef SPECTRUM_H
#define SPECTRUM_H

#include "vector.h"

class spectrum {

private:
    Vector3 *color;

public:

    spectrum(Vector3* color) {
        this->color = color;
    };

};

#endif