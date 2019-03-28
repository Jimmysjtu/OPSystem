#ifndef PSETSENDTHREAD_H
#define PSETSENDTHREAD_H

#include <QObject>

class PsetSendThread : public QObject
{
    Q_OBJECT
public:
    explicit PsetSendThread(QObject *parent = nullptr);

signals:

public slots:
};

#endif // PSETSENDTHREAD_H