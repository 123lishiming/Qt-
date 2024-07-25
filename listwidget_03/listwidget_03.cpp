#include "listwidget_03.h"
#include <QVBoxLayout>
#include <QlistWidget>
#pragma execution_character_set("utf-8")
listwidget_03::listwidget_03(QWidget *parent)
    : QWidget(parent)
{
    resize(600, 500);
    QVBoxLayout* pMainVLayout = new QVBoxLayout(this);
    QListWidget* pListWidget = new QListWidget(this);

    pListWidget->setViewMode(QListView::IconMode);//将`pListWidget`设置为图标模式，使得列表中的每一项都显示为一个图标，而不是文字
    pMainVLayout->addWidget(pListWidget);
    for (int i = 0; i < 15; i++)
    {
        //`QIcon`：这是一个表示图标的小型对象。 - `icon`：这是一个局部变量，用来存储新创建的`QIcon`对象
        QIcon icon(":/listwidget_03/resources/env.png"); 
        QString name = QString(u8"用户%ladadas%2fsdfsdfsd%3").arg(QString::number(i)).arg(QString::number(i)).arg(QString::number(i));
        QListWidgetItem* pItem = new QListWidgetItem(icon, name);
        pItem->setSizeHint(QSize(200, 180));
        pListWidget->addItem(pItem);
    }
}

listwidget_03::~listwidget_03()
{}
