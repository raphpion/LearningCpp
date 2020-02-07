#include <iostream>
#include <string>
#include "Personnage.h"
using namespace std;

/*

Programmation Orientée-Objet 

une ' class ' est le plan d'un objet.
un objet est une instance d'une classe (matérialisation concrète)

une ' class ' est constituée de :
- variables (appelées ici attributs)
- fonctions (appelées méthodes)

code minimal :
class Nom
{
};

chaque attribut et chaque méthode d'une classe peut posséder son propre droit d'accès.
public : l'attribut ou la méthode peut être appelé depuis l'extérieur de l'objet.
private :  l'attribut ou la méthode ne peut pas être appelé depuis l'extérieur de l'objet.

une méthode qui se contente d'afficher à l'écran des informations sur l'objet est une méthode constante : 
elle ne fait que lire les attributs. En revanche, une méthode qui met à jour le niveau de vie d'un personnage
ne peut pas être constante.

*/

int main()
{
  Personnage david, goliath("Épée aiguisée", 20);

  goliath.attaquer(david);
  david.boirePotionDeVie(20);
  goliath.attaquer(david);
  david.attaquer(goliath);
  goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
  goliath.attaquer(david);

  cout << "David" << endl;
  david.afficherEtat();
  cout << endl << "Goliath" << endl;
  goliath.afficherEtat();

  return 0;
}