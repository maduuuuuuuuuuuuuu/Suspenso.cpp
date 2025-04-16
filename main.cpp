/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int frequencia;
    bool suspenso = 0;
    
    cout << "Digite sua frequência: " << endl;
    cin >> frequencia;
    
    frequencia >= 75 ? cout << "Suspenso: " << !suspenso : cout << "Suspenso: " << suspenso;

    return 0;
}