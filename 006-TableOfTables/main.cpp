#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* TABLEAUX MULTIDIMENSIONNELS

ils sont en fait des tableaux de tableaux. chaque ligne représente une axe.

type nomTableau[X][Y]

pour accéder à la case (3,4) : tableau[3][4];

On peut aussi les utiliser en tableaux dynamiques avec vector

*/

int main()
{
  string firstName("Raphael"), lastName("Pion");
  string fullName;
  fullName += firstName;
  fullName += " ";
  fullName += lastName;

  cout << fullName << endl;

  return 0;
}