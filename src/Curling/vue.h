#ifndef VUE_H
#define VUE_H

/**
 * \file vue.h
 * \brief vue principale
 * \author E.Tosi
 * \date 24.12.2013
 *
 * classe gérant la vue principale
 */

#include <QtCore>
#include <QtGui/QtGui>
#include "controlvue.h"

/*!
   * \class Vue
   * \brief classe représentant la vue principale
   *
   * classe gérant la vue principale
   */
class Vue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Vue(QWidget *parent = 0);
    ~Vue();

public slots:

    /*!
     *  \brief vide "zoneTexte"
     *
     *  Fonction qui vide "zoneTexte"
     */
    void clearText();

    /*!
     *  \brief ajoute une ligne a "zoneTexte"
     *  \param ligne : le QString a ajouter en fin de "zoneTexte"
     *
     *  Fonction qui ajoute une ligne (QString) à la fin de "zoneTexte"
     */
    void addLigne(QString ligne);

    /*!
     *  \brief appelée sur pression de "parcourir"
     *
     *  Fonction appelée lorsque le boutons "parcourir" est appuyé
     */
    void parcourirAppuyer();

    /*!
     *  \brief appelée sur pression de "parcourirDossier"
     *
     *  Fonction appelée lorsque le boutons "parcourirDossier" est appuyé
     */
    void parcourirDossierAppuyer();

    /*!
     *  \brief appelée sur pression de "tester"
     *
     *  Fonction appelée lorsque le boutons "tester" est appuyé
     */
    void testerAppuyer();

private :
    QPushButton quitter,ouvrir,tester,ouvrirDossier; /*!< boutons */
    QLabel progression, chemin; /*!< labels de textes */
    QTextEdit zoneTexte; /*!< zone de texte */
    controlVue controlleur; /*!< le controlleur */

};

#endif // VUE_H
