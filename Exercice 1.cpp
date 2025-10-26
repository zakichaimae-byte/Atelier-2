/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void compteur_appels() {
    // Variable statique pour conserver la valeur entre les appels
    static int nb_appels = 0;
    nb_appels++;
    cout << "appel numéro " << nb_appels << endl;
}

int main() {
    compteur_appels();
    compteur_appels();
    compteur_appels();
    compteur_appels();
    compteur_appels();

    return 0;
}
