#include "vue.h"

Vue::Vue(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Curling");
//    setWindowIcon(); // pour le swagg !

    this->setFixedSize(640,480);

    quitter.setParent(this);
    ouvrir.setParent(this);
    tester.setParent(this);

    zoneTexte.setParent(this);
    progression.setParent(this);

    // layout fixe :
    progression.setGeometry(0,0,640,20);
    zoneTexte.setGeometry(0,40,640,400);

    quitter.setGeometry(0,440,160,40);
    ouvrir.setGeometry(320,440,160,40);
    tester.setGeometry(480,440,160,40);

    // proprio des btns :
    quitter.setText("Quitter");
    ouvrir.setText("Parcourir");
    tester.setText("Tester");

    connect(&quitter,SIGNAL(clicked()),this,SLOT(close()));
    connect(&ouvrir,SIGNAL(clicked()),this,SIGNAL(ouvrirClicked()));
    connect(&tester,SIGNAL(clicked()),this,SIGNAL(testerClicked()));
}

Vue::~Vue(){}

void Vue::clearText(){
    zoneTexte.clear();
}

void Vue::addLigne(QString ligne){
    zoneTexte.append(ligne);
}

void Vue::setCurProgression(int progress){
    progression.setValue(progress);
}

void Vue::setMaxProgression(int maximum){
    progression.setMaximum(maximum);
}


