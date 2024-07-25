#include "CBaseWidget.h"
#include <QHBoxLayout>
#include<QVBoxLayout>
#include<QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QPushButton>
#pragma execution_character_set("gbk")
CBaseWidget::CBaseWidget(QWidget* parent)
	:QWidget(parent)
{
	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_StyledBackground);
	this->setStyleSheet("background-color:rgb(51, 51, 51);color:rgb(200,200,200);");

	QLabel* pBasesetLabel = new QLabel(this);
	pBasesetLabel->setText(u8"基本设置");

	QCheckBox* pCheckKaijiqidong = new QCheckBox(this);
	pCheckKaijiqidong->setText(u8"开机启动"); 

	QCheckBox* pCheckMiandarao = new QCheckBox(this);
	pCheckMiandarao->setFixedWidth(140);
	pCheckMiandarao->setText(u8"开启免打扰模式");

	QLabel* p1 = new QLabel(this);
	p1->setText("?");

	QCheckBox* pCheckBosskey = new QCheckBox(this);
	pCheckBosskey->setFixedWidth(105);
	pCheckBosskey->setText(u8"开启老板键");

	QLineEdit* pLineEdit = new QLineEdit(this);
	pLineEdit->setFixedWidth(100);
	pLineEdit->setStyleSheet("border-style:solid;border-width:1px;border-color:rgb(79,79,79);");
	QLabel* p2 = new QLabel(this);
	p2->setText("?");

	QCheckBox* pCheckNewShowMainUI = new QCheckBox(this);
	pCheckNewShowMainUI->setText(u8"新建时显示主界面");

	QLabel* pXiazaimoshi = new QLabel(this);
	pXiazaimoshi->setText(u8"下载模式");

	QRadioButton* pQuansuxiazai = new QRadioButton(this);
	pQuansuxiazai->setText(u8"全速下载");

	QRadioButton* pXiansuxiazai = new QRadioButton(this);
	pXiansuxiazai->setText(u8"限速下载");
	pXiansuxiazai->setFixedWidth(90);

	QPushButton* pBtnModify = new QPushButton(this);
	pBtnModify->setText(u8"修改设置");
	pBtnModify->setStyleSheet("background-color:#1A1A1A;color:#5F5F5F");

	QLabel* label_cfginfo = new QLabel(this);
	label_cfginfo->setText(u8"限制时间段: 00:00-23:59 最大下载速度:不限速");

	QVBoxLayout* pMainVlay = new QVBoxLayout(this);
	pMainVlay->addWidget(pBasesetLabel);
	pMainVlay->addSpacing(20);

	QHBoxLayout* pHlay1 = new QHBoxLayout(this);
	pHlay1->addSpacing(35);

	QVBoxLayout* pVlay1 = new QVBoxLayout(this);
	pVlay1->addWidget(pCheckKaijiqidong);
	pVlay1->addSpacing(20);

	QHBoxLayout* pHlay2 = new QHBoxLayout;
	pHlay2->addWidget(pCheckMiandarao);
	pHlay2->addWidget(p1);

	pVlay1->addLayout(pHlay2);  // 添加免打扰的水平布局
	pVlay1->addSpacing(20);

	QHBoxLayout* pHlay3 = new QHBoxLayout;
	pHlay3->addWidget(pCheckBosskey);
	pHlay3->addWidget(pLineEdit);
	pHlay3->addWidget(p2);

	pVlay1->addLayout(pHlay3);
	pVlay1->addSpacing(20);

	pVlay1->addWidget(pCheckNewShowMainUI);
	pVlay1->addSpacing(20);

	pVlay1->addWidget(pXiazaimoshi);  // 下载模式
	pVlay1->addSpacing(20);

	QHBoxLayout* pHlay4 = new QHBoxLayout;  //  下载模式下面的水平布局
	pHlay4->addSpacing(30);

	QVBoxLayout* pVlay2 = new QVBoxLayout(this);

	QHBoxLayout* pHlay5 = new QHBoxLayout;
	pHlay5->addWidget(pQuansuxiazai);
	pHlay5->addWidget(p2);
	pVlay2->addLayout(pHlay5);
	pVlay2->addSpacing(20);

	// 限速下载
	QHBoxLayout* pHlay6 = new QHBoxLayout;
	pHlay6->addWidget(pXiansuxiazai);
	pHlay6->addWidget(pBtnModify);
	pHlay6->addWidget(label_cfginfo);
	pHlay6->addStretch();

	pVlay2->addLayout(pHlay6);

	pHlay4->addLayout(pVlay2);

	pVlay1->addLayout(pHlay4);
	pHlay1->addLayout(pVlay1);

	pMainVlay->addLayout(pHlay1);
	pMainVlay->setContentsMargins(20, 20, 20, 20);


}

CBaseWidget::~CBaseWidget()
{
}
