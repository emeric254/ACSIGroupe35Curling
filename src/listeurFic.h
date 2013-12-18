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
     *  \brief retourne les noms/chemins fichiers listés
     *  \return le tableau des nom/chemins des fichiers listés
     *
     *  Fonction qui retourne la liste des fichiers
     *
     */
        std::string * getListe(); //** TODO **/


     //** @TODO une autre methode pour recup un par un les nom de fic ? **/

    private :
        std::string * listeFichiers;
//        std::string temp; /*!< ligne temporaire qui est lue dans le fichier */
//        std::ifstream fluxFic; /*!< descripteur de fichier ouvert en lecture */

};


#endif
