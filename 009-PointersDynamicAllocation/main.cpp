#include <iostream>
using namespace std;

/* TR�S IMPORTANT : toujours d�clarer les pointeurs avec une valeur � 0. 

afficher l'adresse d'une variable : &variable
afficher le contenu d'une variable � l'aide d'un pointeur : *pointeur 
pour le reste, m�me syntaxe qu'en C

*/

int main()
{
  int* pointeur(0);
  pointeur = new int; // new demande une case � l'ordinateur et renvoie un pointeur pointant vers cette case

  *pointeur = 2; // on acc�de � la case m�moire pour en modifier la valeur
  cout << *pointeur << endl; // on affiche la valeur contenue dans la case

  delete pointeur; // on lib�re la case m�moire
  pointeur = 0; // on indique que le pointeur ne pointe plus vers rien

  return 0;
}