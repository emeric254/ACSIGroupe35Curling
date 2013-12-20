
#include "parseurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void parseurFic::lireFic(string nomFic)
{
    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    if(fluxFic) // si bien ouvert
    {
      while ( getline(fluxFic, temp) ) {
          cout << temp ;

        // ---- traitement :
        //** TODO : ne pas test mais plutot récupérer dans la ligne l'url (si il y en a une) puis l'ajouter à tabString **/

          if(testeurURL.testStruct(temp)) // test de validité de sa structure
              if(testeurURL.testVie(temp))
                  cout << "  OK, l'url fonctionne" << endl;
              else
                  cout << "  NOK, l'url ne fonctionne pas ! " << endl;
          else
              cout << "  NOK, ce n'est pas une url ! " << endl;

      }
      fluxFic.close();
    }
    else
        throw string("ERREUR: Impossible d'ouvrir et de lire le fichier : "+nomFic); // erreur a gérer
}

void parseurFic::getUrls(){
    //** TODO **/
//	return tabString;
}

void parseurFic::testUrls(){
// for each url in tabURL > testURL > test
}
