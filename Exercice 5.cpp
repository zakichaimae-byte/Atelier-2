/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main() {
    int a = 42;        // 1️⃣ Déclaration d’un entier
    int& ref = a;    // 2️⃣ Déclaration d’une référence vers a
    int* p = &a;     // 3️⃣ Déclaration d’un pointeur vers a

    // 4️⃣ Affichages
    cout << "Valeur de a  est : " << a << endl;
    cout << "Adresse de a  est : " << &a << endl;

    cout << "Valeur de reference de a est : " << ref << endl;
    cout << "Adresse de reference de a est  : " << &ref << " (identique à &a)" << endl;

    cout << "Valeur de pointeur de a est     : " << p<< " (adresse de a)" << endl;
    cout << "Adresse de pointeur de a est   : " << &p<< endl;
    cout << "Valeur pointée est : " << *p << endl;

    return 0;
}
 


