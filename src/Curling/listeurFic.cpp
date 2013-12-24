
#include "listeurFic.h"

using namespace std; // pour éviter d'écrire 'std::' à chaque fois

void listeurFic::lister(string nomDossier)
{
    QFileInfo fi(QString(nomDossier.data()));

    if(!fi.isDir())
        throw string("ERREUR: ce n'est pas un dossier : " + nomDossier); // erreur a gérer

    if(!fi.isReadable())
        throw string("ERREUR: ce dossier n'est pas cessible en lecture : " + nomDossier); // erreur a gérer

    listerDossier(fi.absoluteFilePath());
}

void listeurFic::listerDossier(QString nomDossier){

    QFileInfo fi(QString(nomDossier.data()));
    QString chemin=fi.absoluteFilePath();

//         QStringList filters;
//         filters << "*.txt" << "*.html" << "*";

         QFileInfoList files = QDir(chemin).entryInfoList();
         files.removeFirst();
         files.removeFirst();
         foreach( QFileInfo file, files )
            if(file.isReadable() && !file.isHidden())
            {
                if(file.isFile())
                    listeFichiers.append(file);
                else {
                     files.removeOne(file);
                     listerDossier(file.absoluteFilePath());
                }
            }

}

QFileInfoList listeurFic::getListe(){
    return listeFichiers;
}

list <string> listeurFic::getStringListe(){
    list <string> liste;
    foreach(QFileInfo temp, listeFichiers)
        liste.push_back(temp.absoluteFilePath().toStdString());
    return liste;
}

QStringList listeurFic::getQStringListe(){
    QStringList liste;
    foreach(QFileInfo temp, listeFichiers)
        liste.push_back(temp.absoluteFilePath());
    return liste;
}
