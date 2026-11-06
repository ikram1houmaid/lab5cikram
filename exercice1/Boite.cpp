#include <iostream>
#include "Boite.h"

using namespace std;

// Initialisation de l'attribut statique
int Boite::nbBoites = 0;

// Constructeur
Boite::Boite(double l, double lar, double h) {
    longueur = l;
    largeur = lar;
    hauteur = h;

    nbBoites++;

    cout << "Constructeur appele !" << endl;
}

// Destructeur
Boite::~Boite() {
    nbBoites--;

    cout << "Destructeur appele !" << endl;
}

// Methode statique
int Boite::getNombreBoites() {
    return nbBoites;
}

// Afficher les informations
void Boite::afficher() {
    cout << "Longueur : " << longueur << endl;
    cout << "Largeur : " << largeur << endl;
    cout << "Hauteur : " << hauteur << endl;
}
