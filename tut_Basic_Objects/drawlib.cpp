#include "drawlib.h"

float x, y;

Figure cateyes, treeleaves;
Figure chi;
Figure grib;
Figure chel;
clock_t curTime, startTime;

void drawCat(float x, float y, Figure cateyes) {
    glTranslatef(x, y, 0);
    glBegin(GL_TRIANGLES);

    //body
    glColor3f(0.4, 0.3, 0.35);
    glVertex2f(0.27, -0.5);
    glVertex2f(-0.27, -0.5);
    glVertex2f(0.0, 0.1);

    //head
    glColor3f(0.4, 0.3, 0.35);
    glVertex2f(0.2, 0.3);
    glVertex2f(-0.2, 0.3);
    glVertex2f(0.0, -0.1);

    //nose
    glColor3f(0.8, 0.0, 0.5);
    glVertex2f(0.04, 0.13);
    glVertex2f(-0.04, 0.13);
    glVertex2f(0.0, 0.09);

    //right ear
    glColor3f(0.4, 0.3, 0.35);
    glVertex2f(0.2, 0.3);
    glVertex2f(0.15, 0.45);
    glVertex2f(0.1, 0.3);

    //left ear
    glColor3f(0.4, 0.3, 0.35);
    glVertex2f(-0.2, 0.3);
    glVertex2f(-0.15, 0.45);
    glVertex2f(-0.1, 0.3);

    //left centre ear
    glColor3f(0.9, 0.0, 0.8);
    glVertex2f(-0.18, 0.3);
    glVertex2f(-0.15, 0.40);
    glVertex2f(-0.12, 0.3);

    //right centre ear
    glColor3f(0.9, 0.0, 0.8);
    glVertex2f(0.18, 0.3);
    glVertex2f(0.15, 0.40);
    glVertex2f(0.12, 0.3);

    glEnd();

    glBegin(GL_QUADS);

    //right eye
    glColor3f(cateyes.r, cateyes.g, cateyes.b);
    glVertex2f(0.12, 0.25);
    glVertex2f(0.12, 0.20);
    glVertex2f(0.07, 0.20);
    glVertex2f(0.07, 0.25);

    //left eye
    glColor3f(cateyes.r, cateyes.g, cateyes.b);
    glVertex2f(-0.12, 0.25);
    glVertex2f(-0.12, 0.20);
    glVertex2f(-0.07, 0.20);
    glVertex2f(-0.07, 0.25);

    //left centre eye   
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.10, 0.25);
    glVertex2f(-0.10, 0.20);
    glVertex2f(-0.09, 0.20);
    glVertex2f(-0.09, 0.25);

    //right centre eye
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.10, 0.25);
    glVertex2f(0.10, 0.20);
    glVertex2f(0.09, 0.20);
    glVertex2f(0.09, 0.25);


    glEnd();

    glBegin(GL_LINES);

    //right usi
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(0.0, 0.09);
    glVertex2f(0.1, 0.13);

    glVertex2f(0.0, 0.09);
    glVertex2f(0.1, 0.10);

    glVertex2f(0.0, 0.09);
    glVertex2f(0.1, 0.07);

    //left usi
    glVertex2f(0.0, 0.09);
    glVertex2f(-0.1, 0.13);

    glVertex2f(0.0, 0.09);
    glVertex2f(-0.1, 0.10);

    glVertex2f(0.0, 0.09);
    glVertex2f(-0.1, 0.07);

    glEnd();

    glTranslatef(-x, -y, 0);
}
void drawBigHouse(float x, float y) {
    glTranslatef(x, y, 0);

    glBegin(GL_QUADS);

    //wall
    glColor3f(1, 0.9, 0.8);
    glVertex2f(-.6, -.5);
    glVertex2f(-.6, .4);
    glVertex2f(.6, .4);
    glVertex2f(.6, -.5);

    //llbwindow
    glColor3f(0, 0.7, 1);
    glVertex2f(-.5, -.2);
    glVertex2f(-.5, 0);
    glVertex2f(-.4, 0);
    glVertex2f(-.4, -.2);

    //lrbwindow
    glVertex2f(-.3, -.2);
    glVertex2f(-.3, 0);
    glVertex2f(-.2, 0);
    glVertex2f(-.2, -.2);

    //lluwindow
    glVertex2f(-.5, .1);
    glVertex2f(-.5, .3);
    glVertex2f(-.4, .3);
    glVertex2f(-.4, .1);

    //lruwindow
    glVertex2f(-.3, .1);
    glVertex2f(-.3, .3);
    glVertex2f(-.2, .3);
    glVertex2f(-.2, .1);

    //rlbwindow
    glVertex2f(.2, -.2);
    glVertex2f(.2, 0);
    glVertex2f(.3, 0);
    glVertex2f(.3, -.2);

    //rrbwindow
    glVertex2f(.4, -.2);
    glVertex2f(.4, 0);
    glVertex2f(.5, 0);
    glVertex2f(.5, -.2);

    //rluwindow
    glVertex2f(.2, .1);
    glVertex2f(.2, .3);
    glVertex2f(.3, .3);
    glVertex2f(.3, .1);

    //rruwindow
    glVertex2f(.4, .1);
    glVertex2f(.4, .3);
    glVertex2f(.5, .3);
    glVertex2f(.5, .1);

    //door
    glColor3f(0.6, 0.4, 0.2);
    glVertex2f(-.1, -.5);
    glVertex2f(-.1, -.2);
    glVertex2f(.1, -.2);
    glVertex2f(.1, -.5);

    //pipe
    glColor3f(0.5, 0.5, 0.5);
    glVertex2f(.4, .5);
    glVertex2f(.4, .8);
    glVertex2f(.6, .8);
    glVertex2f(.6, .5);
    glEnd();
    glBegin(GL_TRIANGLES);

    //roof
    glColor3f(0.8, 0.3, 0.3);
    glVertex2f(-.8, .4);
    glVertex2f(0, .9);
    glVertex2f(.8, .4);

    glEnd();

    glTranslatef(-x, -y, 0);
}
void drawTree(float x, float y, Figure treeleaves) {
    glTranslatef(x, y, 0);
    glBegin(GL_TRIANGLES);

    //leaves
    glColor3f(treeleaves.r, treeleaves.g, treeleaves.b);
    glVertex2f(0.0, 0.6);
    glVertex2f(-0.2, 0.1);
    glVertex2f(0.2, 0.1);

    glEnd();

    glBegin(GL_QUADS);

    //wood
    glColor3f(0.58, 0.43, 0.2);
    glVertex2f(-0.05, 0.0);
    glVertex2f(-0.05, 0.1);
    glVertex2f(0.05, 0.1);
    glVertex2f(0.05, 0.0);

    glEnd();

    glTranslatef(-x, -y, 0);
}
void animateScene(int value) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, animateScene, 1);
}
void drawSun(float r, float g, float b, float scaleX, float scaleY, float translateX, float trnslateY) {
    glPushMatrix();
    glBegin(GL_TRIANGLE_FAN);
    for (float i = 0; i < 2 * M_PI; i += M_PI / 16) {
        glColor3f(.8, .8, .8);
        glVertex2f((cos(i) / 6) + 00.78, (sin(i) / 6) + 0.78);
    }
    glEnd();
    glPopMatrix();

}
void Background(float r, float g, float b) {

    glBegin(GL_QUADS);

    glColor3f(r, g, b);
    glVertex2f(1.12, 1.25);
    glVertex2f(-1.12, 1.20);
    glColor3f(r - 0.5, g - 0.5, b - 0.5);
    glVertex2f(-1.07, -1.20);
    glVertex2f(1.07, -1.25);

    glEnd();
}
void Platformd(float r, float g, float b) {

    glBegin(GL_QUADS);

    glColor3f(r, g, b);
    glVertex2f(1.12, -0.3);
    glVertex2f(-1.12, -0.3);
    glColor3f(r - 0.5, g - 0.5, b - 0.5);
    glVertex2f(-1.07, -1.20);
    glVertex2f(1.07, -1.25);

    glEnd();

}
void Chicken(Figure chi) {
    glTranslatef(chi.x, chi.y, 0);
    glBegin(GL_TRIANGLES);


    glColor3f(chi.r, chi.g, chi.b);
    glVertex2f(-1.0, 1.0);
    glVertex2f(-0.5, 1.0);
    glVertex2f(-1.0, 0.5);

    glEnd();
    glTranslatef(-chi.x, -chi.y, 0);
}
void Grib(Figure grib) {
    glTranslatef(grib.x, grib.y, 0);

    glBegin(GL_QUADS);

    glColor3f(grib.r, grib.g, grib.b);
    glVertex2f(0.01, 0.0);
    glVertex2f(-0.01, 0.0);
    glVertex2f(-0.01, 0.05);
    glVertex2f(0.01, 0.05);

    glColor3f(grib.r, grib.g, grib.b);
    glVertex2f(0.03, 0.05);
    glVertex2f(-0.03, 0.05);
    glVertex2f(-0.03, 0.1);
    glVertex2f(0.03, 0.1);


    glEnd();


    glTranslatef(-grib.x, -grib.y, 0);
}
void drawChel1(Figure chell) {

    glBegin(GL_QUADS);

    //тело что тупо болит
    glColor3f(chel.r, chel.g, chel.b);
    glVertex2f(-0.01, 0.0);
    glVertex2f(-0.01, 0.2);
    glVertex2f(0.01, 0.2);
    glVertex2f(0.01, 0.0);

    //голова (маленькая чтобы был управляем)
    glColor3f(chel.r, chel.g, chel.b);
    glVertex2f(-0.03, 0.21);
    glVertex2f(-0.03, 0.2);
    glVertex2f(0.03, 0.2);
    glVertex2f(0.03, 0.21);

    glEnd();
}
void draw() {

    curTime = clock();

    curTime = clock() - startTime;

    cateyes.r = 1.0;
    cateyes.g = 1.0;
    cateyes.b = 0.0;

    treeleaves.r = 0.1;
    treeleaves.g = 0.7;
    treeleaves.b = 0.1;

    chi.r = 1;
    chi.g = 1;
    chi.b = 0;
    chi.x = 0;
    chi.y = 0;

    grib.x = 0.51;
    grib.y = -0.30;
    grib.r = 1;
    grib.g = 1;
    grib.b = 1;



    glPushMatrix();


    Background(0.3, 0.6, 0.9);
    Platformd(0.0, 0.8, 0.0);





    if (curTime < 1000) {
        y = curTime * -0.002;
    }
    else {
        if (curTime < 2000) {
            y = -2.0;
            x = 0.0;
        }
        else {
            if ((curTime > 2000) & (curTime < 3500)) {
                x = (curTime - 2000) * 0.001;
                y = -2.0;
            }
            else {
                y = -2.0;
                x = 1.7;
                if (curTime > 22000) {
                    x = -(curTime - 2000) * 0.001;
                    y = -2.0;
                    grib.y = -2222.1;
                }
                else {
                    if (curTime > 21000) {
                        grib.r = 0;
                        grib.g = 0;
                        grib.b = 0;
                        grib.y = -0.1;
                        chi.r = 0;
                        chi.g = 0;
                        chi.b = 0;
                        treeleaves.r = 0;
                        treeleaves.g = 0;
                        treeleaves.b = 0;
                        cateyes.r = 0;
                        cateyes.g = 0;
                        cateyes.b = 0;
                    }
                    else {
                        if (curTime > 19000) {
                            grib.r = 0;
                            grib.g = 0;
                            grib.b = 0;
                            grib.y = -0.1;
                            chi.r = 0;
                            chi.g = 0;
                            chi.b = 0;
                            treeleaves.r = 0;
                            treeleaves.g = 0;
                            treeleaves.b = 0;
                            cateyes.r = sin(curTime * 0.016);
                            cateyes.g = sin(curTime * 0.015);
                            cateyes.b = sin(curTime * 0.017);
                        }
                        else {
                            if (curTime > 18000) {
                                grib.r = 0;
                                grib.g = 0;
                                grib.b = 0;
                                grib.y = -0.1;
                                chi.r = sin(curTime * 0.003);
                                chi.g = sin(curTime * 0.005);
                                chi.b = sin(curTime * 0.001);
                                treeleaves.r = sin(curTime * 0.003);
                                treeleaves.g = sin(curTime * 0.004);
                                treeleaves.b = sin(curTime * 0.006);
                                cateyes.r = sin(curTime * 0.016);
                                cateyes.g = sin(curTime * 0.015);
                                cateyes.b = sin(curTime * 0.017);
                            }
                            else {
                                if (curTime > 17000) {
                                    grib.r = 0;
                                    grib.g = 0;
                                    grib.b = 0;
                                    grib.y = -(curTime - 17000) * 0.00008;
                                    chi.r = sin(curTime * 0.003);
                                    chi.g = sin(curTime * 0.005);
                                    chi.b = sin(curTime * 0.001);
                                    treeleaves.r = sin(curTime * 0.003);
                                    treeleaves.g = sin(curTime * 0.004);
                                    treeleaves.b = sin(curTime * 0.006);
                                    cateyes.r = sin(curTime * 0.006);
                                    cateyes.g = sin(curTime * 0.005);
                                    cateyes.b = sin(curTime * 0.007);
                                }
                                else {
                                    if (curTime > 15000) {
                                        grib.r = 0;
                                        grib.g = 0;
                                        grib.b = 0;
                                        grib.y = (curTime - 12000) * 0.00003;
                                        chi.r = sin(curTime * 0.003);
                                        chi.g = sin(curTime * 0.005);
                                        chi.b = sin(curTime * 0.001);
                                        treeleaves.r = sin(curTime * 0.003);
                                        treeleaves.g = sin(curTime * 0.004);
                                        treeleaves.b = sin(curTime * 0.006);
                                        cateyes.r = sin(curTime * 0.006);
                                        cateyes.g = sin(curTime * 0.005);
                                        cateyes.b = sin(curTime * 0.007);
                                    }
                                    else {
                                        if (curTime > 14000) {
                                            grib.r = 1;
                                            grib.g = 0;
                                            grib.b = 0;
                                            grib.y = (curTime - 12000) * 0.00003;
                                            chi.r = sin(curTime * 0.003);
                                            chi.g = sin(curTime * 0.005);
                                            chi.b = sin(curTime * 0.001);
                                            treeleaves.r = sin(curTime * 0.003);
                                            treeleaves.g = sin(curTime * 0.004);
                                            treeleaves.b = sin(curTime * 0.006);
                                            cateyes.r = sin(curTime * 0.006);
                                            cateyes.g = sin(curTime * 0.005);
                                            cateyes.b = sin(curTime * 0.007);
                                        }
                                        else {
                                            if (curTime > 13000) {
                                                grib.r = 1;
                                                grib.g = 1;
                                                grib.b = 0;
                                                grib.y = (curTime - 12000) * 0.00003;
                                                chi.r = sin(curTime * 0.003);
                                                chi.g = sin(curTime * 0.005);
                                                chi.b = sin(curTime * 0.001);
                                                treeleaves.r = sin(curTime * 0.003);
                                                treeleaves.g = sin(curTime * 0.004);
                                                treeleaves.b = sin(curTime * 0.006);
                                                cateyes.r = sin(curTime * 0.006);
                                                cateyes.g = sin(curTime * 0.005);
                                                cateyes.b = sin(curTime * 0.007);
                                            }
                                            else {
                                                if (curTime > 11000) {
                                                    grib.y = (curTime - 12000) * 0.00003;
                                                    chi.r = sin(curTime * 0.003);
                                                    chi.g = sin(curTime * 0.005);
                                                    chi.b = sin(curTime * 0.001);
                                                    treeleaves.r = sin(curTime * 0.003);
                                                    treeleaves.g = sin(curTime * 0.004);
                                                    treeleaves.b = sin(curTime * 0.006);
                                                    cateyes.r = sin(curTime * 0.006);
                                                    cateyes.g = sin(curTime * 0.005);
                                                    cateyes.b = sin(curTime * 0.007);
                                                }
                                                else {
                                                    if (curTime > 9000) {
                                                        chi.r = sin(curTime * 0.003);
                                                        chi.g = sin(curTime * 0.005);
                                                        chi.b = sin(curTime * 0.001);
                                                        treeleaves.r = sin(curTime * 0.003);
                                                        treeleaves.g = sin(curTime * 0.004);
                                                        treeleaves.b = sin(curTime * 0.006);
                                                        cateyes.r = sin(curTime * 0.006);
                                                        cateyes.g = sin(curTime * 0.005);
                                                        cateyes.b = sin(curTime * 0.007);
                                                    }
                                                    else {
                                                        if (curTime > 7000) {
                                                            chi.r = sin(curTime * 0.003);
                                                            chi.g = sin(curTime * 0.005);
                                                            chi.b = sin(curTime * 0.001);
                                                            treeleaves.r = sin(curTime * 0.003);
                                                            treeleaves.g = sin(curTime * 0.004);
                                                            treeleaves.b = sin(curTime * 0.006);
                                                            cateyes.r = sin(curTime * 0.006);
                                                            cateyes.g = sin(curTime * 0.005);
                                                            cateyes.b = sin(curTime * 0.007);
                                                        }
                                                        else {
                                                        } 
                                                        
                                                        if (curTime > 6000) {
                                                            treeleaves.r = sin(curTime * 0.003);
                                                            treeleaves.g = sin(curTime * 0.004);
                                                            treeleaves.b = sin(curTime * 0.006);
                                                            cateyes.r = sin(curTime * 0.006);
                                                            cateyes.g = sin(curTime * 0.005);
                                                            cateyes.b = sin(curTime * 0.007);
                                                        }
                                                        else {
                                                            if (curTime > 4000) {
                                                                cateyes.r = sin(curTime * 0.006);
                                                                cateyes.g = sin(curTime * 0.005);
                                                                cateyes.b = sin(curTime * 0.007);
                                                            }
                                                            else {
                                                                if (curTime > 5000) {
                                                                    cateyes.r = sin(curTime * 0.006);
                                                                    cateyes.g = sin(curTime * 0.005);
                                                                    cateyes.b = sin(curTime * 0.007);
                                                                }
                                                                else {
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }



    glPopMatrix();
    glPushMatrix();
    Chicken(chi);
    Grib(grib);
    drawTree(0.7, -0.8, treeleaves);
    drawTree(0.9, -0.45, treeleaves);
    drawTree(0.5, -0.9, treeleaves);
    drawTree(-0.6, -0.6, treeleaves);
    drawTree(-0.2, -0.9, treeleaves);



    glScalef(0.3, 0.3, 1.0);
    glTranslatef(0.0, 1.5, 0.0);
    drawCat(x, y, cateyes);
    glPopMatrix();
}
