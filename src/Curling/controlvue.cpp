#include "controlvue.h"

controlVue::controlVue(){}

void controlVue::listerDossier(){
    listeur.lister(selection.absoluteFilePath().toStdString());
}

void controlVue::tester(QTextEdit * zonetexte){
    if(selection.isDir())
        testerDossier();
    else
        if(selection.isFile())
            testerFic();

    foreach(QString temp, parseur.getUrls())
        zonetexte->append(temp);
}

void controlVue::testerDossier(){
    foreach( std::string fichier, listeur.getStringListe())
        parseur.lireFic(fichier);
}

void controlVue::testerFic(){
    parseur.lireFic(selection.absolutePath().toStdString());
}

void controlVue::parcourir(){
    selection.setFile(QFileDialog::getExistingDirectory());
    if(selection.isDir())
        listerDossier();
}
