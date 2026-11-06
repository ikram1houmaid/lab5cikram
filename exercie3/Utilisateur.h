#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <string>
using namespace std;

class Utilisateur {
private:
    string nom;
    string role;

    static int nbUtilisateursConnectes;

public:
    Utilisateur(string n, string r);
    ~Utilisateur();

    static int getNbUtilisateursConnectes();

    void afficher();
};

#endif
