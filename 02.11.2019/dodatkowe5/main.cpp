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

//////////////// ZADANIE DODATKOWE 5

    int x;
    int najcz;                       //// najczestsza liczba
    int licznik;                    ///// liczba powtorzen
    int liczniknajcz = 0;                //////// liczba powtorzen najcz

    for (int i = 0; i < n ; i++){

    licznik = -1;                  /////////// wystapienie liczby po raz pierwszy nie jest powtorzeniem, gdy liczba wystapi 1x, licznik bedzie = 0
    x = tab[i];

        for (int j = 0; j < n; j++){

        if( tab[j] == x){

            licznik += 1;
            }

        if( licznik > liczniknajcz){

            liczniknajcz = licznik;
            najcz = x;
            }
        }
    }

        cout << "Najczestsza liczba w zbiorze jest: " << najcz << endl;
getch();
    return 0;
}
