
#include "parseurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void parseurFic::lireFic(string nomFic)
{
    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    if(fluxFic) // si bien ouvert
    {
        cout << endl << nomFic << " : " << endl;

        listeURL.append(QString(nomFic.append(" : ").data()));

      while ( getline(fluxFic, temp) ) {

        // ---- traitement :

          if(testeurURL.testStruct(temp)){ // test de validité de sa structure
              if(testeurURL.testVie(temp))
                  temp.append(" OK :)");
              else
                  temp.append(" NOK :(");

              cout << temp << endl;


              listeURL.append(QString(temp.data()));
          }
          else {
              temp = testeurURL.chercheStruct(temp.data());
              if(!temp.empty()) {
                  if(testeurURL.testVie(temp))
                      temp.append(" OK :)");
                  else
                      temp.append(" NOK :(");
                  cout << temp << endl;
                  listeURL.append(QString(temp.data()));
              }
          }

      }
      fluxFic.close();
    }
    else
        throw string("ERREUR: Impossible d'ouvrir et de lire le fichier : "+nomFic); // erreur a gérer
}

QStringList parseurFic::getUrls(){
    return listeURL;
}

void parseurFic::clear(){
    listeURL.clear();
}
