#include "vue.h"

Vue::Vue(QWidget *parent) :
    QMainWindow(parent)
{
    this->setWindowTitle("Curling");
//    setWindowIcon();
    this->setFixedSize(640,480);

    quitter.setParent(this);
    zoneTexte.setParent(this);
    progression.setParent(this);

    // layout fixe :
    quitter.setGeometry(0,440,80,40);
    zoneTexte.setGeometry(0,60,480,320);
    progression.setGeometry(0,0,640,20);
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
