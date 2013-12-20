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
   * \brief classe représentant le valideur d(e fichier d'URL
   *
   * classe gérant les tests appliqués à une URL
   *
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
 *
 */
    bool testStruct(std::string pURL);

/*!
 *  \brief retourne les url lues
 *  \param pURL : la chaine de caractere representant l'URL
 *  \return le tableau d'url
 *
 *  Fonction qui test si l'URL est bien vivante et accessible
 *  grace à une utilisation d'une commande utilisant "wget"
 *  (mode "--spider")
 *
 */
    bool testVie(std::string pURL); //** TODO cette fonction doit retourner une structure/tableau d'url **/

private :
    QRegExp rx; /*!< l'expression reguliere */
    QProcess wget;
};

#endif // URLVALIDATOR_H
