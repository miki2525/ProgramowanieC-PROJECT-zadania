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

//////////////// DODATKOWE 3
int suma = 0;
int sumamax = 0;
int x, y;

 for (int i = 0; i < n - 1; i++){
        suma = tab[i] + tab[i+1];
        if (suma > sumamax){
                sumamax = suma;
                x = tab[i];
                y = tab[i+1];}
 }
           cout << " Sasiednie elementy o najwiekszej sumie to: " << x << " i " << y << endl;
return 0;
}

