#include <iostream>
#include <string>
using namespace std;
/*
En C++, la syntaxe des variables diffère de celle en C.
En C, la forme suivante : type nom = valeur;
Elle fonctionne toujours en C++, par contre on utilise celle qui est native au C++: type nom ( valeur );
*/

int main()
{
  string username("Raphael Pion");
  int age(23);

  cout << "Your name is " << username << " and you are " << age << " years old." << endl;
  return 0;
}