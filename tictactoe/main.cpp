#include "startwindow.h"
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartWindow w;

    w.move(960, 540);
    w.show();

    return a.exec();
}
