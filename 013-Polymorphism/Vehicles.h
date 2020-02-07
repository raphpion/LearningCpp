#pragma once
#include <string>

class Vehicle
{
public:
  Vehicle();
  Vehicle(int price);
  virtual void show() const;
  virtual ~Vehicle();


protected:
  int m_price;
};

class Car : public Vehicle // a Car is a Vehicle
{
public:
  Car();
  Car(int price, int doors);
  virtual void show() const;
  virtual ~Car();

private:
  int m_doors;
};

class Bike : public Vehicle // a Bike is a Vehicle
{
public:
  Bike();
  Bike(int price, int engineCC);
  virtual void show() const;
  virtual ~Bike();

private:
  int m_engineCC;
};

void present(Vehicle const& v);