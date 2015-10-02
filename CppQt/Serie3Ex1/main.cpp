#include <QApplication>
#include <QtWidgets>

#include "mywidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyWidget *mw = new MyWidget();

    QHBoxLayout *layout = new QHBoxLayout();

    layout->addWidget(mw);

    return app.exec();
}
