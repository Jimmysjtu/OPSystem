#define GLEW_STATIC
#include <GL/glew.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <QDebug>

#include "model.h"
#include "model/shader.h"

Model::Model(QWidget * parent)
    :QOpenGLWidget (parent)
{

}

Model::~Model() {

}


void Model::initializeGL()
{
    glewExperimental = GL_TRUE;
    if(glewInit() != GLEW_OK) {
        qDebug() << "failed to initialize glew";
    }
    glEnable(GL_DEPTH_TEST);
}

void Model::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(-0.5, -0.5, 0);
        glColor3f(0.0, 1.0, 0.0);
        glVertex3f( 0.5, -0.5, 0);
        glColor3f(0.0, 0.0, 1.0);
        glVertex3f( 0.0,  0.5, 0);
    glEnd();
}

void Model::resizeGL(int w, int h)
{
    glViewport(0,0,w,h);
}
