#ifndef CONTROLVUE_H
#define CONTROLVUE_H

/**
 * \file controlvue.h
 * \brief controleur principal
 * \author E.Tosi
 * \date 08.01.2014
 *
 * classe controleur
 */

#include "listeurFic.h"
#include "parseurFic.h"
#include "urlvalidator.h"

/*!
   * \class controlVue
   * \brief classe représentant le controleur principal
   *
   * classe controleur
   */
class controlVue
{

public:
    controlVue();

public slots:

    /*!
     *  \brief lister le dossier
     *
     *  Fonction qui liste le dossier choisis
     */
    void listerDossier();

    /*!
     *  \brief fonction qui test le fichier choisis
     *
     *  Fonction qui test le fichier choisis
     */
    void testerFic();

    /*!
     *  \brief fonction qui test le dossier choisis
     *  \param ligne : le QString a ajouter en fin de "zoneTexte"
     *
     *  Fonction qui test tous les fichiers de l'arborescence contenue dans le dossier choisis
     */
    void testerDossier();

    /*!
     *  \brief ajoute une ligne a "zoneTexte"
     *  \param zonetexte : un pointeur vers "zoneTexte" de la vue
     *
     *  Fonction qui test les urls et ecris ensuite le resultat de ce(s) test(s) dans zonetexte (dans la vue)
     */
    void tester(QTextEdit *zonetexte);

    /*!
     *  \brief ouvre une fenetre de choix de fichier
     *  \param vue : un pointeur vers la vue
     *
     *  Fonction qui ouvre une fenetre de dialogue pour choisir un fichier
     */
    void parcourir(QWidget *vue);

    /*!
     *  \brief ouvre une fenetre de choix de dossier
     *  \param vue : un pointeur vers la vue
     *
     *  Fonction qui ouvre une fenetre de dialogue pour choisir un dossier
     */
    void parcourirDossier(QWidget *vue);

private:
    QFileInfo selection; /*!< le dossier/fichier selectionné */
    listeurFic listeur; /*!< le listeur de fichiers */
    parseurFic parseur; /*!< le parseur de fichiers */
};

#endif // CONTROLVUE_H
