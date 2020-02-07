#include <iostream>
#include <string>
#include <vector> // pour pouvoir utiliser les tableaux dynamiques !!
using namespace std;

/* TABLEAUX DYNAMIQUES

vector<type> nom(taille);

lorsqu'on déclare des fonctions, il faut écrire:

type fonction(vector<type> const& variable)

cela réduit l'usage de la mémoire en utilisant les pointeurs
par contre, cela empêche le tableau d'être modifié par la fonction

*/

int main()
{
  vector<int> tableau(5, 3); // crée un tableau de 5 entiers valant tous 3
  tableau.push_back(8); // on ajoute une 4e case au tableau qui contient la valeur 8
  tableau.pop_back(); // on supprime la dernière case du tableau
  int tailleTableau(tableau.size());
  return 0;
}