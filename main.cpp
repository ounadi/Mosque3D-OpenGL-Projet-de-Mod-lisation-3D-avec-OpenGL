#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void init(){ 
//background
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
}

float a=0;
float angle =0;

void display(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);//clear the color and depth buffers    
    glLoadIdentity() ; //reset  (les translation vont etre annulées

        glTranslatef(0,0.0,-12); 
        glTranslated(0,-3,0);
        glRotatef(angle,0,1,0);
        glRotatef(90,-1,0,0);




       glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
     glColor3f(1.0,0.0,0.0);
     glVertex3f(-4.922,-2.21,0.0);
     glVertex3f(-2.21,-4.922,0.0);
     glVertex3f(2.21,-4.922,0.0);
     glVertex3f(4.922,-2.21,0.0);
     glVertex3f(4.922,2.21,0.0);
     glVertex3f(2.21,4.922,0.0);
     glVertex3f(-2.21,4.922,0.0);
     glVertex3f(-4.922,2.21,0.0);
    glEnd();


// OCTAGON'S TOP
    glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(4.922,-2.21,1.8);
     glVertex3f(4.922,2.21,1.8);
     glVertex3f(0.0,0.0,2.8);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(4.922,2.21,1.8);
     glVertex3f(2.21,4.922,1.8);
     glVertex3f(0.0,0.0,2.8);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(2.21,4.922,1.8);
     glVertex3f(-2.21,4.922,1.8);
     glVertex3f(0.0,0.0,2.8);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(-2.21,-4.922,1.8);
     glVertex3f(2.21,-4.922,1.8);
     glVertex3f(0.0,0.0,2.8);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
     glVertex3f(-4.922,-2.21,1.8);
     glVertex3f(-2.21,-4.922,1.8);
     glVertex3f(0.0,0.0,2.8);
    glEnd();

   glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-4.922,2.21,1.8);
    glVertex3f(-4.922,-2.21,1.8);
    glVertex3f(0.0,0.0,2.8);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(-2.21,4.922,1.8);
    glVertex3f(-4.922,2.21,1.8);
    glVertex3f(0.0,0.0,2.8);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex3f(2.21,-4.922,1.8);
    glVertex3f(4.922,-2.21,1.8);
    glVertex3f(0.0,0.0,2.8);
   glEnd();

// OCTAGON WALLS


   glBegin(GL_QUADS);
     glColor3f(0.5,0.5,0.5);

    glVertex3f(2.21,-4.922,0.0);
    glVertex3f(4.922,-2.21,0.0);
    glColor3f(0.137255,0.137255,0.556863);

    glVertex3f(4.922,-2.21,2.0);
    glVertex3f(2.21,-4.922,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);

    glVertex3f(-2.21,-4.922,0.0);
    glVertex3f(2.21,-4.922,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(2.21,-4.922,2.0);
    glVertex3f(-2.21,-4.922,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
    glVertex3f(4.922,-2.21,0.0);
    glVertex3f(4.922,2.21,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(4.922,2.21,2.0);
    glVertex3f(4.922,-2.21,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);

    glVertex3f(4.922,2.21,0.0);
    glVertex3f(2.21,4.922,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(2.21,4.922,2.0);
    glVertex3f(4.922,2.21,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
      glVertex3f(2.21,4.922,0.0);
    glVertex3f(-2.21,4.922,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(-2.21,4.922,2.0);
    glVertex3f(2.21,4.922,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);

    glVertex3f(-2.21,4.922,0.0);
    glVertex3f(-4.922,2.21,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(-4.922,2.21,2.0);
    glVertex3f(-2.21,4.922,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
    glVertex3f(-4.922,2.21,0.0);
    glVertex3f(-4.922,-2.21,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(-4.922,-2.21,2.0);
    glVertex3f(-4.922,2.21,2.0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f(0.5,0.5,0.5);
    glVertex3f(-4.922,-2.21,0.0);
    glVertex3f(-2.21,-4.922,0.0);
    glColor3f(0.137255,0.137255,0.556863);
    glVertex3f(-2.21,-4.922,2.0);
    glVertex3f(-4.922,-2.21,2.0);
   glEnd();

//THE SIDE DOOR
  glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
    glVertex3f(-0.71,-5.39,0.0);
    glVertex3f(-0.24,-5.39,0.0);
    glVertex3f(-0.24,-4.922,0.0);
    glVertex3f(-0.71,-4.922,0.0);
   glEnd();

   glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
    glVertex3f(-0.71,-5.39,1.0);
    glVertex3f(-0.24,-5.39,1.0);
    glVertex3f(-0.24,-4.922,1.0);
    glVertex3f(-0.71,-4.922,1.0);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
    glVertex3f(-0.24,-5.39,0);
    glVertex3f(-0.24,-4.922,0);
    glVertex3f(-0.24,-4.922,1);
    glVertex3f(-0.24,-5.39,1);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-0.71,-5.39,0);
     glVertex3f(-0.24,-5.39,0);
     glVertex3f(-0.24,-5.39,1);
     glVertex3f(-0.71,-5.39,1);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-0.71,-4.922,0);
     glVertex3f(-0.71,-5.39,0);
     glVertex3f(-0.71,-5.39,1);
     glVertex3f(-0.71,-4.922,1);
   glEnd();

   glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(0.24,-5.39,0.0);
     glVertex3f(0.71,-5.39,0.0);
     glVertex3f(0.71,-4.922,0.0);
     glVertex3f(0.24,-4.922,0.0);
   glEnd();

   glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(0.24,-5.39,1.0);
     glVertex3f(0.71,-5.39,1.0);
     glVertex3f(0.71,-4.922,1.0);
     glVertex3f(0.24,-4.922,1.0);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(0.24,-5.39,0);
     glVertex3f(0.24,-4.922,0);
     glVertex3f(0.24,-4.922,1);
     glVertex3f(0.24,-5.39,1);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(0.24,-5.39,0);
     glVertex3f(0.71,-5.39,0);
     glVertex3f(0.71,-5.39,1);
     glVertex3f(0.24,-5.39,1);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(0.71,-5.39,0);
     glVertex3f(0.71,-4.922,0);
     glVertex3f(0.71,-4.922,1);
     glVertex3f(0.71,-5.39,1);
   glEnd();

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(-0.73,-5.44,0);
     glVertex3f(0.73,-5.44,0);
     glVertex3f(0.73,-4.922,0);
     glVertex3f(-0.73,-4.922,0);
   glEnd();

 glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(-0.73,-5.44,1.01);
     glVertex3f(0.73,-5.44,1.01);
     glVertex3f(0.73,-4.922,1.01);
     glVertex3f(-0.73,-4.922,1.01);
   glEnd();

   //the other beb TE3 JNAB

   glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,0.71,0);
     glVertex3f(-5.39,0.24,0);
     glVertex3f(-4.922,0.24,0);
     glVertex3f(-4.922,0.71,0);
   glEnd();


    glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,0.71,1);
     glVertex3f(-5.39,0.24,1);
     glVertex3f(-4.922,0.24,1);
     glVertex3f(-4.922,0.71,1);
   glEnd();
    glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-4.922,0.71,0);
     glVertex3f(-5.39,0.71,0);
     glVertex3f(-5.39,0.71,1);
     glVertex3f(-4.922,0.71,1);
   glEnd();
    glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,0.71,0);
     glVertex3f(-5.39,0.24,0);
     glVertex3f(-5.39,0.24,1);
     glVertex3f(-5.39,0.71,1);
   glEnd();

 glBegin(GL_POLYGON);//has one argument that defines the primitive to draw
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,0.24,0);
     glVertex3f(-4.922,0.24,0);
     glVertex3f(-4.922,0.24,1);
     glVertex3f(-5.39,0.24,1);
   glEnd();

    glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,-0.24,0);
     glVertex3f(-5.39,-0.71,0);
     glVertex3f(-4.922,-0.71,0);
     glVertex3f(-4.922,-0.24,0);
   glEnd();

    glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,-0.24,1.0);
     glVertex3f(-5.39,-0.71,1.0);
     glVertex3f(-4.922,-0.71,1.0);
     glVertex3f(-4.922,-0.24,1.0);
   glEnd();
 glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,-0.24,0);
     glVertex3f(-5.39,-0.71,0);
     glVertex3f(-5.39,-0.71,1.0);
     glVertex3f(-5.39,-0.24,1.0);
   glEnd();
    glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.39,-0.71,0);
     glVertex3f(-4.922,-0.71,0);
     glVertex3f(-4.922,-0.71,1.0);
     glVertex3f(-5.39,-0.71,1.0);
   glEnd();
    glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-4.922,-0.24,0);
     glVertex3f(-5.39,-0.71,0);
     glVertex3f(-5.39,-0.71,1.0);
     glVertex3f(-4.922,-0.24,1.0);
   glEnd();

   glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.44,0.73,0);
     glVertex3f(-5.44,-0.73,0);
     glVertex3f(-4.922,-0.73,0);
     glVertex3f(-4.922,0.73,0);
   glEnd();

   glBegin(GL_POLYGON);
 glColor3f(0.85,0.85,0.10);
     glVertex3f(-5.44,0.73,1.01);
     glVertex3f(-5.44,-0.73,1.01);
     glVertex3f(-4.922,-0.73,1.01);
     glVertex3f(-4.922,0.73,1.01);
   glEnd();

//le3ras :3
//3ARSSA 1
glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.3,0);
     glVertex3f(5.39,0.55,0);
     glVertex3f(5.39,0.55,0.25);
     glVertex3f(5.39,0.3,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.3,0);
     glVertex3f(5.39,0.55,0);
     glVertex3f(5.14,0.55,0);
     glVertex3f(5.14,0.3,0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.3,0.25);
     glVertex3f(5.39,0.55,0.25);
     glVertex3f(5.14,0.55,0.25);
     glVertex3f(5.14,0.3,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,0.3,0);
     glVertex3f(5.14,0.55,0);
     glVertex3f(5.14,0.55,0.25);
     glVertex3f(5.14,0.3,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,0.3,0);
     glVertex3f(5.39,0.3,0);
     glVertex3f(5.39,0.3,0.25);
     glVertex3f(5.14,0.3,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.55,0);
     glVertex3f(5.14,0.55,0);
     glVertex3f(5.14,0.55,0.25);
     glVertex3f(5.39,0.55,0.25);
   glEnd();
//3ARSSA 2

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.69,0);
     glVertex3f(5.39,0.94,0);
     glVertex3f(5.39,0.94,0.25);
     glVertex3f(5.39,0.69,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.69,0);
     glVertex3f(5.39,0.94,0);
     glVertex3f(5.14,0.94,0);
     glVertex3f(5.14,0.69,0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.69,0.25);
     glVertex3f(5.39,0.94,0.25);
     glVertex3f(5.14,0.94,0.25);
     glVertex3f(5.14,0.69,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,0.69,0);
     glVertex3f(5.39,0.69,0);
     glVertex3f(5.39,0.69,0.25);
     glVertex3f(5.14,0.69,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,0.69,0);
     glVertex3f(5.14,0.94,0);
     glVertex3f(5.14,0.94,0.25);
     glVertex3f(5.14,0.69,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,0.94,0);
     glVertex3f(5.14,0.94,0);
     glVertex3f(5.14,0.94,0.25);
     glVertex3f(5.39,0.94,0.25);
   glEnd();

//3ARSSA 3

 glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.36,0);
     glVertex3f(5.39,1.61,0);
     glVertex3f(5.39,1.61,0.25);
     glVertex3f(5.39,1.36,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.36,0);
     glVertex3f(5.39,1.61,0);
     glVertex3f(5.14,1.61,0);
     glVertex3f(5.14,1.36,0);
   glEnd();

    glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.36,0.25);
     glVertex3f(5.39,1.61,0.25);
     glVertex3f(5.14,1.61,0.25);
     glVertex3f(5.14,1.36,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.36,0);
     glVertex3f(5.14,1.36,0);
     glVertex3f(5.14,1.36,0.25);
     glVertex3f(5.39,1.36,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,1.36,0);
     glVertex3f(5.14,1.61,0);
     glVertex3f(5.14,1.61,0.25);
     glVertex3f(5.14,1.36,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.61,0);
     glVertex3f(5.14,1.61,0);
     glVertex3f(5.14,1.61,0.25);
     glVertex3f(5.39,1.36,0.25);
   glEnd();
   //3ARSSA 4

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.75,0);
     glVertex3f(5.39,2,0);
     glVertex3f(5.39,2,0.25);
     glVertex3f(5.39,1.75,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.75,0);
     glVertex3f(5.39,2,0);
     glVertex3f(5.14,2,0);
     glVertex3f(5.14,1.75,0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.75,0.25);
     glVertex3f(5.39,2,0.25);
     glVertex3f(5.14,2,0.25);
     glVertex3f(5.14,1.75,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,1.75,0);
     glVertex3f(5.14,2,0);
     glVertex3f(5.14,2,0.25);
     glVertex3f(5.14,1.75,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,1.75,0);
     glVertex3f(5.14,1.75,0);
     glVertex3f(5.14,1.75,0.25);
     glVertex3f(5.39,1.75,0.25);
   glEnd();

    glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,2,0);
     glVertex3f(5.14,2,0);
     glVertex3f(5.14,2,0.25);
     glVertex3f(5.39,2,0.25);
   glEnd();


   //3ARSSA 5
   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-2,0);
     glVertex3f(5.39,-1.75,0);
     glVertex3f(5.39,-1.75,0.25);
     glVertex3f(5.39,-2,0.25);
   glEnd();

      glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-2,0);
     glVertex3f(5.39,-1.75,0);
     glVertex3f(5.14,-1.75,0);
     glVertex3f(5.14,-2,0);
   glEnd();

     glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-2,0.25);
     glVertex3f(5.39,-1.75,0.25);
     glVertex3f(5.14,-1.75,0.25);
     glVertex3f(5.14,-2,0.25);
   glEnd();

      glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-2,0);
     glVertex3f(5.39,-2,0);
     glVertex3f(5.39,-2,0.25);
     glVertex3f(5.14,-2,0.25);
   glEnd();

      glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-1.75,0);
     glVertex3f(5.14,-1.75,0);
     glVertex3f(5.14,-1.75,0.25);
     glVertex3f(5.39,-1.75,0.25);
   glEnd();

      glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-2,0);
     glVertex3f(5.14,-1.75,0);
     glVertex3f(5.14,-1.75,0.25);
     glVertex3f(5.14,-2,0.25);
   glEnd();

   // 3ARSSA 6
   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-1.61,0);
     glVertex3f(5.39,-1.36,0);
     glVertex3f(5.39,-1.36,0.25);
     glVertex3f(5.39,-1.61,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-1.61,0);
     glVertex3f(5.39,-1.36,0);
     glVertex3f(5.14,-1.36,0);
     glVertex3f(5.14,-1.61,0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-1.61,0.25);
     glVertex3f(5.39,-1.36,0.25);
     glVertex3f(5.14,-1.36,0.25);
     glVertex3f(5.14,-1.61,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-1.61,0);
     glVertex3f(5.39,-1.61,0);
     glVertex3f(5.39,-1.61,0.25);
     glVertex3f(5.14,-1.61,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-1.36,0);
     glVertex3f(5.14,-1.36,0);
     glVertex3f(5.14,-1.36,0.25);
     glVertex3f(5.39,-1.36,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-1.61,0);
     glVertex3f(5.14,-1.36,0);
     glVertex3f(5.14,-1.36,0.25);
     glVertex3f(5.14,-1.61,0.25);
   glEnd();

   //3ARSSA 7
    glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.94,0);
     glVertex3f(5.39,-0.69,0);
     glVertex3f(5.39,-0.69,0.25);
     glVertex3f(5.39,-0.94,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.94,0);
     glVertex3f(5.39,-0.69,0);
     glVertex3f(5.14,-0.69,0);
     glVertex3f(5.14,-0.94,0);
   glEnd();


    glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.94,0.25);
     glVertex3f(5.39,-0.69,0.25);
     glVertex3f(5.14,-0.69,0.25);
     glVertex3f(5.14,-0.94,0.25);
   glEnd();


glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-0.94,0);
     glVertex3f(5.39,-0.94,0);
     glVertex3f(5.39,-0.94,0.25);
     glVertex3f(5.14,-0.94,0.25);
   glEnd();


glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-0.69,0);
     glVertex3f(5.39,-0.69,0);
     glVertex3f(5.39,-0.69,0.25);
     glVertex3f(5.14,-0.69,0.25);
   glEnd();


   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-0.94,0);
     glVertex3f(5.14,-0.69,0);
     glVertex3f(5.14,-0.69,0.25);
     glVertex3f(5.14,-0.94,0.25);
   glEnd();


   //3ARSSA 8

    glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.55,0);
     glVertex3f(5.39,-0.3,0);
     glVertex3f(5.39,-0.3,0.25);
     glVertex3f(5.39,-0.55,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.55,0);
     glVertex3f(5.39,-0.3,0);
     glVertex3f(5.14,-0.3,0);
     glVertex3f(5.14,-0.55,0);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.55,0.25);
     glVertex3f(5.39,-0.3,0.25);
     glVertex3f(5.14,-0.3,0.25);
     glVertex3f(5.14,-0.55,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-0.55,0);
     glVertex3f(5.39,-0.55,0);
     glVertex3f(5.39,-0.55,0.25);
     glVertex3f(5.14,-0.55,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.39,-0.3,0);
     glVertex3f(5.14,-0.3,0);
     glVertex3f(5.14,-0.3,0.25);
     glVertex3f(5.39,-0.3,0.25);
   glEnd();

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.14,-0.55,0);
     glVertex3f(5.14,-0.3,0);
     glVertex3f(5.14,-0.3,0.25);
     glVertex3f(5.14,-0.55,0.25);
   glEnd();



    glPushMatrix();
       glTranslatef(5.25,0.42,0.26);
       GLUquadricObj *quadratic2;
       quadratic2 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic2,0.08,0.08,0.71,32,32);
    glPopMatrix();

    glPushMatrix();
       glTranslatef(5.25,-1.85,0.26);
       GLUquadricObj *quadratic3;
       quadratic3 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic3,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,-1.49,0.26);
       GLUquadricObj *quadratic4;
       quadratic4 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic4,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,0.-0.81,0.26);
       GLUquadricObj *quadratic5;
       quadratic5 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic5,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,-0.44,0.26);
       GLUquadricObj *quadratic6;
       quadratic6 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic6,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,1.85,0.26);
       GLUquadricObj *quadratic7;
       quadratic7 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic7,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,1.46,0.26);
       GLUquadricObj *quadratic8;
       quadratic8 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic8,0.08,0.08,0.71,32,32);
    glPopMatrix();


    glPushMatrix();
       glTranslatef(5.25,0.8,0.26);
       GLUquadricObj *quadratic9;
       quadratic9 = gluNewQuadric();
       glColor3f(255,215,0);
       gluCylinder(quadratic9,0.08,0.08,0.71,32,32);
    glPopMatrix();
//beb dakhla te3 jihet le3rass

 glBegin(GL_POLYGON);
     glColor3f(0,0,0);
     glVertex3f(4.93,-0.22,0);
     glVertex3f(4.93,0.22,0);
     glVertex3f(4.93,0.22,0.9);
     glVertex3f(4.93,-0.22,0.9);
   glEnd();

//beb dakhla te3 jihet le3rass

 glBegin(GL_POLYGON);
     glColor3f( 0, 0 , 0);
     glVertex3f(-4.93,-0.22,0);
     glVertex3f(-4.93,0.22,0);
     glVertex3f(-4.93,0.22,0.9);
     glVertex3f(-4.93,-0.22,0.9);
   glEnd();

//3atba
   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.4,-2,1.01);
     glVertex3f(5.4,2,1.01);
     glVertex3f(4.922,2,1.01);
     glVertex3f(4.922,-2,1.01);
   glEnd();

//s9af

   glBegin(GL_POLYGON);
     glColor3f( 0.52, 0.37 , 0.26);
     glVertex3f(5.4,-2,0);
     glVertex3f(5.4,2,0);
     glVertex3f(4.922,2,0);
     glVertex3f(4.922,-2,0);
   glEnd();


//EL OUSTOUWANAAA

   GLUquadricObj *quadratic;
   quadratic = gluNewQuadric();
    glColor3f(0.847059,0.847059,0.74902);
   gluCylinder(quadratic,2,2,3.5,32,32);
//EL 9OUBA
   glTranslatef(0.0,0.0,3.5);
   glColor3f(0.85,0.85,0.10);
   glutSolidSphere(1.9,10,20);
   glutSolidCone(1.9,2,10,20);

  GLUquadricObj *quadratic1;
   quadratic1 = gluNewQuadric();
   glColor3f(0.85,0.85,0.10);
   gluCylinder(quadratic1,0.02,0.02,3,32,32);
glPushMatrix();
   glColor3f(0.85,0.85,0.10);
  glTranslatef(0.0,0.0,3.15);
  glRotatef(90,-1.0,0.0,0.0);
  glutSolidTorus(0.02,0.15,32,32);
glPopMatrix();

glPushMatrix();
   glColor3f(0.85,0.85,0.10);

  glTranslatef(0.0,0.0,2.2);
  glutSolidSphere(0.09,10,20);
glPopMatrix();

glPushMatrix();
 glColor3f(0.85,0.85,0.10);

  glTranslatef(0.0,0.0,2.5);
  glutSolidSphere(0.115,10,20);
glPopMatrix();

glPushMatrix();
     glColor3f(0.85,0.85,0.10);

  glTranslatef(0.0,0.0,2.8);
  glutSolidSphere(0.07,10,20);
glPopMatrix();

   glEnd();

    glutSwapBuffers();
}
void reshape(int w,int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity() ;
    gluPerspective(60,1,2.0,50.0);


    glMatrixMode(GL_MODELVIEW);
}

void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0); //60fpd (frame/sec)
    a+=0.1;
    angle+=0.5;
   if(angle > 180) {
       angle -=360;
    }

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);// initize takes 2 arguments , array of trings that contais argumets
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE |GLUT_DEPTH ); //GLUT_DOUBLE ---> two frames(back and front)
    glutInitWindowSize(640,480);// window size i pxls       
    glutInitWindowPosition(300,150);;//position of the winow n the sceeen when it is first displayed, if it is not specified it displays randomly
    glutCreateWindow("GLUT Shapes");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0,timer,0); // allow l'animation te3 masjid

    init();
    glutMainLoop();
}

