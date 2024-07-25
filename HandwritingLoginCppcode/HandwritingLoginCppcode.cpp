#include "HandwritingLoginCppcode.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QToolButton>
#include <QPushButton>
#include <QApplication>
HandwritingLoginCppcode::HandwritingLoginCppcode(QWidget *parent)
    : QDialog(parent)
{
    QVBoxLayout* verticalLayout_2;
    QHBoxLayout* horizontalLayout;
    QPushButton* btnSet;
    QLabel* label;
    QPushButton* btnMin;
    QPushButton* btnClose;
    QSpacerItem* verticalSpacer;
    QHBoxLayout* horizontalLayout_4;
    QSpacerItem* horizontalSpacer;
    QLabel* label_logo;
    QSpacerItem* horizontalSpacer_2;
    QSpacerItem* verticalSpacer_2;
    QHBoxLayout* horizontalLayout_5;
    QSpacerItem* horizontalSpacer_3;
    QVBoxLayout* verticalLayout;
    QPushButton* btnWeichatLogin;
    QSpacerItem* verticalSpacer_3;
    QPushButton* btnJoin;
    QSpacerItem* horizontalSpacer_4;
    QHBoxLayout* horizontalLayout_2;
    QFrame* line;
    QLabel* label_2;
    QFrame* line_2;
    QHBoxLayout* horizontalLayout_3;
    QToolButton* toolBtnPhone;
    QToolButton* toolBtnEnpriseWeichat;
    QToolButton* toolBtnSSO;

   
        //this->resize(440, 741);
        verticalLayout_2 = new QVBoxLayout(this);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, -1, 0);
        btnSet = new QPushButton(this);
        btnSet->setObjectName("btnSet");
        btnSet->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(btnSet);

        label = new QLabel(this);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        btnMin = new QPushButton(this);
        btnMin->setObjectName("btnMin");
        btnMin->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(btnMin);

        btnClose = new QPushButton(this);
        btnClose->setObjectName("btnClose");
        btnClose->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(btnClose);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_logo = new QLabel(this);
        label_logo->setObjectName("label_logo");
        label_logo->setMinimumSize(QSize(400, 336));
        label_logo->setMaximumSize(QSize(400, 336));

        horizontalLayout_4->addWidget(label_logo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        btnWeichatLogin = new QPushButton(this);
        btnWeichatLogin->setObjectName("btnWeichatLogin");
        btnWeichatLogin->setMinimumSize(QSize(400, 50));
        btnWeichatLogin->setMaximumSize(QSize(400, 50));

        verticalLayout->addWidget(btnWeichatLogin);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        btnJoin = new QPushButton(this);
        btnJoin->setObjectName("btnJoin");
        btnJoin->setMinimumSize(QSize(400, 50));
        btnJoin->setMaximumSize(QSize(400, 50));
        btnJoin->setStyleSheet(QString::fromUtf8("QPushButton\n"
            "{\n"
            "  // \345\211\215\346\231\257\350\211\262\n"
            "  color:#0054E6;\n"
            "// \350\203\214\346\231\257\350\211\262\n"
            "backgroud-color:rgb(255,255,255);\n"
            "// \350\276\271\346\241\206\351\243\216\346\240\274\n"
            "border-width:0.5px;\n"
            "//\350\276\271\346\241\206\351\242\234\350\211\262\n"
            "border-color:gray;\n"
            "\350\276\271\346\241\206\345\200\222\350\247\222\n"
            "border-radius:2px;\n"
            "}\n"
            "\n"
            "// \351\274\240\346\240\207\346\202\254\346\265\256\346\225\210\346\236\234\n"
            "QPushButton:hover\n"
            "{\n"
            " // \350\276\271\346\241\206\351\242\234\350\211\262\n"
            "border-color:blue;\n"
            "}"));

        verticalLayout->addWidget(btnJoin);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, -1, 0);
        line = new QFrame(this);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line);

        label_2 = new QLabel(this);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        line_2 = new QFrame(this);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_2->addWidget(line_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        toolBtnPhone = new QToolButton(this);
        toolBtnPhone->setObjectName("toolBtnPhone");
        toolBtnPhone->setMinimumSize(QSize(60, 80));
        toolBtnPhone->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_3->addWidget(toolBtnPhone);

        toolBtnEnpriseWeichat = new QToolButton(this);
        toolBtnEnpriseWeichat->setObjectName("toolBtnEnpriseWeichat");
        toolBtnEnpriseWeichat->setMinimumSize(QSize(60, 80));
        toolBtnEnpriseWeichat->setMaximumSize(QSize(60, 80));

        horizontalLayout_3->addWidget(toolBtnEnpriseWeichat);

        toolBtnSSO = new QToolButton(this);
        toolBtnSSO->setObjectName("toolBtnSSO");
        toolBtnSSO->setMinimumSize(QSize(60, 80));
        toolBtnSSO->setMaximumSize(QSize(60, 80));

        horizontalLayout_3->addWidget(toolBtnSSO);


        verticalLayout_2->addLayout(horizontalLayout_3);


       

        QMetaObject::connectSlotsByName(this);
   

    
        this->setWindowTitle(QCoreApplication::translate("this", "TencentMeetingLogin", nullptr));
        btnSet->setText(QCoreApplication::translate("this", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("this", "\350\247\206\351\242\221\344\274\232\350\256\256", nullptr));
        btnMin->setText(QCoreApplication::translate("this", "PushButton", nullptr));
        btnClose->setText(QCoreApplication::translate("this", "PushButton", nullptr));
        label_logo->setText(QCoreApplication::translate("this", "TextLabel", nullptr));
        btnWeichatLogin->setText(QCoreApplication::translate("this", "PushButton", nullptr));
        btnJoin->setText(QCoreApplication::translate("this", "\345\212\240\345\205\245\344\274\232\350\256\256", nullptr));
        label_2->setText(QCoreApplication::translate("this", "\345\205\266\344\273\226\347\231\273\345\275\225\346\226\271\345\274\217", nullptr));
        toolBtnPhone->setText(QCoreApplication::translate("this", "...", nullptr));
        toolBtnEnpriseWeichat->setText(QCoreApplication::translate("this", "...", nullptr));
        toolBtnSSO->setText(QCoreApplication::translate("this", "...", nullptr));





        this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint);  //不可拉伸和拖动
        //this->setStyleSheet("background-color:red;border:none");  //主窗口设置成白色

        // btnSet,设置样式表
        btnSet->setText("");
        btnSet->setStyleSheet("QPushButton{background-image:url(:/HandwritingLoginCppcode/Resources/set.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");
        // btnMin 设置样式表
        btnMin->setText("");
        btnMin->setStyleSheet("QPushButton{background-image:url(:/HandwritingLoginCppcode/Resources/min.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

        // btnClose 设置样式表
        btnClose->setText("");
        btnClose->setStyleSheet("QPushButton{background-image:url(:/HandwritingLoginCppcode/Resources/close.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");
        // label
        label_logo->clear();
        QPixmap* pix = new QPixmap(":/HandwritingLoginCppcode/Resources/logo.jpg");
        // 实现图片的放缩
        pix->scaled(label_logo->size(), Qt::KeepAspectRatio);
        label_logo->setScaledContents(true);
        label_logo->setPixmap(*pix);

        // 微信登录
        btnWeichatLogin->setText("");
        btnWeichatLogin->setStyleSheet("QPushButton{background-image:url(:/HandwritingLoginCppcode/Resources/weichatlogin.png);border:none} \
        QPushButton::hover{background-color:rgb(99,99,99)}");

        toolBtnPhone->setIcon(QIcon(":/HandwritingLoginCppcode/Resources/phonelogin.png"));
        toolBtnPhone->setIconSize(QSize(60, 60));
        toolBtnPhone->setText(u8"手机号");
        toolBtnPhone->setToolButtonStyle(Qt::ToolButtonTextUnderIcon); // 确保有分号
        toolBtnPhone->setStyleSheet("background-color:black;border:none");

        toolBtnEnpriseWeichat->setIcon(QIcon(":/HandwritingLoginCppcode/Resources/enpriseweichat.png"));
        toolBtnEnpriseWeichat->setIconSize(QSize(60, 60));
        toolBtnEnpriseWeichat->setText(u8"企业微信");
        toolBtnEnpriseWeichat->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  // 把文字放在图片下面
        toolBtnEnpriseWeichat->setStyleSheet("background-color:black;border:none");

        toolBtnSSO->setIcon(QIcon(":/HandwritingLoginCppcode/Resources/sso.png"));
        toolBtnSSO->setIconSize(QSize(60, 60));
        toolBtnSSO->setText("SSO");
        toolBtnSSO->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);  // 把文字放在图片下面
        toolBtnSSO->setStyleSheet("background-color:black;border:none");

        connect(btnClose, &QPushButton::clicked, [=] {
            close();
            });

}

HandwritingLoginCppcode::~HandwritingLoginCppcode()
{}
