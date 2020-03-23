#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>


using namespace std;

int main()
{
    srand((int) time(NULL) );

    int a, b, n;
    int tab[10];
    int tab2[10];

    cout << " podaj liczbe (n) elementow [1 - 10]: ";
    cin >> n;




    for (int i = 0; i < n; i++){

        tab[i] = rand() % 11 + 0;
        tab2[i] = rand() % 101 + 0;
    }

    cout << "WEKTOR 1" << endl;
    for (int i = 0; i < n; i++){

    cout << " Nr.[" << i << "] wynosi " << tab[i] << endl;
    }

    cout << "WEKTOR 2" << endl;
    for (int i = 0; i < n; i++){

    cout << " Nr.[" << i << "] wynosi " << tab2[i] << endl;
    }
//////////////// DODATKOWE 6
int suma = 0;

 for (int i = 0; i < n ; i++){

        suma += tab[i] * tab2[i];
 }

        cout << "Iloczyn skalarny powyzszych wektorow wynosi: " << suma << endl;

return 0;
}

