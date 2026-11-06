#include <iostream>
#include "Produit.h"

using namespace std;

int main() {

    // Creation des produits
    Produit p1("Ordinateur", 5000);
    Produit p2("Telephone", 3000);
    Produit p3("Clavier", 200);

    // Affichage avec TVA initiale de 20%
    cout << "===== TVA INITIALE : 20% =====" << endl;

    p1.afficher();
    cout << endl;

    p2.afficher();
    cout << endl;

    p3.afficher();

    // Modification de la TVA
    Produit::modifierTVA(10);

    // Affichage avec TVA de 10%
    cout << "\n===== NOUVELLE TVA : 10% =====" << endl;

    p1.afficher();
    cout << endl;

    p2.afficher();
    cout << endl;

    p3.afficher();

    return 0;
}
