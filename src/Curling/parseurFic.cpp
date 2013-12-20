
#include "parseurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void parseurFic::lireFic(string nomFic)
{
    fluxFic.open(nomFic.c_str()); // ouverture du fichier de nom contenu dans 'nomFic'

    // init l'expression reguliere :
    rx.setPattern("^(http(s)?|(s)?ftp)://([a-zA-Z0-9-]+.)?([a-zA-Z0-9-]+.)?[a-zA-Z0-9-]+\.[a-zA-Z]{2,4}(:[0-9]+)?(/[a-zA-Z0-9-]*/?|/[a-zA-Z0-9]+\.[a-zA-Z0-9]{1,4})?$");
//    rx.setPatternSyntax(QRegExp::Wildcard); // pour les regexp du genre ("http://*")

    if(fluxFic) // si bien ouvert
    {
      while ( getline(fluxFic, temp) ) {
          cout << temp ;
          QString chaine("wget --spider --no-check-certificate ");

        // ---- traitement :
        //** TODO : ne pas test mais plutot récupérer dans la ligne l'url (si il y en a une) puis l'ajouter à tabString **/
          if(rx.exactMatch(QString(temp.data()))){ // test de validité
              chaine.append(temp.data());
              QProcess test;
              test.start(chaine.toStdString().data());
              cout << " " << test.exitCode();
              cout << " " << test.exitStatus();
              test.waitForFinished();
              if(test.exitCode()==0)
                  cout << "  OK " << endl;
              else
                  cout << "  NOK, url pas valide ! " << endl;
          }else
              cout << "  NOK, pas une url ! " << endl;

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
}
