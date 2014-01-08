
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

          if(testeurURL.testStruct(temp)){ // test de validité de sa structure
              if(testeurURL.testVie(temp))
                  cout << "  OK, l'url fonctionne" << endl;
              else
                  cout << "  NOK, l'url ne fonctionne pas ! " << endl;

              listeURL.append(QString(temp.data()));
          }
          else
              cout << "  NOK, ce n'est pas une url ! " << endl;

      }
      fluxFic.close();
    }
    else
        throw string("ERREUR: Impossible d'ouvrir et de lire le fichier : "+nomFic); // erreur a gérer
}

QStringList parseurFic::getUrls(){
    return listeURL;
}

void parseurFic::testUrls(){
// for each url in tabURL > testURL
/*
    if(testeurURL.testVie(temp))
        cout << "  OK, l'url fonctionne" << endl;
    else
        cout << "  NOK, l'url ne fonctionne pas ! " << endl;
*/
}
