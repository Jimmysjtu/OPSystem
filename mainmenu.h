#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_tb1_clicked();

    void on_tb2_clicked();

    void on_tb3_clicked();


    void on_tb4_clicked();

    void on_toolButton_clicked();

private:
    Ui::MainMenu *ui;
};

#endif // MAINMENU_H
