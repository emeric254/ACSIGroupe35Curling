#ifndef CONTROLVUE_H
#define CONTROLVUE_H

#include "listeurFic.h"
#include "parseurFic.h"
#include "urlvalidator.h"

class controlVue
{
public:
    controlVue();

    void listerDossier();
    void testerFic();
    void testerDossier();
    void tester(QTextEdit * zonetexte);
    void parcourir();

private:
    QFileInfo selection;
    listeurFic listeur;
    parseurFic parseur;
};

#endif // CONTROLVUE_H
