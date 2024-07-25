#include "TencentMeetingLogin.h"

TencentMeetingLogin::TencentMeetingLogin(QWidget* parent)
    : QDialog(parent)
{
    ui.setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::WindowMinMaxButtonsHint);  //不可拉伸和拖动
    //this->setStyleSheet("background-color:red;border:none");  //主窗口设置成白色

    // btnSet,设置样式表
    ui.btnSet->setText("");
    ui.btnSet->setStyleSheet("QPushButton{background-image:url(:/TencentMeetingLogin/resources/set.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");
    // btnMin 设置样式表
    ui.btnMin->setText("");
    ui.btnMin->setStyleSheet("QPushButton{background-image:url(:/TencentMeetingLogin/resources/min.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    // btnClose 设置样式表
    ui.btnClose->setText("");
    ui.btnClose->setStyleSheet("QPushButton{background-image:url(:/TencentMeetingLogin/resources/close.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");
    // label
    ui.label_logo->clear();
    QPixmap* pix = new QPixmap(":/TencentMeetingLogin/resources/logo.jpg");
    // 实现图片的放缩
    pix->scaled(ui.label_logo->size(), Qt::KeepAspectRatio);
    ui.label_logo->setScaledContents(true);
    ui.label_logo->setPixmap(*pix);

    // 微信登录
    ui.btnWeichatLogin->setText("");
    ui.btnWeichatLogin->setStyleSheet("QPushButton{background-image:url(:/TencentMeetingLogin/resources/weichatlogin.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

    ui.toolBtnPhone->setIcon(QIcon(":/TencentMeetingLogin/resources/phonelogin.png"));
    ui.toolBtnPhone->setIconSize(QSize(60, 60));
    ui.toolBtnPhone->setText(u8"手机号");
    ui.toolBtnPhone->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // 确保有分号
    ui.toolBtnPhone->setStyleSheet("background-color:black;border:none");

    ui.toolBtnEnpriseWeichat->setIcon(QIcon(":/TencentMeetingLogin/resources/enpriseweichat.png"));
    ui.toolBtnEnpriseWeichat->setIconSize(QSize(60, 60));
    ui.toolBtnEnpriseWeichat->setText(u8"企业微信");
    ui.toolBtnEnpriseWeichat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  // 把文字放在图片下面
    ui.toolBtnEnpriseWeichat->setStyleSheet("background-color:black;border:none");

    ui.toolBtnSSO->setIcon(QIcon(":/TencentMeetingLogin/resources/sso.png"));
    ui.toolBtnSSO->setIconSize(QSize(60, 60));
    ui.toolBtnSSO->setText("SSO");
    ui.toolBtnSSO->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  // 把文字放在图片下面
    ui.toolBtnSSO->setStyleSheet("background-color:black;border:none");

    connect(ui.btnClose, &QPushButton::clicked, [=] {
        close();
        });

}

TencentMeetingLogin::~TencentMeetingLogin()
{}
