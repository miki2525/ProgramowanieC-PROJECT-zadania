#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>


using namespace std;

int main()
{
    srand((int) time(NULL) );

    int a, b, n;
    int tab[100];

    cout << " podaj liczbe (n) elementow [1 - 100]: ";
    cin >> n;
    cout << " podaj przedzial liczb z ktorego maja byc losowane liczby [a, b]" << endl;
    cout << " a - poczatek przedzialu: ";
    cin >> a;
    cout << " b - koniec przedzialu: ";
    cin >> b;

    int liczbwprzedziale = b - a + 1;

    for (int i = 0; i < n; i++){

        tab[i] = rand() % liczbwprzedziale + a;

    }

    for (int i = 0; i < n; i++){

    cout << " Nr.[" << i << "] wynosi " << tab[i] << endl;
    }

//////////////// ZADANIE 24
    int x = 0;
    int licznik = 0;

    cout << "Podaj liczbe x: "<< endl;
    cin >> x;

    for (int i = 0; i < n; i++){

        if (x == tab[i]){
            licznik += 1;

        }
    }

    cout << " Liczba wystapien liczby " << x << ": " << licznik << endl;

    getch();
    return 0;
}
