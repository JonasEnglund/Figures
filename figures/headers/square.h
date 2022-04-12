#pragma once
#ifndef TOPSYSTEMS_SQUARE_H
#define TOPSYSTEMS_SQUARE_H

#include "../../lib/glcanvas.hpp"
#include "figure.h"

class Square : public Figure {
public:
	Square(float w, float h) : width(w), height(h) {}
    Square(float w, float h, float posX, float posY) : Figure(posX, posY), width(w), height(h) {}
    void draw();

private:
	float width;
	float height;
};

#endif //TOPSYSTEMS_SQUARE_H

