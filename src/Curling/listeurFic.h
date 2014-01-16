#ifndef DEF_LISTEURFIC
#define DEF_LISTEURFIC

/**
 * \file listeurFic.h
 * \brief listeur de fichier
 * \author E.Tosi
 * \date 20.12.2013
 *
 * classe gérant les fichiers
 */

#include <iostream>
#include <fstream>
#include <string>
#include <QtCore>
#include <QtGui/QtGui>

/*!
   * \class listeurFic
   * \brief classe listeurFic
   *
   * classe gérant les fichiers
   */
class listeurFic {

    public :

    /*!
     *  \brief liste les fichiers d'un dossier
     *  \param nomDossier : le fichier a lire
     *
     *  Méthode qui liste les fichiers dans un dossier dont le nom est donné en paramètre (nomDossier)
     */
        void lister(std::string nomDossier);

    /*!
     *  \brief retourne la liste des fichiers listés
     *  \return la liste des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     */
        QFileInfoList getListe();

    /*!
     *  \brief retourne la liste des chemins des fichiers listés
     *  \return le tableau des QString /chemins des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     */
        QStringList getQStringListe();

    /*!
     *  \brief retourne la liste des chemins des fichiers listés
     *  \return le tableau de std::string /chemins des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     */
        std::list <std::string> getStringListe();

    private :
        void listerDossier(QString nomDossier);
        QFileInfoList listeFichiers;

};


#endif
