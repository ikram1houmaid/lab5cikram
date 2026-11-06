#include <iostream>
#include "Utilisateur.h"

using namespace std;

int main() {

    cout << "Nombre initial : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Connexion du premier utilisateur
    Utilisateur u1("Ikram", "admin");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Connexion du deuxieme utilisateur
    Utilisateur u2("Sara", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Connexion du troisieme utilisateur
    Utilisateur u3("Amine", "visiteur");

    cout << "Utilisateurs connectes : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    // Affichage des informations
    cout << "\n===== INFORMATIONS =====" << endl;
    u1.afficher();
    u2.afficher();
    u3.afficher();

    // Deconnexion d'un utilisateur
    cout << "\n===== DECONNEXION =====" << endl;

    {
        Utilisateur u4("Youssef", "admin");

        cout << "Utilisateurs connectes : "
             << Utilisateur::getNbUtilisateursConnectes() << endl;

    } // u4 est detruit automatiquement ici

    cout << "Apres deconnexion de Youssef : "
         << Utilisateur::getNbUtilisateursConnectes() << endl;

    return 0;
}
