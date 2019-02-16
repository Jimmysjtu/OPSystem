#ifndef APPINIT_H
#define APPINIT_H

#include <QObject>
#include <QSqlDatabase>

class APPINIT : public QObject
{
    Q_OBJECT
public:
    explicit APPINIT(QObject *parent = nullptr);
    void Load();
    QSqlDatabase db;

signals:

public slots:
};

#endif // APPINIT_H
