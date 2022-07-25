#include "./ui/flies.h"
#include"qpushbutton.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Flies w;
    w.show();

    return a.exec();
}
