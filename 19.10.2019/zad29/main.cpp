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
/////////////////// ZADANIE 29

    int k, p;
    int tabtemp[1][m];
    cout << " Podaj numery wierszy, ktore chcesz ze soba zamienic" << endl;
    cout << " Wiersz nr. 1: ";
    cin >> k;
    cout << endl << " Wiersz nr. 2: ";
    cin >> p;
    cout << endl;

for (int i = 0; i < 1; i++){

        for (int j = 0; j < m; j++){

        tabtemp[0][j] = tab[k][j];
        tab[k][j] = tab[p][j];
        tab[p][j] = tabtemp[0][j];
        }

    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        cout << tab[i][j]<< " ";
        }
        cout << endl;
    }
    }





