#ifndef URLVALIDATOR_H
#define URLVALIDATOR_H

/**
 * \file urlValidator.h
 * \brief Valideur d'URL
 * \author E.Tosi
 * \date 20.12.2013
 *
 * classe gérant les tests appliqués à une URL
 */

#include <QRegExp>
#include <QtCore>

/*!
   * \class urlValidator
   * \brief classe représentant le valideur de fichier d'URL
   *
   * classe gérant les tests appliqués à une URL
   */
class urlValidator
{
public:

/*!
 *  \brief test si l'url est bien structurée
 *  \param pURL : la chaine de caractere representant l'URL
 *  \return booleen : Vrai si l'URL est bien structurée, sinon Faux
 *
 *  Fonction qui test si l'URL est bien construite et structurée
 *  grace à une expression régulière
 */
    bool testStruct(std::string pURL);

/*!
 *  \brief test si une url est contenue dans cette chaine
 *  \param pURL : la chaine de caractere
 *  \return string : retourne une url si trouvée, ou NULL
 *
 *  Fonction qui cherche si une URL n'est pas contenue
 *  dans cette chaine de caractere
 */
    std::string chercheStruct(std::string pURL);

/*!
 *  \brief retourne les url lues
 *  \param pURL : la chaine de caractere representant l'URL
 *  \return le tableau d'url
 *
 *  Fonction qui test si l'URL est bien vivante et accessible
 *  grace à une utilisation d'une commande utilisant "wget"
 *  (mode "--spider")
 */
    bool testVie(std::string pURL);

private :
    QRegExp rx; /*!< l'expression reguliere */
    QProcess wget; /*!< le processus où le wget s'executera */
};

#endif // URLVALIDATOR_H
