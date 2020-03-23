#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int skalarny ( int n, int X[], int Y[]);
int main()
{
srand((int) time (NULL));

int n;
int tab[5];
int tab2[5];

int *x = tab;

cout << " Podaj wielkosc tablicy: ";
cin >> n;

for (int i = 0; i < n; i++){

    *x = rand() % 10;
    x++;
    tab2[i] = rand() % 10;
}
    x = tab;

    for (int i = 0; i < n; i++){

    cout << tab[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
    cout << tab2[i] << ", ";
}

    cout << endl <<" Iloczyn skalarny wynosi: " << skalarny(n, tab, tab2);

    return 0;
}

int skalarny ( int n, int X[], int Y[])
{
    int suma = 0;
    for (int i = 0; i < n; i++){

    suma = suma + (X[i] * Y[i]);

    }

    return suma;
}
