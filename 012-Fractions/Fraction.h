#pragma once
#include <iostream>

class Fraction
{
public:
  Fraction(int n = 0, int d = 1);
  int getNumerator() const;
  int getDenominator() const;
  void show(ostream& stream) const;
private:
  int m_numerator;
  int m_denominator;
};

int hcd(int a, int b); // Highest Common Denominator

// Arithmetic operators
Fraction operator+(Fraction const& a, Fraction const& b);
Fraction operator-(Fraction const& a, Fraction const& b);
Fraction operator*(Fraction const& a, Fraction const& b);
Fraction operator/(Fraction const& a, Fraction const& b);
Fraction operator<(Fraction const& a, Fraction const& b);
Fraction operator>(Fraction const& a, Fraction const& b);
Fraction operator==(Fraction const& a, Fraction const& b);

// Stream operators
ostream& operator<<(ostream& stream, Fraction const& fraction);
