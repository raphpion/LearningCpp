#include "Duree.h"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), 
m_minutes(minutes), m_secondes(secondes){}

bool Duree::estEgal(Duree const& b) const
{
  return (m_heures == b.m_heures && m_minutes == b.m_minutes &&
    m_secondes == b.m_secondes); //Teste si a.m_heure == b.m_heure etc.
}

bool Duree::estPlusPetitQue(Duree const& b) const
{
  if (m_heures < b.m_heures)
    return true;
  else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
    return true;
  else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
    return true;
  else
    return false;
}

bool operator==(Duree const& a, Duree const& b)
{
  return a.estEgal(b);
}

bool operator!=(Duree const& a, Duree const& b)
{
  return !(a==b);
}

bool operator<(Duree const& a, Duree const& b)
{
  return a.estPlusPetitQue(b);
}