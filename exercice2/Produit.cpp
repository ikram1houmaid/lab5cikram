#include <iostream>
#include "Produit.h"

using namespace std;

// Initialisation du taux de TVA à 20%
float Produit::tauxTVA = 20.0;

Produit::Produit(string n, float prix) {
    nom = n;
    prixHT = prix;
}

// Calcul du prix TTC
float Produit::getPrixTTC() {
    return prixHT * (1 + tauxTVA / 100);
}

// Modification du taux de TVA
void Produit::modifierTVA(float nouveauTaux) {
    tauxTVA = nouveauTaux;
}

// Affichage des informations
void Produit::afficher() {
    cout << "Nom : " << nom << endl;
    cout << "Prix HT : " << prixHT << " DH" << endl;
    cout << "Prix TTC : " << getPrixTTC() << " DH" << endl;
}
