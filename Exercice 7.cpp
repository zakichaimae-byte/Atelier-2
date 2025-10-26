/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Fonction récursive qui affiche toutes les permutations d'une chaîne
void permuter(string &chaine, int debut, int fin) {
    // Cas de base : si on est au dernier caractère, afficher la chaîne
    if (debut == fin) {
        cout << chaine << endl;
    } else {
        // Boucle pour échanger chaque caractère
        for (int i = debut; i <= fin; i++) {
            // Échanger chaine[debut] et chaine[i]
            char temp = chaine[debut];
            chaine[debut] = chaine[i];
            chaine[i] = temp;

            // Appel récursif pour permuter le reste de la chaîne
            permuter(chaine, debut + 1, fin);

            // Rétablir la chaîne initiale (backtracking)
            temp = chaine[debut];
            chaine[debut] = chaine[i];
            chaine[i] = temp;
        }
    }
}

int main() {
    string mot;
    cout << "Entrez une chaine de caracteres : ";
    cin >> mot;

    cout << "\nLes permutations possibles sont :\n";
    permuter(mot, 0, mot.length() - 1);

    return 0;
}



