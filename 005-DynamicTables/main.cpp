#include <iostream>
#include <string>
#include <vector> // pour pouvoir utiliser les tableaux dynamiques !!
using namespace std;

/* TABLEAUX DYNAMIQUES

vector<type> nom(taille);

lorsqu'on d�clare des fonctions, il faut �crire:

type fonction(vector<type> const& variable)

cela r�duit l'usage de la m�moire en utilisant les pointeurs
par contre, cela emp�che le tableau d'�tre modifi� par la fonction

*/

int main()
{
  vector<int> tableau(5, 3); // cr�e un tableau de 5 entiers valant tous 3
  tableau.push_back(8); // on ajoute une 4e case au tableau qui contient la valeur 8
  tableau.pop_back(); // on supprime la derni�re case du tableau
  int tailleTableau(tableau.size());
  return 0;
}