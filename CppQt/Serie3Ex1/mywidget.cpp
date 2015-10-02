#include "mywidget.h"
#include <QtWidgets>

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    QGroupBox *groupBox = new QGroupBox("Bouttons Radio Exclusifs");
    radio1 = new QRadioButton("Choix &1", this);
    radio2 = new QRadioButton("Choix &2", this);
    radio3 = new QRadioButton("Choix &3", this);

    radio1->setIcon(QIcon("./img/options.xpm"));
    radio2->setIcon(QIcon("./img/screen.xpm"));
    radio3->setIcon(QIcon("./img/spherelime.xpm"));

    pb = new QPushButton("&Valider", this);
    radio1->setChecked(true);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(radio1);
    vbox->addWidget(radio2);
    vbox->addWidget(radio3);
    vbox->addWidget(pb);
    groupBox->setLayout(vbox);
    groupBox->show();

    QObject::connect(radio1, SIGNAL(toggled(bool)), this, SLOT(toggled1()));
    QObject::connect(radio2, SIGNAL(toggled(bool)), this, SLOT(toggled2()));
    QObject::connect(radio3, SIGNAL(toggled(bool)), this, SLOT(toggled3()));

    QObject::connect(pb, SIGNAL(clicked(bool)), this, SLOT(validate()));
}

void MyWidget::toggled1(){
    pb->setText("Choix 1");
}

void MyWidget::toggled2(){
    pb->setText("Choix 2");
}

void MyWidget::toggled3(){
    pb->setText("Choix 3");
}

void MyWidget::validate(){
    if(radio1->isChecked()){
        QMessageBox::information(this, "Info", "Cas 1");
    } else if(radio2->isChecked()){
        QMessageBox::information(this, "Info", "Cas 2");
    } else if(radio3->isChecked()){
        QMessageBox::information(this, "Info", "Cas 3");
    }
}

