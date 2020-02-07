#include <iostream>
using namespace std;

/* 
TABLEAUX STATIQUES 

Comme en C:
TYPE NOM[TAILLE];

int hiscores[10]; d�clare un tableau de 5 int
double anglesTriangle[3]; d�clare un tableau de 3 double



*/

double genererMoyenne(double notes[], int taille);
void afficherNotes(double notes[], double moyenne[], int taille);

int main()
{
  int const nombreCours(5);

  double notes[nombreCours], moyenne[nombreCours];

  notes[0] = 65; // Calcul int�gral
  notes[1] = 73; // IPMSH
  notes[2] = 76; // �conomie
  notes[3] = 78; // Comptabilit�
  notes[4] = 87; // Litt�rature qu�b�coise

  moyenne[0] = 63; // Calcul int�gral
  moyenne[1] = 78; // IPMSH
  moyenne[2] = 76; // �conomie
  moyenne[3] = 72; // Comptabilit�
  moyenne[4] = 66; // Litt�rature qu�b�coise

  cout << "Releve de notes:" << endl;
  afficherNotes(notes, moyenne, nombreCours);
  cout << "Moyenne generale: " << genererMoyenne(notes, nombreCours) << endl;
}

double genererMoyenne(double notes[], int taille)
{
  double moyenneGenerale(0);
  for (int i(0); i < taille; ++i)
  {
    moyenneGenerale += notes[i]; // fonction d'addition de toutes les valeurs
  }
  moyenneGenerale /= taille;

  return moyenneGenerale;
}

void afficherNotes(double notes[], double moyenne[], int taille)
{
  for (int i(0); i < taille; i++)
  {
    cout << "Cours " << i << " : " << notes[i] << "%" << endl;
    cout << "Moyenne du groupe : " << moyenne[i] << "%" << endl;
  }
}