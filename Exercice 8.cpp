/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Voiture {
private:
    string marque;
    string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() {
        marque = "Inconnue";
        modele = "Inconnu";
        annee = 0;
        kilometrage = 0.0f;
        vitesse = 0.0f;
        cout << "Une voiture par défaut a été créée." << endl;
    }

    // Constructeur avec paramètres
    Voiture(string m, string mod, int a, float km, float v) {
        marque = m;
        modele = mod;
        annee = a;
        kilometrage = km;
        vitesse = v;
        cout << "Une voiture " << marque << " " << modele << " a été créée." << endl;
    }

    void accelerer(float valeur) {
        if (valeur > 0) {
            vitesse += valeur;
            cout << "La voiture accélère de " << valeur << " km/h. Vitesse actuelle : " << vitesse << " km/h." << endl;
        }
    }

    void freiner(float valeur) {
        if (valeur > 0) {
            vitesse -= valeur;
            if (vitesse < 0)
                vitesse = 0;
            cout << "La voiture freine de " << valeur << " km/h. Vitesse actuelle : " << vitesse << " km/h." << endl;
        }
    }

    void afficherInfo() {
        cout << "\n=== Informations sur la voiture ===" << endl;
        cout << "Marque       : " << marque << endl;
        cout << "Modèle       : " << modele << endl;
        cout << "Année        : " << annee << endl;
        cout << "Kilométrage  : " << kilometrage << " km" << endl;
        cout << "Vitesse      : " << vitesse << " km/h" << endl;
       
    }

    void avancer(float distance) {
        if (distance > 0) {
            kilometrage += distance;
            cout << "La voiture avance de " << distance << " km. Nouveau kilométrage : " << kilometrage << " km." << endl;
        }
    }

    ~Voiture() {
        cout << "La voiture " << marque << " " << modele << " est détruite." << endl;
    }
};

int main() {
    // Création d’une voiture par défaut
    Voiture v1;
    v1.afficherInfo();

    // Création d’une voiture personnalisée (autre exemple)
    Voiture v2("Peugeot", "208", 2020, 32000.0f, 0.0f);
    v2.afficherInfo();

    // Tests des méthodes
    v2.accelerer(60);
    v2.avancer(150);
    v2.freiner(30);
    v2.freiner(40);
    v2.afficherInfo();

    return 0;
}
