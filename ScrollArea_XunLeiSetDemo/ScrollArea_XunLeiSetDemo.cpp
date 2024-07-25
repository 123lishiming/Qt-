/*

C++ Qt 高级开发视频教程课程代码
讲师：明仕强

课程QQ交流群：891345828
课程答疑：每周六晚上腾讯会议直播答疑


*/

#include "ScrollArea_XunLeiSetDemo.h"
#include <QHBoxLayout>
#include <string>  // c++ std::string
#include <QScrollBar>

using namespace std;

ScrollAreaDemo::ScrollAreaDemo(QWidget* parent)
	: QWidget(parent)
{
	setFixedSize(150 + 1000 + 30 + 15, 900);
	this->setStyleSheet("background-color:rgb(26, 26, 26)");
	this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinMaxButtonsHint);

	m_pListWidget = new QListWidget(this);
	m_pListWidget->setFixedWidth(150);
	m_pListWidget->setFrameShape(QFrame::NoFrame);
	m_pListWidget->setFocusPolicy(Qt::NoFocus);

	m_textList << u8"基本设置" << u8"云盘设置" << u8"下载设置" << u8"接管设置" << u8"提醒" << u8"任务管理" << u8"悬浮窗" << u8"高级设置";

	m_pListWidget->addItems(m_textList);

	string lw_qss = R"(
		QListWidget
		{
			/*border:1px solid gray;   �߽���:���ȡ���ɫ*/
			background:rgb(26, 26, 26);   /*���񱳾�ɫ*/
			color:rgb(200, 200, 200);     /*ǰ��ɫ��������ɫ*/
			font-size:15px;
			border-radius:1px;
		}

		QListWidget::item
		{
			height:40px;
			padding-left:10px; /*�����ı���left��ߵľ���*/
		}
		
		QListWidget::item:!active
		{
			background:rgb(26, 26, 26);
			margin:5px 20px 1px 20px;   /*��������, ����item��ListWidget�ľ���*/
		}

		QListWidget::item:hover
		{
			background:rgb(56, 56, 56);
			padding-left:30px;
		}

		QListWidget::item:selected
		{
			border-radius:15px;
			background:lightblue;
		}

		/*�ϴ�ѡ�������״̬������뿪����ʾ*/
		QListWidget::item:selected:!active
		{
			background:rgb(51,51,51);
			color:#3F85FF;
		})";

	m_pListWidget->setStyleSheet(QString::fromStdString(lw_qss));

	m_pScrollArea = new QScrollArea(this);
	m_pScrollArea->setFixedWidth(1000 + 30);
	m_pScrollArea->setFrameShape(QFrame::NoFrame);
	// 设置滑动条
	m_pScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	m_pScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

	string verticalbar_qss = R"(
		QScrollBar{width:16px;background:rgb(26, 26, 26);margin:0px, 0px, 0px, 0px;}
		QScrollBar::handle:vertical{width:8px;background:rgba(162, 163, 165, 100%);border-radius:4px;min-height:40;}
			  QScrollBar::handle:vertical:hover{width:8px;background:rgba(115,118,118, 100%);border-radius:4px;min-height:40;}
			  QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical{background:rgb(26, 26, 26);border-radius:4px;}
			  QScrollBar::top-arrow:vertical,QScrollBar::bottom-arrow:vertical{border: none;background: none;color: none;}
			  QScrollBar::add-line:vertical{border:none;background:none;}
			  QScrollBar::sub-line:vertical{border:none;background:none;}
		)";

	//�������ѵ�
	m_pScrollArea->verticalScrollBar()->setStyleSheet(QString::fromStdString(verticalbar_qss));

	m_pBaseSetWidget = new CBaseWidget;
	m_vecWidget.push_back(m_pBaseSetWidget);

	m_pYunpanSetWidget = new QWidget;
	m_pYunpanSetWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/YunPanSet.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pYunpanSetWidget->setFixedSize(1000, 478);
	m_vecWidget.push_back(m_pYunpanSetWidget);

	m_pDownloadWidget = new QWidget;
	m_pDownloadWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/XiaZai.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pDownloadWidget->setFixedSize(1000, 337);
	m_vecWidget.push_back(m_pDownloadWidget);

	m_pJieguanWidget = new QWidget;
	m_pJieguanWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/JieGuanSet.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pJieguanWidget->setFixedSize(1000, 340);
	m_vecWidget.push_back(m_pJieguanWidget);

	m_pRenwuWidget = new QWidget;
	m_pRenwuWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/RenwuGuanli.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pRenwuWidget->setFixedSize(1000, 413);
	m_vecWidget.push_back(m_pRenwuWidget);

	m_pTixingWidget = new QWidget;
	m_pTixingWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/TiXing.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pTixingWidget->setFixedSize(1000, 728);
	m_vecWidget.push_back(m_pTixingWidget);

	m_pXuanfuWidget = new QWidget;
	m_pXuanfuWidget->setStyleSheet("background-image:url(:/ScrollArea_XunLeiSetDemo/resources/XuanFuChuang.png);background-repeat: no-repeat;background-color:rgb(51, 51, 51)");
	m_pXuanfuWidget->setFixedSize(1000, 206);
	m_vecWidget.push_back(m_pXuanfuWidget);

	m_pGaojiWidget = new GaojiSetWidget;
	m_vecWidget.push_back(m_pGaojiWidget);

	QWidget* widget = new QWidget;

	QVBoxLayout* pVLay = new QVBoxLayout(widget);

	//�����е�"����Widget"���ӽ���
	for (auto w : m_vecWidget)
	{
		pVLay->addWidget(w);
		pVLay->addSpacing(15);
	}

	pVLay->setContentsMargins(0, 5, 0, 5);

	// ��QScrollArea����Widget
	m_pScrollArea->setWidget(widget);

	QHBoxLayout* hlay = new QHBoxLayout(this);
	hlay->addWidget(m_pListWidget);
	hlay->setSpacing(0);
	hlay->addWidget(m_pScrollArea);

	// ���listWidgte��Item�л���ʾ����
	connect(m_pListWidget, &QListWidget::itemClicked, this, &ScrollAreaDemo::slotItemClicked);

	// ��������м�ʱScrollBarֵ�仯���źŲ�
	connect(m_pScrollArea->verticalScrollBar(), &QScrollBar::valueChanged,
		this, &ScrollAreaDemo::slotValueChanged);
}



void ScrollAreaDemo::slotItemClicked(QListWidgetItem* item)
{
	signFlag = true;
	QString itemText = item->text();
	QPoint widgetPos;

	int size = m_textList.size();
	for (int i = 0; i < size; i++)
	{
		if (itemText == m_textList[i])
		{
			widgetPos = m_vecWidget[i]->pos();
		}
	}

	m_pScrollArea->verticalScrollBar()->setValue(widgetPos.y());
}


//这个示例展示了如何响应用户点击列表项和滚动条值的变化。当用户点击列表项时，它会找到对应的子控件的位置，并滚动到那个位置。当滚动条的值变化时，它会检查每个子控件的可见状态，并相应地选中或取消选中列表项。
void ScrollAreaDemo::slotValueChanged(int value)
{
	if (!signFlag)
	{
		int itemSize = m_vecWidget.size();
		for (int i = 0; i < itemSize; i++)
		{
			if (!m_vecWidget[i]->visibleRegion().isEmpty())
			{
				m_pListWidget->item(i)->setSelected(true);
				return;
			}
			else
			{
				m_pListWidget->item(i)->setSelected(false);
			}
		}
	}

	signFlag = false;
}
