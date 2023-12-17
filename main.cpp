
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_UseDesktopOpenGL);
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("3D Letter K");
    w.setWindowIcon(QIcon("letter-k.png"));
    w.show();
    return a.exec();
}
