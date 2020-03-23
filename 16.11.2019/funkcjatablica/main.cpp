#include <iostream>
#include <conio.h>

using namespace std;

int suma(int n, int t[]);

int main()
{

int tab[] = {4, 3, 2, 5, 33};

    cout << "wynik wynosi: " << suma(5, tab) << endl;

    return 0;
}

int suma(int n, int t[]){

int suma = 0;

    for (int i = 0; i < n; i++){

    suma += t[i];
    }

    return suma;
}
