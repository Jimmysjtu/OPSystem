#ifndef APPINIT_H
#define APPINIT_H

#include <QObject>

class APPINIT : public QObject
{
    Q_OBJECT
public:
    explicit APPINIT(QObject *parent = nullptr);
    void Load();

signals:

public slots:
};

#endif // APPINIT_H
