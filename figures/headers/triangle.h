#ifndef TOPSYSTEMS_TRIANGLE_H
#define TOPSYSTEMS_TRIANGLE_H

#include "figure.h"

class Triangle : public Figure {
public:
    Triangle(float x_1, float y_1, float x_2, float y_2, float x_3, float y_3) :x1(x_1), y1(y_1),
                                                                                x2(x_2), y2(y_2),
                                                                                x3(x_3), y3(y_3) {}
    void draw();

private:
    float x1, y1;
    float x2, y2;
    float x3, y3;
};

#endif //TOPSYSTEMS_TRIANGLE_H
