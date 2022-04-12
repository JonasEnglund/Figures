#include "../headers/figure.h"

void Figure::changeColor(float r, float g, float b) {
    this->red = r;
    this->green = g;
    this->blue = b;

    glColor3f(red, green, blue);
}

void Figure::Rotate(float angle, float x, float y, float z) {
    glRotatef(angle, x, y, z);
}