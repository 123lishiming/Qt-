#include "Listwidget_02.h"
#include <QAction>
Listwidget_02::Listwidget_02(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    QListWidgetItem* pItem1 = new QListWidgetItem(QIcon(":/Listwidget_02/resources/kits.png"), u8"Kits");
    QListWidgetItem* pItem2 = new QListWidgetItem(QIcon(":/Listwidget_02/resources/env.png"), u8"环境");
    QListWidgetItem* pItem3 = new QListWidgetItem(QIcon(":/Listwidget_02/resources/editor.png"),u8"编辑器");
    QListWidgetItem* pItem4 = new QListWidgetItem(QIcon(":/Listwidget_02/resources/vim.png"), u8"FakeVim");
    QListWidgetItem* pItem5 = new QListWidgetItem(QIcon(":/Listwidget_02/resources/help.png"),u8"帮助");
    //QListWidgetItem* pItem6 = new QListWidgetItem;
   
    ui.listWidget->addItem(pItem1);
    ui.listWidget->addItem(pItem2);
    ui.listWidget->addItem(pItem3);
    ui.listWidget->addItem(pItem4);
    ui.listWidget->addItem(pItem5);


    initRightMenu();
    // 设置菜单策略,必须设置不然无法显示菜单
    ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);

    // 连接信号槽
    connect(ui.listWidget, &QListWidget::customContextMenuRequested, this, &Listwidget_02::on_PopupRightMenu);


    
}

Listwidget_02::~Listwidget_02()
{}


void Listwidget_02::on_PopupRightMenu(const QPoint& pos)
{
    QListWidgetItem* pItem = ui.listWidget->itemAt(pos);
    if (!pItem)
    {
        return;
    }
    m_pRightMenu->exec(QCursor::pos());  //鼠标在桌面上的绝对位置
}

void Listwidget_02::initRightMenu()
{
    m_pRightMenu = new QMenu(this);

    QAction *pAc1 = new QAction(u8"动作1", this);
    QAction* pAc2 = new QAction(u8"动作2", this);
    QAction* pAc3 = new QAction(u8"动作3", this);
    QAction* pAc4 = new QAction(u8"删除", this);
    

    m_pRightMenu->addAction(pAc1);
    m_pRightMenu->addAction(pAc2);
    m_pRightMenu->addAction(pAc3);
    m_pRightMenu->addAction(pAc4);

    // 进行删除操作(一般使用这个操作)
    connect(pAc4, &QAction::triggered, [=] {
        QListWidgetItem* Item = ui.listWidget->currentItem();
        ui.listWidget->removeItemWidget(Item);
        delete Item;
        });
    
}