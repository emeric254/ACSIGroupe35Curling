#include "vue.h"

Vue::Vue(QWidget *parent) : QMainWindow(parent)
{
    this->setWindowTitle("Curling");
//    setWindowIcon(); // pour le swagg !

    this->setFixedSize(640,480);

    quitter.setParent(this);
    ouvrir.setParent(this);
    ouvrirDossier.setParent(this);
    tester.setParent(this);

    zoneTexte.setParent(this);
    progression.setParent(this);

    // layout fixe :
    progression.setGeometry(0,0,640,40);
    zoneTexte.setGeometry(0,40,640,400);

    quitter.setGeometry(0,440,160,40);
    ouvrir.setGeometry(160,440,160,40);
    ouvrirDossier.setGeometry(320,440,160,40);
    tester.setGeometry(480,440,160,40);

    tester.hide(); //  cacher au depart

    // proprio des btns :
    quitter.setText("Quitter");
    ouvrir.setText("Parcourir Fichier");
    ouvrirDossier.setText("Parcourir Dossier");
    tester.setText("Tester");
    zoneTexte.setReadOnly(true);

    connect(&quitter,SIGNAL(clicked()),this,SLOT(close()));
    connect(&ouvrir,SIGNAL(clicked()),this,SLOT(parcourirAppuyer()));
    connect(&ouvrirDossier,SIGNAL(clicked()),this,SLOT(parcourirDossierAppuyer()));
    connect(&tester,SIGNAL(clicked()),this,SLOT(testerAppuyer()));
}

Vue::~Vue(){}

void Vue::clearText(){
    progression.clear();
    zoneTexte.clear();
}

void Vue::addLigne(QString ligne){
    zoneTexte.append(ligne);
}

void Vue::parcourirDossierAppuyer(){
    progression.clear();
    controlleur.parcourirDossier(this);
    tester.show();
}

void Vue::parcourirAppuyer(){
    progression.clear();
    controlleur.parcourir(this);
    tester.show();
}

void Vue::testerAppuyer(){
    tester.hide();
    progression.setText(" Veuillez patienter ... ");
    controlleur.tester(&zoneTexte);
    progression.setText(" Finis !");
}
