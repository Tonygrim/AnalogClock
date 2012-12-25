#include <QApplication>

#include "analogclock.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    AnalogClock clock;

    clock.show();
// 	clock.setStyleSheet( "QWidget:clock{ background-color: rgb(0, 170, 255);}");
    return app.exec();
}
