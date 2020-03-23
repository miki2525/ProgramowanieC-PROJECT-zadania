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

//////////////// DODATKOWE 4
int najwiekszy = 0;
int drugi = 0;
int index;

 for (int i = 0; i < n ; i++){
        if( najwiekszy < tab[i]){
            najwiekszy = tab[i];
            }
        if ( drugi < tab[i] && tab[i] < najwiekszy){
                drugi = tab[i];
                index = i;
            }
        }
        cout << "drugi co do wielkosci elemnet to: " << drugi << " o indexie: [" << index << "]" << endl;

return 0;
}

