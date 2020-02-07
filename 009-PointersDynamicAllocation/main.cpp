#include <iostream>
using namespace std;

/* TRÈS IMPORTANT : toujours déclarer les pointeurs avec une valeur à 0. 

afficher l'adresse d'une variable : &variable
afficher le contenu d'une variable à l'aide d'un pointeur : *pointeur 
pour le reste, même syntaxe qu'en C

*/

int main()
{
  int* pointeur(0);
  pointeur = new int; // new demande une case à l'ordinateur et renvoie un pointeur pointant vers cette case

  *pointeur = 2; // on accède à la case mémoire pour en modifier la valeur
  cout << *pointeur << endl; // on affiche la valeur contenue dans la case

  delete pointeur; // on libère la case mémoire
  pointeur = 0; // on indique que le pointeur ne pointe plus vers rien

  return 0;
}