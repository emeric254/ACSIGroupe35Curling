
#include "listeurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void listeurFic::lister(string nomDossier)
{
    cout << nomDossier << endl;
// assertion :
//    throw string("ERREUR: Impossible d'ouvrir et de lire le fichier  "+nomFic); // erreur a gérer
}

string * listeurFic::getListe(){
    return listeFichiers;
}
