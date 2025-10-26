/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

// Fonction qui renvoie 1 si n est multiple de 2, 0 sinon
int MultipleDe2(int n) {
    return (n % 2 == 0);
}

// Fonction qui renvoie 1 si n est multiple de 3, 0 sinon
int MultipleDe3(int n) {
    return (n % 3 == 0);
}

int main() {
    int n;
    cout << "donnez un entier : ";
    cin >> n;

    // Vérifications
    if (MultipleDe2(n))
        cout << "il est pair" << endl;

    if (MultipleDe3(n))
        cout << "il est multiple de 3" << endl;

    if (MultipleDe2(n) && MultipleDe3(n))
        cout << "il est divisible par 6" << endl;

    return 0;
}

