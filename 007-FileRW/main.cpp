/* MODES D'OUVERTURE

- �criture -

ofstream monFlux(nomFichier.c_str());     
* si le fichier existe, il est supprim� et remplac�.
* s'il n'existe pas, il est cr��.
* si on veut �crire � la fin d'un fichier, il faut rajouter l'argument ios::app � la fin.

- Lecture -

ifstream monFlux(nomFichier.c_str());
getline(monFlux, ligne);   permet de lire le fichier par ligne

monFlux >> nombre; Lit un nombre � virgule depuis le fichier
monFlux >> mot;    Lit un mot depuis le fichier

monFlux.get(a); permet de lire par caract�re
Ce code lit une seule lettre et la stocke dans la variablea.


*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ifstream fichier("file.txt");

  if (fichier)
  {
    //L'ouverture s'est bien pass�e, on peut donc lire

    string ligne; //Une variable pour stocker les lignes lues

    while (getline(fichier, ligne)) //Tant qu'on n'est pas � la fin, on lit
    {
      cout << ligne << endl;
      //Et on l'affiche dans la console
      //Ou alors on fait quelque chose avec cette ligne
      //� vous de voir
    }
  }
  else
  {
    cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
  }

  return 0;
}