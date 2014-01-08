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
    void ouvrirClicked();
    void testerClicked();

public slots:
    void clearText();
    void addLigne(QString ligne);
    void setCurProgression(int progress);
    void setMaxProgression(int maximum);

private :
    QPushButton quitter,ouvrir,tester;
    QProgressBar progression;
    QLabel chemin;
    QTextEdit zoneTexte;

};

#endif // VUE_H
