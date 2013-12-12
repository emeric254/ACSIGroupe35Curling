
#include "parseurFic.h"
#include <iostream>
#include <fstream>

using namespace std;

void parseurFic::lireFic(string nomFic)
{
    ifstream fluxFic; // ouverture en lecture

    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    if(fluxFic) // si bien ouvert
    {
      string ligne;

      while ( getline(fluxFic, ligne) ) {
         cout << ligne << endl;
         // ---- traitement :
         // @TODO : récupérer dans la ligne l'url puis ajouter ça a tabString

      }

      fluxFic.close();
    }
    else
        throw string("ERREUR: Impossible d'ouvrir et de lire le fichier  "+nomFic); // erreur a gérer
}
