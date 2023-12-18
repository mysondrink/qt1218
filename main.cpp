#include "homepage.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    homepage w;
    w.show();
    return a.exec();
}
