#pragma once
#ifndef TOPSYSTEMS_CIRCLE_H
#define TOPSYSTEMS_CIRCLE_H

#include "../../lib/glcanvas.hpp"
#include "figure.h"

class Circle : public Figure {
public:
    Circle(float r) : radius(r) {}
    Circle(float r, float posX, float posY) : Figure(posX, posY), radius(r) {}
    void draw();

private:
    float radius;
};

#endif //TOPSYSTEMS_CIRCLE_H
