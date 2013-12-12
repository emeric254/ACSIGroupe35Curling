
#include "parseurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void parseurFic::lireFic(string nomFic)
{
    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    if(fluxFic) // si bien ouvert
    {
      while ( getline(fluxFic, temp) ) {

         cout << temp << endl; /** @TODO : à virer pour le respect du MVC ! xD **/

         // ---- traitement :
         /** @TODO : récupérer dans la ligne l'url puis ajouter ça a tabString **/

      }
      fluxFic.close();
    }
    else
        throw string("ERREUR: Impossible d'ouvrir et de lire le fichier  "+nomFic); // erreur a gérer
}
