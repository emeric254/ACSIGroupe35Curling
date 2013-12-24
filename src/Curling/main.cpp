
#include "./parseurFic.h"
#include "./listeurFic.h"
#include "./vue.h"

#include <iostream>
#include <string>
#include <QtCore>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    Vue fenetre;
    parseurFic testParseur;
    listeurFic listeur;
    std::string fichier;
/*
    if(argc>1){
         fichier=argv[1];
        try {
            std::cout << "liste des URL contenues dans ce fichier  : " << fichier << std::endl;
            testParseur.lireFic(fichier);
        }
        catch (std::string const& chaineErr){
            std::cerr << chaineErr << std::endl;
            return -2;
        }
    } else {
        std::cout << "aucun paramètre !  " << std::endl;
        return -1;
    }
*/
//** TODO : au final on vire tout les std::cout pour les remplacer par une classe "VUE" qui sert a gérer tout l'affichage ;) **/
/*
    try {
        listeur.lister("/home/toast/");
    }
    catch (std::string const& chaineErr){
        std::cerr << chaineErr << std::endl;
        return app.exit(-1);
    }
*/
    fenetre.show();
    return app.exec();
}
