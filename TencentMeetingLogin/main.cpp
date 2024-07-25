#include "TencentMeetingLogin.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TencentMeetingLogin w;
    w.show();
    return a.exec();
}
