#include "controlvue.h"

controlVue::controlVue(){
    fenetre.show();
    // manque connections entre event et actions
//    QApplication::connect(&fenetre,SIGNAL(ouvrirClicked()),this,SLOT(parcourir()));
}

void controlVue::listerDossier(){
    listeur.lister(selection.absolutePath().toStdString());
}

void controlVue::tester(){
    if(selection.isDir())
        testerDossier();
    else
        testerFic();
}

void controlVue::testerDossier(){
}

void controlVue::testerFic(){
    parseur.lireFic(selection.absolutePath().toStdString());
    parseur.testUrls();
}

void controlVue::parcourir(){
    selection.setFile(QFileDialog::getExistingDirectory(&fenetre));
    if(selection.isDir())
        listerDossier();
}
