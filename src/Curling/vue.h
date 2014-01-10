#ifndef VUE_H
#define VUE_H

#include <QtCore>
#include <QtGui/QtGui>
#include "controlvue.h"

class Vue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vue(QWidget *parent = 0);
    ~Vue();

public slots:
    void clearText();
    void addLigne(QString ligne);
    void parcourirAppuyer();
    void testerAppuyer();

private :
    QPushButton quitter,ouvrir,tester;
    QLabel progression, chemin;
    QTextEdit zoneTexte;
    controlVue controlleur;

};

#endif // VUE_H
