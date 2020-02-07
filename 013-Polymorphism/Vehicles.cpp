#include <iostream>
#include "Vehicles.h"
using namespace std;

Vehicle::Vehicle() : m_price(0){}
Vehicle::Vehicle(int price = 0) : m_price(price) {}

void Vehicle::show() const
{
  cout << "A vehicle costing $" << m_price << "." << endl;
}

Vehicle::~Vehicle(){}

Car::Car():Vehicle(m_price), m_doors(4){}
Car::Car(int price = 0, int doors = 4) : Vehicle(price), m_doors(doors) {}

void Car::show() const
{
  cout << "A " << m_doors << "-door car costing $" << m_price << "." << endl;
}

Car::~Car(){}

Bike::Bike() :Vehicle(m_price), m_engineCC(100) {}
Bike::Bike(int price = 0, int engineCC = 100) : Vehicle(price), m_engineCC(engineCC) {}

void Bike::show() const
{
  cout << "A " << m_engineCC << "CC motorbike costing $" << m_price << "." << endl;
}

void present(Vehicle const& v)
{
  v.show();
}

Bike::~Bike(){}