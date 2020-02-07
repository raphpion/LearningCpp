#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int n, int d) : m_numerator(n)
{
  if (d == 0)
    throw "Le denominateur doit etre different de 0."; // TODO(fpion): à traduire
  m_denominator = d;
}

int Fraction::getNumerator() const
{
  return m_numerator;
}

int Fraction::getDenominator() const
{
  return m_denominator;
}

void Fraction::show(ostream& stream) const
{
  if (m_denominator == 1)
  {
    stream << m_numerator;
  }
  else
  {
    stream << m_numerator << '/' << m_denominator;
  }
}

int hcd(int a, int b) // Highest Common Denominator
{
  while (b != 0)
  {
    const int t = b;
    b = a % b;
    a = t;
  }
  return a;
}

Fraction operator+(Fraction const& a, Fraction const& b)  // ADDITION
{
  if (a.getDenominator() != b.getDenominator())
  {
    int result_d(a.getDenominator() * b.getDenominator());
    int result_n((a.getNumerator() * b.getDenominator()) + (b.getNumerator() * a.getDenominator()));
    int common = hcd(result_d, result_n);
    result_d /= common;
    result_n /= common;
    return Fraction(result_n, result_d);
  }
  else
  {
    int result_n(a.getNumerator() + b.getNumerator());
    int result_d(a.getDenominator());
    int common = hcd(result_d, result_n);
    result_d /= common;
    result_n /= common;
    return Fraction(result_n, result_d);
  }

}

Fraction operator-(Fraction const& a, Fraction const& b)  // SOUSTRACTION
{
  if (a.getDenominator() != b.getDenominator())
  {
    int result_d(a.getDenominator() * b.getDenominator());
    int result_n((a.getNumerator() * b.getDenominator()) - (b.getNumerator() * a.getDenominator()));
    int common = hcd(result_d, result_n);
    result_d /= common;
    result_n /= common;
    return Fraction(result_n, result_d);
  }
  else
  {
    int result_n(a.getNumerator() - b.getNumerator());
    int result_d(a.getDenominator());
    int common = hcd(result_d, result_n);
    result_d /= common;
    result_n /= common;
    return Fraction(result_n, result_d);
  }

}

Fraction operator*(Fraction const& a, Fraction const& b) // MULTIPLICATION
{
  int result_n(a.getNumerator() * b.getNumerator());
  int result_d(a.getDenominator() * b.getDenominator());
  int common(hcd(result_n, result_d));
  result_d /= common;
  result_n /= common;
  return Fraction(result_n, result_d);
}

Fraction operator/(Fraction const& a, Fraction const& b) // DIVISION
{
  int result_n(a.getNumerator() * b.getDenominator());
  int result_d(a.getDenominator() * b.getNumerator());
  int common(hcd(result_n, result_d));
  result_d /= common;
  result_n /= common;
  return Fraction(result_n, result_d);
}

Fraction operator<(Fraction const& a, Fraction const& b) // EST INFERIEUR A
{
  double aResult(a.getNumerator() / a.getDenominator()), bResult(b.getNumerator() / b.getDenominator());
  return(aResult < bResult);
}

Fraction operator>(Fraction const& a, Fraction const& b) // EST SUPERIEUR A
{
  double aResult(a.getNumerator() / a.getDenominator()), bResult(b.getNumerator() / b.getDenominator());
  return(aResult > bResult);
}

Fraction operator==(Fraction const& a, Fraction const& b) // EST EGAL A
{
  double aResult(a.getNumerator() / a.getDenominator()), bResult(b.getNumerator() / b.getDenominator());
  return(aResult == bResult);
}

ostream& operator<<(ostream& stream, Fraction const& fraction)
{
  fraction.show(stream);
  return stream;
}