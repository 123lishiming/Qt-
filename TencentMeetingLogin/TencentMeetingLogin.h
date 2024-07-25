#pragma once

#include <QtWidgets/QDialog>
#include "ui_TencentMeetingLogin.h"
  
class TencentMeetingLogin : public QDialog
{
    Q_OBJECT

public:
    TencentMeetingLogin(QWidget *parent = nullptr);
    ~TencentMeetingLogin();


private:
    Ui::TencentMeetingLoginClass ui;
};
