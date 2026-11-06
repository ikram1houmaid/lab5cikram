#ifndef BOITE_H
#define BOITE_H

class Boite {
private:
    double longueur;
    double largeur;
    double hauteur;

    static int nbBoites;

public:
    Boite(double l, double lar, double h);
    ~Boite();

    static int getNombreBoites();

    void afficher();
};

#endif
