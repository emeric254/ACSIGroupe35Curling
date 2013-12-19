
#include "parseurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void parseurFic::lireFic(string nomFic)
{
    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    rx.setPattern("^(http(s)?|(s)?ftp)://([a-zA-Z0-9-]+.)?([a-zA-Z0-9-]+.)?[a-zA-Z0-9-]+\.[a-zA-Z]{2,4}(:[0-9]+)?(/[a-zA-Z0-9-]*/?|/[a-zA-Z0-9]+\.[a-zA-Z0-9]{1,4})?$");
//    rx.setPatternSyntax(QRegExp::Wildcard); // pour les regexp du genre ("http://*")

    if(fluxFic) // si bien ouvert
    {
      while ( getline(fluxFic, temp) ) {
          cout << temp ;

        // ---- traitement :
        //** TODO : récupérer dans la ligne l'url (si il y en a une) puis l'ajouter à tabString **/
          if(rx.exactMatch(QString(temp.data())))
              cout << "  OK " << endl;
          else
              cout << "  NOK ! " << endl;
        
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
