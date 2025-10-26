/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Entrez la taille du tableau : ";
    cin >> n;

    //  Allocation dynamique du premier tableau
    int* tab = new int[n];

    // Lecture des valeurs
    cout << "Entrez " << n << " entiers :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }

    //  Création dynamique du second tableau (carrés)
    int* carres = new int[n];
    for (int i = 0; i < n; i++) {
        carres[i] = tab[i] * tab[i];
    }

    // Suppression du premier tableau
    delete[] tab;
    tab = nullptr; // bonne pratique : éviter les pointeurs pendants

    // Affichage du second tableau
    cout << "\nLes carrés des nombres sont :" << endl;
    for (int i = 0; i < n; i++) {
        cout << "carres[" << i << "] = " << carres[i] << endl;
    }

    // Suppression du second tableau
    delete[] carres;
    carres = nullptr;

    return 0;
}


