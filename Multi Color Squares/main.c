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

  glBegin(GL_QUAD_STRIP);
  glColor3f(0.25, 0.95, 0.27);
  glVertex2f(-1, 0);
  glVertex2f(-1, 1);
  glVertex2f(-0.34, 0);
  glVertex2f(-0.34, 1);
  glColor3f(0.25, 0.36, 0.95);
  glVertex2f(0.34, 0);
  glVertex2f(0.34, 1);
  glColor3f(0.6, 0.2, 1);
  glVertex2f(1, 0);
  glVertex2f(1, 1);
  glEnd();

  glBegin(GL_QUAD_STRIP);
  glColor3f(1, 1, 0.4);
  glVertex2f(-1, -1);
  glVertex2f(-1, 0);
  glVertex2f(-0.34, -1);
  glVertex2f(-0.34, 0);
  glColor3f(1, 0, 1);
  glVertex2f(0.34, -1);
  glVertex2f(0.34, 0);
  glColor3f(0.95, 0.56, 0.);
  glVertex2f(1, -1);
  glVertex2f(1, 0);
  glEnd();

  glFlush();
  glutSwapBuffers();
 
}
 
int main(int argc, char* argv[]){
 
  glutInit(&argc,argv);
 
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

  glutInitWindowSize(800, 600);
 
  glutCreateWindow("Tessellation of squares");
 
  glEnable(GL_DEPTH_TEST);
 
  glutDisplayFunc(display);
 
  glutMainLoop();
 
  return 0;
 
}
