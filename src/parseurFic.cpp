
#include "parseurFic.h"
#include <iostream>
#include <fstream>

using namespace std;

void parseurFic::test()
{
	cout << "Test" << endl;
}

void parseurFic::lireFic(string nomFic)
{

	ifstream fluxFic; // ouverture du fichier nomFic en lecture

	fluxFic.open(nomFic.c_str());

	if(fluxFic)
	{
      string ligne;

      while ( getline(fluxFic, ligne) ) {
         cout << ligne << endl;
         // ---- 
      }
      
      fluxFic.close();
	}
	else
		cout << "ERREUR: Impossible d'ouvrir le fichier : " << nomFic << " en lecture." << endl;
}
