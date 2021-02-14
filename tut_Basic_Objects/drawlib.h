#ifndef DRAWLIB_H
#define DRAWLIB_H
#include "GL/freeglut.h"
#include <ctime>
#define _USE_MATH_DEFINES
#include <cmath>

struct Figure {
    float x, y;
    float r, g, b;
};

extern clock_t curTime, startTime;

void drawCat(float x, float y, Figure cateyes);
void drawBigHouse(float x, float y);
void drawTree(float x, float y, Figure treeleaves);
void animateScene(int value);
void drawSun(float r, float g, float b, float scaleX, float scaleY, float translateX, float trnslateY);
void Background(float r, float g, float b);
void Platformd(float r, float g, float b);
void Chicken(Figure chi);
void Grib(Figure grib);
void drawChel1(Figure chell);
void draw();

#endif