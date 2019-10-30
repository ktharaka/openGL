// Task 1: Fill-in the blanks as comments Q1-Q15.
// Task 2: Type this code in a notepad and run it with the necessary inputs. The input can be your obj file created or the default monkey.obj.
// Task 3: Upload the output, the sourcecode, the obj file to the UGVLE.
// NOTE: You may remove the dotted lines and fill it without the dotted lines (as comments).
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#define MAX_VERTICES 6000 // Q11. Explain this line:
// If c++ preprocessor finds MAX_VERTICES in the source code before compilation it replaces it with number 6000
#define MAX_POINTS_PER_FACE 10 // Q12. Explain this line:
// If c++ preprocessor finds MAX_POINTS_PER_FACE in the source code before compilation it replaces it with number 10
#define MAX_FACES 1000 // Q13. Explain this line:
// // If c++ preprocessor finds MAX_FACES in the source code before compilation it replaces it with number 1000
float vertex_list[MAX_VERTICES][3]; // Q14. Explain this line:
// declare two dimensional array named vertex_list with array size [6000][3]
int face_vertex_list[MAX_FACES][MAX_POINTS_PER_FACE]; // Q15. Explain this line:
// declare two dimensional array named face_vertex_list with array size [1000][10]
int n_vertices_per_face[MAX_FACES];
int vertex_index = -1;
int face_index = -1;
// Q1. Explain this code:
// declare single-dimension array named n_vertices_per_face with array size [1000]
// declare integer type variable named vertex_index and assign value -1 to it
// declare integer type variable named face_index and assign value -1 to it
int split_string(const char* str)
{
// Returns first token
char *token = strtok((char *)str, " ");
int tok_index = 0;
char* str_v("v");
int vertex_dim = -1;
int vertex_indx_per_face = -1;
// Q7. Explain this code:
// declare pointer variable as token and saperate it if there is space (" ")
// declare integer type variable named tok_index and assign value 0 to it
// declare integer type variable named vertex_dim and assign value -1 to it
// declare integer type variable named vertex_indx_per_face and assign value -1 to it
while (token != NULL)

{
printf("\n\n+++++++++++++++++++\n[%s] \n" , token);
printf("tok_index = %d\n", tok_index);
if (tok_index == 0)
{
printf("is comparison ? <%i><%i>\n", token[0], token[1]);
if (strcmp(token, "v") == 0)
{
printf("#################### VERTEX ######################## %i\n" , vertex_index);
vertex_index++;
vertex_dim = 0; // begin adding the vertex with the vertex's x value.
}
else if (strcmp(token, "f") == 0)
{
face_index++;
vertex_indx_per_face = 0;
n_vertices_per_face[face_index] = vertex_indx_per_face;
printf("ADDING FACE %i\n", face_index);
}
}
else
{
if (vertex_dim >= 0 && vertex_dim <3)
{
vertex_list[vertex_index][vertex_dim] = atof(token);
if (vertex_dim == 2)
vertex_dim = -1;
else
vertex_dim++;
}
else if (vertex_indx_per_face >= 0)
{
face_vertex_list[face_index][vertex_indx_per_face] = atoi(token); 
// atoi will automatically get rid of the "//" characters.
vertex_indx_per_face++;
n_vertices_per_face[face_index] = vertex_indx_per_face;
}
}
tok_index++;
token = strtok(NULL, " ");
}
}

// Q2. Explain this code:
// check the token is null or not. if it is not null again check "v" or "f".
// if it is "v" print it as vertex index. if it is "f" print it as face index.
// else if it checks vertex dimensions. if vertex dimension is 3 the values are save to a two dimensional array as vertex index and vertex dimension.
int read_obj_file(char* filename)
{
std::ifstream infile(filename);
std::string line;
while (std::getline(infile, line))
{
std::cout << "{{ " << line << " }}" << std::endl;
split_string(line.c_str());
}
printf("\n=====================================\n" );
for (int i = 0; i <= vertex_index; i++)
{
printf("%i: X=%f, Y=%f, Z=%f\n", vertex_list[i][0], i, vertex_list
[i][1], vertex_list[i][2]);
}
printf("\n\n****************************************\n" );
// Q8. Explain this code:
// read the .obj file and get the vertex list.
// print  it in new vertex list as X,Y,Z
// this new vertex list use to create the object
for (int i = 0; i <= face_index; i++)
{
printf("Face-%i : %i vertices\n", i, n_vertices_per_face[i]);
for (int j = 0; j<n_vertices_per_face[i]; j++)
{
printf("V%i ", face_vertex_list[i][j]);
if (j<n_vertices_per_face[i] - 1)
printf(" --> ");
}
printf("\n");
}
return 0;
}
//
// File: mycube.c
// Author: Matt Daisley
// Created: 4/25/2012
// Project: Source code for Make a Cube in OpenGL
// Description: Creates an OpenGL window and draws a 3D cube
// That the user can rotate using the arrow keys
//
// Controls: Left Arrow - Rotate Left
// Right Arrow - Rotate Right
// Up Arrow - Rotate Up
// Down Arrow - Rotate Down
// ----------------------------------------------------------
// Includes
// ----------------------------------------------------------
#include <stdio.h>
#include <stdarg.h>
#include <math.h>
#define GL_GLEXT_PROTOTYPES
#ifdef __APPLE__
#else
#include <GL/glut.h>
#endif
// ----------------------------------------------------------
// Function Prototypes
// ----------------------------------------------------------
void display();
void specialKeys();
// ----------------------------------------------------------
// Global Variables
// ----------------------------------------------------------
double rotate_y = 0;
double rotate_x = 0;
// Q3. Explain this code:
// declare double type variable named rotate_y and assign value 0 to it
// declare double type variable named rotate_x and assign value 0 to it
float randomFloat()
{
float r = (float)rand() / (float)RAND_MAX;
return r;
}
// Q4. Explain this code:
// get random floating point values and divide by maximum random value 
// this values use to get random colors

// ----------------------------------------------------------
// display() Callback function
// ----------------------------------------------------------

void display()
{
// Clear screen and Z-buffer
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
// Reset transformations
glLoadIdentity();
// Rotate when user changes rotate_x and rotate_y
glRotatef(rotate_x, 1.0, 0.0, 0.0);
glRotatef(rotate_y, 0.0, 1.0, 0.0);
glScalef(0.3f, 0.3f, 0.3f);
float colour_dif = 1.0f / face_index;
// Q9. Explain this code:
// call glRotation function to display the rotations
// Scale factors of the x,y,z axis
for (int i = 0; i <= face_index; i++)
{
glBegin(GL_POLYGON);
glColor3f(randomFloat(), randomFloat(), randomFloat());
// Q10. Explain this code:
// Specifies primitive that will be created from vertices (polygon)
// give random colors using randomFloat() function
for (int j = 0; j<n_vertices_per_face[i]; j++)
{
int vertex_index_temp = face_vertex_list[i][j] - 1;
glVertex3f(vertex_list[vertex_index_temp][0], vertex_list[vertex_index_temp][1], vertex_list[vertex_index_temp][2]);
}
glEnd();
}
glFlush();
glutSwapBuffers();
}
// Q5. Explain this code:
// create object
// empties all buffers, causing all commands to be executed quickly
// performs a buffer swap on the layer in use for the current window

// ----------------------------------------------------------
// specialKeys() Callback Function
// ----------------------------------------------------------
void specialKeys(int key, int x, int y)
{
// Right arrow - increase rotation by 5 degree
if (key == GLUT_KEY_RIGHT)
rotate_y += 5;
// Left arrow - decrease rotation by 5 degree
else if (key == GLUT_KEY_LEFT)
rotate_y -= 5;
else if (key == GLUT_KEY_UP)
rotate_x += 5;
else if (key == GLUT_KEY_DOWN)
rotate_x -= 5;
// Request display update
glutPostRedisplay();
}
// Q6. Explain this code:
// give key controls
// if user press right arrow key object rotate 5 degrees in y axis
// if user press left arrow key object rotate -5 degrees in y axis
// if user press up arrow key object rotate 5 degrees in x axis
// if user press down arrow key object rotate -5 degrees in x axis
// ----------------------------------------------------------
// main() function
// ----------------------------------------------------------
int main(int argc, char* argv[])
{
read_obj_file("model.obj");
// Initialize GLUT and process user parameters
glutInit(&argc, argv);
// Request double buffered true color window with Z-buffer
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
// Create window
glutCreateWindow("Monkey Face");
// Enable Z-buffer depth test

glEnable(GL_DEPTH_TEST);
// Callback functions
glutDisplayFunc(display);
glutSpecialFunc(specialKeys);
// Pass control to GLUT for events
glutMainLoop();
// Return to OS
return 0;
}
