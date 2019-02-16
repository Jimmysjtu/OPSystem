#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QSqlTableModel>
#include <QSqlDatabase>

namespace Ui {
class Logindlg;
}

class Logindlg : public QDialog
{
    Q_OBJECT

public:
    explicit Logindlg(QWidget *parent = nullptr);
    ~Logindlg();

private slots:
    void on_okbtn_clicked();

    void on_changebtn_clicked();

private:
    Ui::Logindlg *ui;
    QSqlTableModel *model;
};

#endif // LOGINDLG_H
