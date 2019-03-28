#ifndef PARAMETERDLG_H
#define PARAMETERDLG_H

#include <QDialog>

namespace Ui {
class ParameterDlg;
}

class ParameterDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ParameterDlg(QWidget *parent = nullptr);
    ~ParameterDlg();

private slots:
    void on_b2_clicked();

    void on_b1_clicked();

    void on_b3_clicked();

private:
    Ui::ParameterDlg *ui;
};

#endif // PARAMETERDLG_H
