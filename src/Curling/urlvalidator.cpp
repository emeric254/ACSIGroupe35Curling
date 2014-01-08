
#include "urlvalidator.h"

bool urlValidator::testStruct(std::string pURL){

    rx.setPattern("^(http(s)?|(s)?ftp)://([a-zA-Z0-9-]+.)?([a-zA-Z0-9-]+.)?[a-zA-Z0-9-]+\\.[a-zA-Z]{2,4}(:[0-9]+)?(/[a-zA-Z0-9-]*/?|/[a-zA-Z0-9]+\\.[a-zA-Z0-9]{1,4})?$");

//    rx.setPatternSyntax(QRegExp::Wildcard); // pour les regexp du genre ("http://*")

    if(rx.exactMatch(QString(pURL.data()))) // test de validité de la structure
        return true;

    return false;
}

bool urlValidator::testVie(std::string pURL){

    QString chaine("wget --spider --no-check-certificate "); // construction de la commande de base
    chaine.append(pURL.data()); // on y concatene l'url

    wget.start(chaine.toStdString().data()); // on execute la commande

    wget.waitForFinished();

    if(wget.exitCode()) // si code de retour != 0 > erreur ou probleme
        return false;

    return true;
}
