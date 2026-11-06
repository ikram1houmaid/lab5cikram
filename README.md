# TP : Attributs et Méthodes Statiques en C++

## Présentation générale

Ce TP a pour objectif de comprendre et de mettre en pratique les notions d'attributs et de méthodes statiques en programmation orientée objet avec le langage C++.

À travers trois exercices, nous allons apprendre à partager des données entre plusieurs objets d'une même classe, à modifier une valeur commune et à gérer le nombre d'objets ou d'utilisateurs actifs.

## Objectifs pédagogiques

- Comprendre le fonctionnement du mot-clé `static` en C++.
- Déclarer et initialiser des attributs statiques.
- Utiliser des méthodes statiques pour accéder aux données partagées.
- Comprendre le rôle des constructeurs et des destructeurs.
- Gérer un compteur commun à plusieurs objets.
- Appliquer les principes de la programmation orientée objet.

---

## Exercice 1 : Compteur d'objets

### Objectif

Utiliser un attribut statique pour compter le nombre d'objets créés à partir d'une classe.

### Description

Créer une classe `Boite` représentant une boîte avec les attributs suivants :

- `longueur` : longueur de la boîte.
- `largeur` : largeur de la boîte.
- `hauteur` : hauteur de la boîte.
- `nbBoites` : attribut statique permettant de compter les objets `Boite` existants.

### Fonctionnalités réalisées

- Déclaration d'un attribut statique `nbBoites`.
- Initialisation du compteur à zéro.
- Création d'un constructeur qui incrémente le compteur à chaque création d'une boîte.
- Création d'un destructeur qui décrémente le compteur à chaque destruction d'un objet.
- Création de la méthode statique `getNombreBoites()` pour consulter le nombre de boîtes.
- Création de plusieurs objets dans la fonction `main()`.
- Affichage du nombre de boîtes existantes.

### Résultat attendu

Le programme affiche le nombre initial de boîtes, puis le nombre total après la création de plusieurs objets.

Lorsque les objets sont détruits, le compteur diminue automatiquement.

### Notions utilisées

- Attribut statique (`static`).
- Méthode statique.
- Constructeur.
- Destructeur.
- Gestion du cycle de vie des objets.

---

## Exercice 2 : Taux de TVA partagé

### Objectif

Utiliser un attribut statique partagé pour appliquer un taux de TVA commun à plusieurs produits.

### Description

Créer une classe `Produit` contenant :

- `nom` : nom du produit.
- `prixHT` : prix du produit hors taxe.
- `tauxTVA` : attribut statique représentant le taux de TVA commun à tous les produits.

Le taux de TVA initial est fixé à 20 %.

### Fonctionnalités réalisées

- Déclaration de l'attribut statique `tauxTVA`.
- Initialisation du taux de TVA à 20 %.
- Création de la méthode `getPrixTTC()` pour calculer le prix toutes taxes comprises.
- Utilisation de l'attribut statique pour calculer le prix TTC de chaque produit.
- Création de la méthode statique `modifierTVA(float nouveauTaux)` pour modifier le taux de TVA.
- Création de plusieurs produits dans la fonction `main()`.
- Affichage des prix TTC avant et après la modification du taux.

### Formule de calcul

**Prix TTC = Prix HT × (1 + TVA / 100)**

### Résultat attendu

Le programme affiche les prix TTC de plusieurs produits avec le taux initial de TVA de 20 %.

Ensuite, le taux est modifié, par exemple à 10 %, et les nouveaux prix TTC sont affichés automatiquement pour tous les produits.

### Notions utilisées

- Attribut statique partagé.
- Méthode statique.
- Modification d'une donnée commune.
- Calcul du prix TTC.
- Réutilisation d'une valeur partagée entre plusieurs objets.

---

## Exercice 3 : Gestion des sessions utilisateurs

### Objectif

Mettre en œuvre des attributs et des méthodes statiques pour gérer le nombre d'utilisateurs connectés à un système.

### Description

Créer une classe `Utilisateur` contenant :

- `nom` : nom de l'utilisateur.
- `role` : rôle de l'utilisateur (admin ou visiteur).
- `nbUtilisateursConnectes` : attribut statique privé qui représente le nombre d'utilisateurs actuellement connectés.

### Fonctionnalités réalisées

- Déclaration de l'attribut statique privé `nbUtilisateursConnectes`.
- Initialisation du compteur à zéro.
- Création d'un constructeur qui incrémente le compteur lors de la connexion d'un utilisateur.
- Création d'un destructeur qui décrémente le compteur lors de la déconnexion.
- Création de la méthode statique `getNbUtilisateursConnectes()` pour consulter le nombre d'utilisateurs connectés.
- Simulation de plusieurs connexions dans la fonction `main()`.
- Affichage du nombre d'utilisateurs connectés après chaque connexion.
- Simulation de déconnexions grâce à la destruction automatique des objets.

### Résultat attendu

Le programme affiche le nombre d'utilisateurs connectés après chaque nouvelle connexion.

Lorsqu'un objet `Utilisateur` est détruit, le compteur diminue automatiquement pour représenter la déconnexion de cet utilisateur.

L'accès au compteur est effectué uniquement à travers la méthode statique `getNbUtilisateursConnectes()`.

### Notions utilisées

- Attribut statique privé.
- Méthode statique.
- Encapsulation.
- Constructeur et destructeur.
- Gestion des connexions et déconnexions.
- Destruction automatique des objets.

---

## Technologies et outils utilisés

- **Langage de programmation :** C++
- **IDE :** Eclipse
- **Paradigme :** Programmation orientée objet (POO).
- **Concepts étudiés :** Attributs statiques, méthodes statiques, encapsulation, constructeurs et destructeurs.

## Conclusion générale

Ce TP nous a permis de comprendre et de pratiquer l'utilisation des attributs et des méthodes statiques en C++ à travers trois situations différentes.

Dans le premier exercice, nous avons utilisé un compteur statique pour suivre le nombre de boîtes existantes.

Dans le deuxième exercice, nous avons utilisé un taux de TVA partagé afin d'appliquer une même valeur à plusieurs produits et de modifier ce taux pour tous les objets.

Dans le troisième exercice, nous avons mis en place un système de gestion des sessions utilisateurs permettant de suivre automatiquement les connexions et les déconnexions.

Ces trois exercices ont permis de renforcer notre compréhension du mot-clé `static`, de l'encapsulation et du rôle des constructeurs et destructeurs dans la programmation orientée objet en C++.
<img width="960" height="540" alt="image" src="https://github.com/user-attachments/assets/19f9cb35-2145-4eb4-9ed1-1f9d3b9c905d" />
