#ifndef DEF_PARSEURFIC
#define DEF_PARSEURFIC

/**
 * \file parseurFic.h
 * \brief Parseur de fichier
 * \author E.Tosi
 * \date 11.12.2013
 *
 * classe gérant la lecture depuis un fichier à la recherche d'url
 * stockées dans  TODO
 *
 */

#include <iostream>
#include <fstream>
#include <string>
#include <QRegExp>

/*!
   * \class parseurFic
   * \brief classe représentant le parseur de fichier
   *
   * classe gérant la lecture depuis un fichier à la recherche d'url
   * stockées dans  TODO
   *
   */
class parseurFic {

    public :

    /*!
     *  \brief lis le fichier et y prend les url
     *  \param nomFic : le fichier a lire
     *
     *  Méthode qui lis le fichier passé en paramètre et accumule les url qu'il y trouve
     *
     */
        void lireFic(std::string nomFic);

    /*!
     *  \brief retourne les url lues
     *  \return le tableau d'url
     *
     *  Fonction qui retourne les url lues dans un fichier au préalable
     *
     */
        void getUrls(); //** TODO cette fonction doit retourner une structure/tableau d'url **/

    private :
        std::string temp; /*!< ligne temporaire qui est lue dans le fichier */
        std::ifstream fluxFic; /*!< descripteur de fichier ouvert en lecture */
        QRegExp rx;
        //** TODO : il faudrait une structure/tableau d'url **/
};


#endif
