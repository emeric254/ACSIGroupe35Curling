#ifndef CONTROLVUE_H
#define CONTROLVUE_H

#include "vue.h"
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
    void tester();
    void parcourir();

private:
    Vue fenetre;
    QFileInfo selection;
    listeurFic listeur;
    parseurFic parseur;
};

#endif // CONTROLVUE_H
