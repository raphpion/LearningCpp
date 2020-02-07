#pragma once
#include <iostream>
#include <string>
#include "Arme.h"

class Personnage
{
public:
  Personnage(); // constructeur
  Personnage(std::string nomArme, int degatsArme);
  void afficherEtat() const;
  void recevoirDegats(int nbDegats);
  void attaquer(Personnage& cible);
  void boirePotionDeVie(int quantitePotion);
  void changerArme(std::string nomNouvelleArkme, int degatsNouvelleArme);
  bool estVivant() const;

private:
  int m_vie;
  int m_mana;
  Arme m_arme;
};