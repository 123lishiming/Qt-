#include "HLayout.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HLayout w;
    w.show();
    return a.exec();
}
