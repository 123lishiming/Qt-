#pragma once

#include <QtWidgets/QWidget>
#include <QListWidget>
#include <QScrollArea>
#include <QStringList>
#include "CBaseWidget.h"
#include "GaojiSetWidget.h"
#include <vector>

using namespace std;

class ScrollAreaDemo : public QWidget
{
    Q_OBJECT

public:
    ScrollAreaDemo(QWidget* parent = Q_NULLPTR);

private slots:
    void slotItemClicked(QListWidgetItem* item);
    void slotValueChanged(int value);

private:
    QListWidget* m_pListWidget = nullptr;
    QScrollArea* m_pScrollArea = nullptr;

    QStringList m_textList;

    CBaseWidget* m_pBaseSetWidget;
    QWidget* m_pYunpanSetWidget;
    QWidget* m_pDownloadWidget;
    QWidget* m_pJieguanWidget;
    QWidget* m_pRenwuWidget;
    QWidget* m_pTixingWidget;
    QWidget* m_pXuanfuWidget;
    GaojiSetWidget* m_pGaojiWidget;

    vector<QWidget*> m_vecWidget;

    bool signFlag = false;
};
