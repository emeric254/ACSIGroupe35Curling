#ifndef DEF_LISTEURFIC
#define DEF_LISTEURFIC

/**
 * \file listeurFic.h
 * \brief listeur de fichier
 * \author
 * \date 20.12.2013
 *
 * classe ...
 *
 */

 // a voir ce qu'il faut
#include <iostream>
#include <fstream>
#include <string>
#include <QtCore>
#include <QtGui/QtGui>


/*!
   * \class listeurFic
   * \brief classe ...
   *
   * classe ...
   *
   */
class listeurFic {

    public :

    /*!
     *  \brief liste les fichiers d'un dossier
     *  \param nomDossier : le fichier a lire
     *
     *  Méthode qui liste les fichiers dans un dossier dont le nom est donné en paramètre (nomDossier)
     *
     */
        void lister(std::string nomDossier);

    /*!
     *  \brief retourne la liste des fichiers listés
     *  \return la liste des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     *
     */
        QFileInfoList getListe();

    /*!
     *  \brief retourne la liste des chemins des fichiers listés
     *  \return le tableau des QString/chemins des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     *
     */
        QStringList getQStringListe();

    /*!
     *  \brief retourne la liste des chemins des fichiers listés
     *  \return le tableau de std::string/chemins des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     *
     */
        std::list <std::string> getStringListe();


     //** @TODO une autre methode pour recup un par un les nom de fic ? **/

    private :
        void listerDossier(QString nomDossier);
        QFileInfoList listeFichiers;
//        std::string temp; /*!< ligne temporaire qui est lue dans le fichier */
//        std::ifstream fluxFic; /*!< descripteur de fichier ouvert en lecture */

};


#endif
