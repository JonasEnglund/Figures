#pragma once
#ifndef TOPSYSTEMS_FIGURE_H
#define TOPSYSTEMS_FIGURE_H

#include "../../lib/glcanvas.hpp"

class Figure {
public:
    Figure(float x, float y) : pos_x(x), pos_y(y) {}
    Figure() {pos_x = pos_y = 0;};
    void Rotate(float angle, float x, float y, float z);
    void changeColor(float r, float g, float b);

protected:
    float red = 255.0;
    float green = 255.0;
    float blue = 255.0;
    float pos_x;
    float pos_y;
};

#endif //TOPSYSTEMS_FIGURE_H
