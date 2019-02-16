#ifndef MODEL_H
#define MODEL_H

#include <QWidget>
#include <QOpenGLWidget>

class Model: public QOpenGLWidget
{
public:
    Model(QWidget * parent = 0);
    ~Model();
protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();
};

#endif // MODEL_H
