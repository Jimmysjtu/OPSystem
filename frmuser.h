#ifndef FRMUSER_H
#define FRMUSER_H

#include <QDialog>

namespace Ui
{
    class frmUser;
}

class frmUser : public QDialog
{
    Q_OBJECT

public:
    explicit frmUser(QWidget *parent = 0);
    ~frmUser();

private slots:
    void on_btnAdd_clicked();
    void on_btnDelete_clicked();
    void on_btnUpdate_clicked();
    void on_btnUpdatePwd_clicked();
    void on_listUser_currentRowChanged(int currentRow);

private:
    Ui::frmUser *ui;

    void InitStyle();
    void InitForm();

    //加载操作员数据
    void ReadUserInfo();
    //校验当前是否是管理员
    bool CheckAdmin(QString userID);
    //校验操作员是否存在
    bool IsExistUser(QString userID);
    //校验输入框是否为空
    bool CheckUserInfo(QString userName, QString userPwd);

};

#endif // FRMUSER_H
