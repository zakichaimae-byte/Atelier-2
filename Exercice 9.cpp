/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> // pour sqrt()
using namespace std;

class Vecteur3D {
private:
    float x, y, z;

public:
    // 🔹 Constructeur avec valeurs par défaut
    Vecteur3D(float a = 0, float b = 0, float c = 0) {
        x = a;
        y = b;
        z = c;
    }

    // 🔹 Fonction d’affichage
    void afficher() const {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }

    // 🔹 Somme de deux vecteurs — résultat renvoyé par valeur
    Vecteur3D somme(const Vecteur3D &v) const {
        return Vecteur3D(x + v.x, y + v.y, z + v.z);
    }

    // 🔹 Produit scalaire de deux vecteurs
    float produitScalaire(const Vecteur3D &v) const {
        return (x * v.x + y * v.y + z * v.z);
    }

    // 🔹 Vérifie si deux vecteurs coïncident (mêmes composantes)
    bool coincide(const Vecteur3D &v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    // 🔹 Norme du vecteur
    float norme() const {
        return sqrt(x * x + y * y + z * z);
    }

    // 🔹 Version 1 : normax — renvoie par **valeur**
    static Vecteur3D normaxValeur(const Vecteur3D &v1, const Vecteur3D &v2) {
        if (v1.norme() >= v2.norme())
            return v1;
        else
            return v2;
    }

    // 🔹 Version 2 : normax — renvoie par **adresse**
    static Vecteur3D* normaxAdresse(Vecteur3D *v1, Vecteur3D *v2) {
        if (v1->norme() >= v2->norme())
            return v1;
        else
            return v2;
    }

    // 🔹 Version 3 : normax — renvoie par **référence**
    static Vecteur3D& normaxReference(Vecteur3D &v1, Vecteur3D &v2) {
        if (v1.norme() >= v2.norme())
            return v1;
        else
            return v2;
    }
};

// 🔹 Programme principal pour tester la classe
int main() {
    Vecteur3D v1(3, 4, 0);
    Vecteur3D v2(1, 2, 2);

    cout << "Vecteur 1 : "; v1.afficher(); cout << endl;
    cout << "Vecteur 2 : "; v2.afficher(); cout << endl;

    // Somme
    Vecteur3D v3 = v1.somme(v2);
    cout << "\nSomme : "; v3.afficher(); cout << endl;

    // Produit scalaire
    cout << "Produit scalaire : " << v1.produitScalaire(v2) << endl;

    // Coïncidence
    cout << "Les deux vecteurs " 
         << (v1.coincide(v2) ? "coïncident." : "ne coïncident pas.") << endl;

    // Normes
    cout << "Norme de v1 : " << v1.norme() << endl;
    cout << "Norme de v2 : " << v2.norme() << endl;

    // Normax par valeur
    cout << "\n(normax par valeur) Vecteur avec plus grande norme : ";
    Vecteur3D vMax = Vecteur3D::normaxValeur(v1, v2);
    vMax.afficher();
    cout << endl;

    // Normax par adresse
    cout << "(normax par adresse) Vecteur avec plus grande norme : ";
    Vecteur3D *ptrMax = Vecteur3D::normaxAdresse(&v1, &v2);
    ptrMax->afficher();
    cout << endl;

    // Normax par référence
    cout << "(normax par référence) Vecteur avec plus grande norme : ";
    Vecteur3D &refMax = Vecteur3D::normaxReference(v1, v2);
    refMax.afficher();
    cout << endl;

    return 0;
}


  


