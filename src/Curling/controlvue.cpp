#include "controlvue.h"

controlVue::controlVue(){}

void controlVue::listerDossier(){
    listeur.lister(selection.absoluteFilePath().toStdString());
}

void controlVue::tester(QTextEdit *zonetexte){
    parseur.clear();
    zonetexte->clear();
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
    parseur.lireFic(selection.absoluteFilePath().toStdString());
}

void controlVue::parcourir(QWidget *vue){
    selection.setFile(QFileDialog::getOpenFileName(vue));
}

void controlVue::parcourirDossier(QWidget *vue){
    selection.setFile(QFileDialog::getExistingDirectory(vue));
    listerDossier();
}
