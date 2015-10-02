#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QObject>
#include <QWidget>

#include <QtWidgets>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);

signals:

public slots:
    void toggled1(void);
    void toggled2(void);
    void toggled3(void);
    void validate(void);

private:
    QPushButton *pb;
    QRadioButton *radio1;
    QRadioButton *radio2;
    QRadioButton *radio3;
};

#endif // MYWIDGET_H
