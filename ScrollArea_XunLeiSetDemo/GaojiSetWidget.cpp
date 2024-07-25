#include "GaojiSetWidget.h"
#include <QVBoxLayout>
#include <QLabel>

GaojiSetWidget::GaojiSetWidget(QWidget* parent)
	: QWidget(parent)
{
	QLabel* pLabel1 = new QLabel(this);
	pLabel1->setFixedSize(1000, 541);
	QPixmap* pixmap = new QPixmap(":/ScrollAreaDemo/resources/GaojiSet_1.png");
	pixmap->scaled(pLabel1->size(), Qt::KeepAspectRatio);
	pLabel1->setScaledContents(true);
	pLabel1->setPixmap(*pixmap);

	QLabel* pLabel2 = new QLabel(this);
	pLabel2->setFixedSize(1000, 685);
	pixmap = new QPixmap(":/ScrollAreaDemo/resources/GaojiSet_2.png");
	pixmap->scaled(pLabel2->size(), Qt::KeepAspectRatio);
	pLabel2->setScaledContents(true);
	pLabel2->setPixmap(*pixmap);

	QVBoxLayout* pVLay = new QVBoxLayout(this);
	pVLay->addWidget(pLabel1);
	pVLay->setSpacing(0);
	pVLay->addWidget(pLabel2);
	pVLay->setContentsMargins(0, 0, 0, 0);
}

GaojiSetWidget::~GaojiSetWidget()
{
}
