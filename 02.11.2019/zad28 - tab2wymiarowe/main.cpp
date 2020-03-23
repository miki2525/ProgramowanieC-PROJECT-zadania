#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>


using namespace std;

int main()
{
    srand((int) time(NULL) );

    int n, m;
    int tab[10][10];




    cout << " podaj liczbe wierszy [1 - 10]: ";
    cin >> n;
    cout << " podaj liczbe kolumn [1 - 10]: ";
    cin >> m;


    for (int i = 0; i < n; i++){  ////////wypelniamy macierz liczbami

        for (int j = 0; j < m; j++){

        tab[i][j] = rand() % 10;
        }
    }

cout<< endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

        cout << tab[i][j] << " ";
        }
        cout << endl;
    }



//////////////// ZADANIE 28

int maks = tab[0][0];
int pozycjai, pozycjaj;

for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

        if (tab[i][j] > maks){

        maks = tab[i][j];
        pozycjai = i+1;
        pozycjaj = j+1;
    }
        }
}
        cout << endl << " Element maksymalny to: " << maks << ", jego pozycja to: wiersz = " << pozycjai << ", kolumna = " << pozycjaj;





    return 0;
}
