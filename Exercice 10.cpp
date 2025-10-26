/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**=== OPERATIONS SUR LES NOMBRES COMPLEXES ===

Premier nombre complexe :
Entrez la partie reelle : 3
Entrez la partie imaginaire : 2

Deuxieme nombre complexe :
Entrez la partie reelle : 1
Entrez la partie imaginaire : -4

===== MENU =====
1. Addition
2. Soustraction
3. Multiplication
4. Division
5. Tester l'egalite
0. Quitter
Votre choix : 3

Résultat de la multiplication : 11 - 10i
*****************************************************************************/
#include <iostream>
using namespace std;

class Complexe {
private:
    float re;  // Partie réelle
    float im;  // Partie imaginaire

public:
    // 🔹 Constructeur par défaut et avec paramètres
    Complexe(float r = 0.0, float i = 0.0) {
        re = r;
        im = i;
    }

    // 🔹 Méthode pour lire un nombre complexe
    void saisir() {
        cout << "Entrez la partie reelle : ";
        cin >> re;
        cout << "Entrez la partie imaginaire : ";
        cin >> im;
    }

    // 🔹 Affichage
    void afficher() const {
        if (im >= 0)
            cout << re << " + " << im << "i";
        else
            cout << re << " - " << -im << "i";
    }

    // 🔹 Addition
    Complexe addition(const Complexe &c) const {
        return Complexe(re + c.re, im + c.im);
    }

    // 🔹 Soustraction
    Complexe soustraction(const Complexe &c) const {
        return Complexe(re - c.re, im - c.im);
    }

    // 🔹 Multiplication
    Complexe multiplication(const Complexe &c) const {
        return Complexe(re * c.re - im * c.im, re * c.im + im * c.re);
    }

    // 🔹 Division
    Complexe division(const Complexe &c) const {
        float denominateur = c.re * c.re + c.im * c.im;
        if (denominateur == 0) {
            cout << "\nErreur : division par zéro !" << endl;
            return Complexe(0, 0);
        }
        float r = (re * c.re + im * c.im) / denominateur;
        float i = (im * c.re - re * c.im) / denominateur;
        return Complexe(r, i);
    }

    // 🔹 Égalité
    bool egal(const Complexe &c) const {
        return (re == c.re && im == c.im);
    }
};

// 🔹 Programme principal
int main() {
    Complexe c1, c2, resultat;
    int choix;

    cout << "=== OPERATIONS SUR LES NOMBRES COMPLEXES ===\n";
    cout << "\nPremier nombre complexe :\n";
    c1.saisir();

    cout << "\nDeuxieme nombre complexe :\n";
    c2.saisir();

    do {
        cout << "\n===== MENU =====";
        cout << "\n1. Addition";
        cout << "\n2. Soustraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Tester l'egalite";
        cout << "\n0. Quitter";
        cout << "\nVotre choix : ";
        cin >> choix;

        switch (choix) {
        case 1:
            resultat = c1.addition(c2);
            cout << "\nRésultat de l’addition : ";
            resultat.afficher();
            cout << endl;
            break;
        case 2:
            resultat = c1.soustraction(c2);
            cout << "\nRésultat de la soustraction : ";
            resultat.afficher();
            cout << endl;
            break;
        case 3:
            resultat = c1.multiplication(c2);
            cout << "\nRésultat de la multiplication : ";
            resultat.afficher();
            cout << endl;
            break;
        case 4:
            resultat = c1.division(c2);
            cout << "\nRésultat de la division : ";
            resultat.afficher();
            cout << endl;
            break;
        case 5:
            if (c1.egal(c2))
                cout << "\nLes deux nombres complexes sont egaux.\n";
            else
                cout << "\nLes deux nombres complexes sont differents.\n";
            break;
        case 0:
            cout << "\nFin du programme.\n";
            break;
        default:
            cout << "\nChoix invalide, veuillez réessayer.\n";
        }

    } while (choix != 0);

    return 0;
}




  


