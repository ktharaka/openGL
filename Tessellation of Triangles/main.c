#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display(){
 
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 
  glLoadIdentity();

  glShadeModel(GL_FLAT);

  glBegin(GL_LINES);
  glVertex2f(-1, -0.34);
  glVertex2f(1, -0.34);
  glEnd();

  glBegin(GL_LINES);
  glVertex2f(-1, 0.34);
  glVertex2f(1, 0.34);
  glEnd();

//TOP LAYER START
  glBegin(GL_TRIANGLES);
  glColor3f(0.54, 0.8, 0.61);
  glVertex2f(0.2, 0.62);
  glVertex2f(0, 0.34);
  glVertex2f(0.2, 0.34);
  glEnd();

 
  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.23, 0.69, 0.56);
  glVertex2f(-1, 1);
  glVertex2f(-0.9, 1);
  glVertex2f(-1,  0.67);
  glColor3f(0.5,  0.78, 0.6);
  glVertex2f(-0.7, 0.51);
  glColor3f(0.64,  0.8, 0.66);
  glVertex2f(-1, 0.34);
  glColor3f(0.82, 0.86, 0.74);
  glVertex2f(-0.5, 0.34);
  glColor3f(0.87, 0.89, 0.76);
  glVertex2f(-0.4, 0.7);
  glColor3f(0.80, 0.86, 0.76);
  glVertex2f(-0.3, 0.34);
  glColor3f(0.68, 0.84, 0.66);
  glVertex2f(-0.2, 0.59);
  glColor3f(0.94, 0.91, 0.81);
  glVertex2f(0, 0.34);
  glColor3f(0.79, 1, 0.69);
  glVertex2f(0, 0.67);
  glColor3f(0.79, 0.87, 0.69);
  glVertex2f(0.2, 0.62);
  glColor3f(0.8, 0.88, 0.8);
  glVertex2f(0.2, 1);
  glColor3f(0.55, 0.8, 0.6);
  glVertex2f(0.4, 1);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.71, 0.85, 0.67);
  glVertex2f(0.4, 1);
  glVertex2f(0.2, 0.62);
  glVertex2f(0.5, 0.55);
  glColor3f(0.81, 0.87, 0.69);
  glVertex2f(0.2, 0.34);
  glColor3f(0.72, 0.85, 0.64);
  glVertex2f(0.8, 0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.67, 0.84, 0.65);
  glVertex2f(0.5, 0.55);
  glVertex2f(0.8, 0.34);
  glVertex2f(0.8, 0.7);
  glColor3f(0.54, 0.8, 0.6);
  glVertex2f(1, 0.34);
  glColor3f(0.54, 0.89, 0.5);
  glVertex2f(1, 1);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.55, 0.8, 0.6);
  glVertex2f(1, 1);
  glVertex2f(0.8, 0.7);
  glVertex2f(0.7, 1);
  glColor3f(0.6, 0.8, 0.6);
  glVertex2f(0.5, 0.55);
  glColor3f(0.5, 0.8, 0.5);
  glVertex2f(0.2, 1);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.5, 0.8, 0.5);
  glVertex2f(0.2, 1);
  glVertex2f(0, 1);
  glVertex2f(0, 0.67);
  glColor3f(0.81, 0.87, 0.69);
  glVertex2f(-0.2, 1);
  glColor3f(0.72, 0.85, 0.64);
  glVertex2f(-0.2, 0.59);
  glColor3f(0.5, 0.8, 0.5);
  glVertex2f(-0.4, 0.7);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.54, 0.89, 0.5);
  glVertex2f(-0.2, 1);
  glVertex2f(-0.4, 0.7);
  glVertex2f(-0.6, 1);
  glColor3f(0.72, 0.85, 0.64);
  glVertex2f(-0.7, 0.51);
  glColor3f(0.5, 0.8, 0.5);
  glVertex2f(-0.9, 1);
  glEnd();
//TOP LAYER END

//MIDDLE LAYER START
  glBegin(GL_TRIANGLES);
  glColor3f(0.09, 0.36, 0.32);
  glVertex2f(0.2, -0.06);
  glVertex2f(0, -0.34);
  glVertex2f(0.2, -0.34);
  glEnd();

 
  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.14, 0.54, 0.47);
  glVertex2f(-1, 0.34);
  glVertex2f(-0.9, 0.34);
  glVertex2f(-1,  -0.01);
  glColor3f(0.13, 0.52, 0.43);
  glVertex2f(-0.7, -0.17);
  glColor3f(0.16,  0.58, 0.49);
  glVertex2f(-1, -0.34);
  glColor3f(0.14, 0.53, 0.54);
  glVertex2f(-0.5, -0.34);
  glColor3f(0.16, 0.66, 0.59);
  glVertex2f(-0.4, 0.02);
  glColor3f(0.14, 0.72, 0.65);
  glVertex2f(-0.3, -0.34);
  glColor3f(0.18, 0.71, 0.72);
  glVertex2f(-0.2, -0.09);
  glColor3f(0.14, 0.53, 0.66);
  glVertex2f(0, -0.34);
  glColor3f(0.23, 0.61, 0.66);
  glVertex2f(0, -0.01);
  glColor3f(0.23, 0.51, 0.7);
  glVertex2f(0.2, -0.06);
  glColor3f(0.27, 0.4, 0.63);
  glVertex2f(0.2, 0.34);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(0.4, 0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.25, 0.52, 0.62);
  glVertex2f(0.4, 0.34);
  glVertex2f(0.2, -0.06);
  glVertex2f(0.5, -0.13);
  glColor3f(0.15, 0.39, 0.59);
  glVertex2f(0.2, -0.34);
  glColor3f(0.14, 0.51, 0.65);
  glVertex2f(0.8, -0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.19, 0.14, 0.3);
  glVertex2f(0.5, -0.13);
  glVertex2f(0.8, -0.34);
  glVertex2f(0.8, 0.02);
  glColor3f(0.25, 0.19, 0.32);
  glVertex2f(1, -0.34);
  glColor3f(0.28, 0.21, 0.32);
  glVertex2f(1, 0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.3, 0.26, 0.46);
  glVertex2f(1, 0.34);
  glVertex2f(0.8, 0.02);
  glVertex2f(0.7, 0.34);
  glColor3f(0.28, 0.24, 0.45);
  glVertex2f(0.5, -0.13);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(0.2, 0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.27, 0.38, 0.65);
  glVertex2f(0.2, 0.34);
  glVertex2f(0, 0.34);
  glVertex2f(0, -0.01);
  glColor3f(0.27, 0.4, 0.63);
  glVertex2f(-0.2, 0.34);
  glColor3f(0.25, 0.33, 0.60);
  glVertex2f(-0.2, -0.09);
  glColor3f(0.25, 0.48, 0.67);
  glVertex2f(-0.4, 0.02);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.14, 0.51, 0.65);
  glVertex2f(-0.2, 0.34);
  glVertex2f(-0.4, 0.02);
  glVertex2f(-0.6, 0.34);
  glColor3f(0.25, 0.19, 0.32);
  glVertex2f(-0.7, -0.17);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(-0.9, 0.34);
  glEnd();
//MIDDLE LAYER END

//BOTTOM LAYER START
  glBegin(GL_TRIANGLES);
  glColor3f(0.09, 0.36, 0.32);
  glVertex2f(0.2, -0.74);
  glVertex2f(0, -1);
  glVertex2f(0.2, -1);
  glEnd();

 
  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.14, 0.54, 0.47);
  glVertex2f(-1, -0.34);
  glVertex2f(-0.9, -0.34);
  glVertex2f(-1,  -0.69);
  glColor3f(0.13, 0.52, 0.43);
  glVertex2f(-0.7, -0.85);
  glColor3f(0.16,  0.58, 0.49);
  glVertex2f(-1, -1);
  glColor3f(0.14, 0.53, 0.54);
  glVertex2f(-0.5, -1);
  glColor3f(0.16, 0.66, 0.59);
  glVertex2f(-0.4, -0.66);
  glColor3f(0.14, 0.72, 0.65);
  glVertex2f(-0.3, -1);
  glColor3f(0.18, 0.71, 0.72);
  glVertex2f(-0.2, -0.77);
  glColor3f(0.14, 0.53, 0.66);
  glVertex2f(0, -1);
  glColor3f(0.23, 0.61, 0.66);
  glVertex2f(0, -0.69);
  glColor3f(0.23, 0.51, 0.7);
  glVertex2f(0.2, -0.74);
  glColor3f(0.27, 0.4, 0.63);
  glVertex2f(0.2, -0.34);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(0.4, -0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.25, 0.52, 0.62);
  glVertex2f(0.4, -0.34);
  glVertex2f(0.2, -0.74);
  glVertex2f(0.5, -0.81);
  glColor3f(0.15, 0.39, 0.59);
  glVertex2f(0.2, -1);
  glColor3f(0.14, 0.51, 0.65);
  glVertex2f(0.8, -1);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.19, 0.14, 0.3);
  glVertex2f(0.5, -1);
  glVertex2f(0.8, -1);
  glVertex2f(0.8, -0.66);
  glColor3f(0.25, 0.19, 0.32);
  glVertex2f(1, -1);
  glColor3f(0.28, 0.21, 0.32);
  glVertex2f(1, -0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.3, 0.26, 0.46);
  glVertex2f(1, -0.34);
  glVertex2f(0.8, -0.66);
  glVertex2f(0.7, -0.34);
  glColor3f(0.28, 0.24, 0.45);
  glVertex2f(0.5, -0.81);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(0.2, -0.34);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.27, 0.38, 0.65);
  glVertex2f(0.2, -0.34);
  glVertex2f(0, -0.34);
  glVertex2f(0, -0.69);
  glColor3f(0.27, 0.4, 0.63);
  glVertex2f(-0.2, -0.34);
  glColor3f(0.25, 0.33, 0.60);
  glVertex2f(-0.2, -0.77);
  glColor3f(0.25, 0.48, 0.67);
  glVertex2f(-0.4, -0.66);
  glEnd();

  glBegin(GL_TRIANGLE_STRIP);
  glColor3f(0.14, 0.51, 0.65);
  glVertex2f(-0.2, -0.34);
  glVertex2f(-0.4, -0.66);
  glVertex2f(-0.6, -0.34);
  glColor3f(0.25, 0.19, 0.32);
  glVertex2f(-0.7, -0.85);
  glColor3f(0.28, 0.34, 0.61);
  glVertex2f(-0.9, -0.34);
  glEnd();
//BOTTOM LAYER END


  glFlush();
  glutSwapBuffers();
 
}
 
int main(int argc, char* argv[]){
 
  glutInit(&argc,argv);
 
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

  glutInitWindowSize(800, 600);
 
  glutCreateWindow("Tessellation of Triangles");
 
  glEnable(GL_DEPTH_TEST);
 
  glutDisplayFunc(display);
 
  glutMainLoop();
 
  return 0;
 
}
