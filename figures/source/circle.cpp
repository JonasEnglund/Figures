#include "../headers/circle.h"
#define PI 3.141592

void Circle::draw() {
    int lineAmount = 100;
    float twicePi = 2.0f * PI;

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(red, green, blue);
    glBegin(GL_LINE_LOOP);
    for(size_t i = 0; i <= lineAmount;i++) {
        glVertex2f(
                pos_x + (radius * cos(i *  twicePi / lineAmount)),
                pos_y + (radius* sin(i * twicePi / lineAmount))
        );
    }
    glEnd();
    glFlush();
}