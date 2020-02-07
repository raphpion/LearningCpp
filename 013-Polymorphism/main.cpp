#include <iostream>
#include "Vehicles.h"
#include <vector>
using namespace std;

int main()
{
  vector<Vehicle*> garage;

  garage.push_back(new Car(15000, 5));
  garage.push_back(new Car(12000, 3));
  garage.push_back(new Bike(2000, 500));

  garage[0]->show();
  garage[1]->show();
  garage[2]->show();

  for (int i(0); i < garage.size(); ++i)
  {
    delete garage[i];
    garage[i] = 0;
  }

  return 0;
}