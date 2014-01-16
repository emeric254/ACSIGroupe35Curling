
#include "urlvalidator.h"

bool urlValidator::testStruct(std::string pURL){

    rx.setPattern("^(http(s)?|(s)?ftp)://([a-zA-Z0-9-]+.)?([a-zA-Z0-9-]+.)?[a-zA-Z0-9-]+\\.[a-zA-Z]{2,4}(:[0-9]+)?(/[a-zA-Z0-9-]*/?|/[a-zA-Z0-9]+\\.[a-zA-Z0-9]{1,4})?$");

//    rx.setPatternSyntax(QRegExp::Wildcard); // pour les regexp du genre ("http://*")

    if(rx.exactMatch(QString(pURL.data()))) // test de validité de la structure
        return true;

    return false;
}

std::string urlValidator::chercheStruct(std::string pURL){

    rx.setPattern("(http(s)?|(s)?ftp)://([a-zA-Z0-9-]+.)?([a-zA-Z0-9-]+.)?[a-zA-Z0-9-]+\\.[a-zA-Z]{2,4}(:[0-9]+)?(/[a-zA-Z0-9-]*/?|/[a-zA-Z0-9]+\\.[a-zA-Z0-9]{1,4})?");
    rx.indexIn(QString(pURL.data()));
    /*
    int pos = rx.indexIn(QString(pURL.data()));
    if(pos!=-1) // test de recherche
        return QString(pURL.data()).right(pURL.length()-pos).toStdString();
*/
    QStringList list = rx.capturedTexts();
    if(!list.isEmpty())
        return list.first().toStdString();
    return "";
}

bool urlValidator::testVie(std::string pURL){

    QString chaine("wget --spider --no-check-certificate "); // construction de la commande de base
    chaine.append(pURL.data()); // on y concatene l'url

    if(wget.state() != QProcess::NotRunning)
        wget.kill();

    wget.start(chaine.toStdString().data()); // on execute la commande

    wget.waitForFinished(5000);

    if(wget.exitCode()||wget.state()==QProcess::Running) { // si code de retour != 0 > erreur ou probleme
        wget.kill();
        return false;
    }

    return true;
}
