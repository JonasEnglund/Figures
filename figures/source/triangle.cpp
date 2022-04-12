#include "../headers/triangle.h"

using namespace cnv;

void Triangle::draw() {

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(red, green, blue);
    glBegin(GL_TRIANGLES);
    {
        glVertex2f(x1, y1);
        glVertex2f(x2, y2);
        glVertex2f(x3, y3);
    }
    glEnd();
    glFlush();
}
