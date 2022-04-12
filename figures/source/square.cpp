#include "../headers/square.h"

using namespace cnv;

void Square::draw() {
    float w = this->width;
    float h = this->height;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(red, green, blue);
    glBegin(GL_QUADS);
    {
        glVertex2f(-w/2,h/2);
        glVertex2f(-w/2,-h/2);
        glVertex2f(w/2,-h/2);
        glVertex2f(w/2,h/2);
    }
    glEnd();
    glFlush();
}