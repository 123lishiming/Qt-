#include "HLayout.h"
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QDebug>
HLayout::HLayout(QWidget *parent)
    : QWidget(parent)
{
    resize(400, 80);
    QLabel* pPath = new QLabel(this);
    pPath->setObjectName("pPath");
    //pPath->setFixedSize(40, 32);
    pPath->setText(u8"路径");

    QLineEdit* pEdit = new QLineEdit(this);
    pEdit->setObjectName("pEdit");
    //pEdit->setFixedSize(100, 32);

    QPushButton* pBtn = new QPushButton;
    pBtn->setObjectName("pBtn");
    //pBtn->setFixedSize(50, 32);
    // 需要使用unicode编码重新打开
    pBtn->setText(u8"打开");
    pEdit->setMinimumWidth(50);

    QHBoxLayout* pHLay = new QHBoxLayout(this);
    pHLay->addWidget(pPath);
    pHLay->setSpacing(-7);   //设置他们之间的距离
    //qDebug() << pHLay->spacing();
    pHLay->addWidget(pEdit);
    pHLay->addWidget(pBtn);
    pHLay->addStretch();  //在控件中添加弹簧
    pHLay->setContentsMargins(0, 100, 100, 0); //左上右下的margin



    
}

HLayout::~HLayout()
{}
