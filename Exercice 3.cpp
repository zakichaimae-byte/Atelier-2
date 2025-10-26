/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int tab[10];
    //Methode 1 :
    
    int i;

    // Lecture des 10 entiers
    cout << "Entrez 10 entiers :" << endl;
    for (i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }

    // Recherche du plus grand et du plus petit
    int min = tab[0];
    int max = tab[0];

    for (i = 1; i < 10; i++) {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
    }

    cout << "Le plus petit nombre est : " << min << endl;
    cout << "Le plus grand nombre est : " << max << endl;
    
    //Methode 2:
    
     int *p;  // pointeur pour parcourir le tableau

    // Lecture des 10 entiers
    cout << "Entrez 10 entiers :" << endl;
    for (p = tab; p < tab + 10; p++) {
        cout << "valeur " << (p - tab) << " = ";
        cin >> *p; // accès via pointeur
    }

    // Initialisation
    int *pmin = tab;
    int *pmax = tab;

    // Recherche du min et max
    for (p = tab + 1; p < tab + 10; p++) {
        if (*p < *pmin)
            pmin = p;
        if (*p > *pmax)
            pmax = p;
    }

    cout << "Le plus petit nombre est : " << *pmin << endl;
    cout << "Le plus grand nombre est : " << *pmax << endl;

    return 0;
}


