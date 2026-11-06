#include <iostream>
#include "Utilisateur.h"

using namespace std;

// Initialisation du compteur
int Utilisateur::nbUtilisateursConnectes = 0;

// Constructeur
Utilisateur::Utilisateur(string n, string r) {
    nom = n;
    role = r;

    nbUtilisateursConnectes++;

    cout << nom << " est connecte." << endl;
}

// Destructeur
Utilisateur::~Utilisateur() {
    nbUtilisateursConnectes--;

    cout << nom << " est deconnecte." << endl;
}

// Methode statique
int Utilisateur::getNbUtilisateursConnectes() {
    return nbUtilisateursConnectes;
}

// Afficher les informations
void Utilisateur::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Role : " << role << endl;
}
