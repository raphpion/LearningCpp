#include "Personnage.h"
using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100){}
Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100){}

void Personnage::recevoirDegats(int nbDegats)
{
  m_vie -= nbDegats;
  // On enlève le nombre de dégâts reçus

  if (m_vie < 0)
  {
    m_vie = 0;
  }
}

void Personnage::afficherEtat() const
{
  cout << "Vie : " << m_vie << endl;
  cout << "Mana : " << m_mana << endl;
  m_arme.afficher();
}

void Personnage::attaquer(Personnage& cible)
{
  cible.recevoirDegats(m_arme.getDegats());
  // on inflige à la cible les dégâts que cause notre arme
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
  m_vie += quantitePotion;

  if (m_vie > 100)
  {
    m_vie = 100;
  }
}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
  m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const
{
  return m_vie > 0;
}