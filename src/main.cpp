
#include "parseurFic.h"

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	parseurFic testParseur;
    std::cout << "Plop du main !" << std::endl;
    testParseur.test();
    std::string fichier;
    if(argc>1) fichier=argv[1];
    else fichier="parseurFic.cpp";
    std::cout << "On va maintenant lire le fichier : " << fichier << std::endl;
    testParseur.lireFic(fichier);
    std::cout << "fin !" << std::endl;
    return 0;
}		
