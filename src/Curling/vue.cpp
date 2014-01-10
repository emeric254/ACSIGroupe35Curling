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
    progression.setGeometry(0,0,640,40);
    zoneTexte.setGeometry(0,40,640,400);

    quitter.setGeometry(0,440,160,40);
    ouvrir.setGeometry(320,440,160,40);
    tester.setGeometry(480,440,160,40);

    // proprio des btns :
    quitter.setText("Quitter");
    ouvrir.setText("Parcourir");
    tester.setText("Tester");
    zoneTexte.setReadOnly(true);

    connect(&quitter,SIGNAL(clicked()),this,SLOT(close()));
    connect(&ouvrir,SIGNAL(clicked()),this,SLOT(parcourirAppuyer()));
    connect(&tester,SIGNAL(clicked()),this,SLOT(testerAppuyer()));
}

Vue::~Vue(){}

void Vue::clearText(){
    zoneTexte.clear();
}

void Vue::addLigne(QString ligne){
    zoneTexte.append(ligne);
}

void Vue::parcourirAppuyer(){
    controlleur.parcourir();
}

void Vue::testerAppuyer(){
    progression.setText(" Veuillez patienter ... ");
    this->setEnabled(false);
    controlleur.tester(&zoneTexte);
    this->setEnabled(true);
    progression.setText(" Finis !");
}
