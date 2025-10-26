/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Fonction qui incrémente une variable passée par référence
void incrementer(int& x) {
    x++; // pas besoin d’étoile ni d’adresse, on agit directement sur la variable originale
}

// Fonction qui échange deux valeurs passées par référence
void permuter(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;

    cout << "Avant incrementer : a = " << a << endl;
    incrementer(a); // passage direct
    cout << "Après incrementer : a = " << a << endl;

    cout << "\nAvant permuter : a = " << a << ", b = " << b << endl;
    permuter(a, b); // passage direct
    cout << "Après permuter : a = " << a << ", b = " << b << endl;

    return 0;
}




