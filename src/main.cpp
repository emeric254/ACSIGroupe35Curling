
#include "parseurFic.h"

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    parseurFic testParseur;
    std::string fichier;

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

//** TODO : au final on vire tout les std::cout pour les remplacer par une classe "VUE" qui sert a gérer tout l'affichage ;) **/

    return 0;
}
