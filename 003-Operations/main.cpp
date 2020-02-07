#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
  int userAge(0); 
  double a(0), b(0);
  string userName("No Name");

  cout << "What is your name?" << endl;
  getline(cin, userName); /* variante de cin permettant de ne pas s'arr�ter aux espaces..
                          NOTEZ BIEN!! si vous utilisez un cin avant d'utiliser un getline(), vous devez
                          placer un cin.ignore() avant le getline() !!*/

  cout << "How old are you?" << endl;
  cin >> userAge;

  cout << "Your name is " << userName << " and you are " << userAge << " years old." << endl << endl;

  cout << "Enter a value for 'a': ";
  cin >> a;
  cout << "Enter a value for 'b': ";
  cin >> b;

  double const result(a + b);

  cout << a << " + " << b << " = " << result << "." << endl;

  /* RACCOURCIS
  
  En C, pour incr�menter/d�cr�menter la variable x rapidement, on pouvait �crire x++ ou x--.
  En C++, la syntaxe  fonctionne aussi mais on peut aussi mettre les signes avant la variable : ++x ou --x.

  On peut aussi utiliser += valeur; -= valeur; *= valeur, /= valeur pour faire des op�rations rapidement. */

  return 0;
}