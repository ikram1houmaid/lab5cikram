#include <iostream>
#include "Boite.h"

using namespace std;

int main() {

    cout << "Nombre initial : "
         << Boite::getNombreBoites() << endl;

    Boite b1(10, 5, 3);
    Boite b2(8, 4, 2);
    Boite b3(6, 3, 2);

    cout << "\nNombre de boites creees : "
         << Boite::getNombreBoites() << endl;

    cout << "\nInformations de la boite 1 :" << endl;
    b1.afficher();

    cout << "\nFin du programme..." << endl;

    return 0;
}
