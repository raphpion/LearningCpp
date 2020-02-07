#include <iostream>
#include <string>
#include "Personnage.h"
using namespace std;

/*

Programmation Orient�e-Objet 

une ' class ' est le plan d'un objet.
un objet est une instance d'une classe (mat�rialisation concr�te)

une ' class ' est constitu�e de :
- variables (appel�es ici attributs)
- fonctions (appel�es m�thodes)

code minimal :
class Nom
{
};

chaque attribut et chaque m�thode d'une classe peut poss�der son propre droit d'acc�s.
public : l'attribut ou la m�thode peut �tre appel� depuis l'ext�rieur de l'objet.
private :  l'attribut ou la m�thode ne peut pas �tre appel� depuis l'ext�rieur de l'objet.

une m�thode qui se contente d'afficher � l'�cran des informations sur l'objet est une m�thode constante : 
elle ne fait que lire les attributs. En revanche, une m�thode qui met � jour le niveau de vie d'un personnage
ne peut pas �tre constante.

*/

int main()
{
  Personnage david, goliath("�p�e aiguis�e", 20);

  goliath.attaquer(david);
  david.boirePotionDeVie(20);
  goliath.attaquer(david);
  david.attaquer(goliath);
  goliath.changerArme("Double hache tranchante v�n�neuse de la mort", 40);
  goliath.attaquer(david);

  cout << "David" << endl;
  david.afficherEtat();
  cout << endl << "Goliath" << endl;
  goliath.afficherEtat();

  return 0;
}