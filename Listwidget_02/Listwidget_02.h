#pragma once

#include <QtWidgets/QWidget>
#include "ui_Listwidget_02.h"
#include <QMenu>
class Listwidget_02 : public QWidget
{
    Q_OBJECT

public:
    Listwidget_02(QWidget *parent = nullptr);
    ~Listwidget_02();
private:
    void initRightMenu();
private slots:
    void on_PopupRightMenu(const QPoint& pos);
private:
    Ui::Listwidget_02Class ui;
    QMenu* m_pRightMenu = nullptr;
};
