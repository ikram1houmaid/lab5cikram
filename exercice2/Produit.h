#ifndef PRODUIT_H
#define PRODUIT_H

#include <string>
using namespace std;

class Produit {
private:
    string nom;
    float prixHT;

    static float tauxTVA;

public:
    Produit(string n, float prix);

    float getPrixTTC();

    static void modifierTVA(float nouveauTaux);

    void afficher();
};

#endif
