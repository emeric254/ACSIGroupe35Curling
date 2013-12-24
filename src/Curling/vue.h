#ifndef VUE_H
#define VUE_H

#include <QtCore>
#include <QtGui/QtGui>

class Vue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vue(QWidget *parent = 0);
    ~Vue();

signals:


public slots:
    void clearText();
    void addLigne(QString ligne);
    void setCurProgression(int progress);
    void setMaxProgression(int maximum);

private :
    QPushButton quitter,ouvrirFic,ouvrirDossier,tester;
    QProgressBar progression;
    QLabel chemin;
    QTextEdit zoneTexte;

};

#endif // VUE_H
