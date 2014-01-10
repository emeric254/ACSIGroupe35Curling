
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

    if(argc==2 || argc>3) // mauvais nombre de parametres (1 ou plus que 2 parametres utilisateurs)
    {
        std::cout << std::endl << "Usage : " << argv[0] << " [-c ou -d] [chemin] " << std::endl;
        return -1;
    }
    else // bon nombre de parametres
    {
        if(argc==3) // donc 2 parametres utilisateurs > fichier ou dossier ?
        {
            std::string param1=argv[1];
            std::string param2=argv[2];

            if(param1.compare("-c") == 0) // choix de tester un fichier
            {
                try
                {
                    std::cout << "liste des URL contenues dans ce fichier : " << param2 << std::endl;
                    testParseur.lireFic(param2);
                }
                catch (std::string const& chaineErr)
                {
                    std::cerr << chaineErr << std::endl;
                    return -2;
                }
            }
            else
            {
                if(param1.compare("-d") == 0) // choix de tester un dossier
                {
                    try
                    {
                        std::cout << "liste des fichiers contenues dans ce dossier : " << param2 << std::endl;
                        listeur.lister(param2);
                        foreach( std::string fichier, listeur.getStringListe())
                            testParseur.lireFic(fichier);
                    }
                    catch (std::string const& chaineErr)
                    {
                        std::cerr << chaineErr << std::endl;
                        return -2;
                    }
                }
            }
        }
        else // donc 0 parametre utilisateur > Mode Graphique
        {
            fenetre.show();
            return app.exec();
        }
    }
    app.exit();
    return 0;
}
