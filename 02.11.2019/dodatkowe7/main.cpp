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
    int tab2[10][10];
    int temp;


    cout << " podaj rozmiar tablicy [1 - 10]: ";
    cin >> n;

    m = n;

    for (int i = 0; i < n; i++){  ////////wypelniamy macierz liczbami

        for (int j = 0; j < m; j++){

        tab[i][j] = rand() % 10;
        tab2[i][j] = tab[i][j];

        }
    }


    int j;
    for (int i = 0, j = n - 1; i < n; i++, j--){

        temp = tab2[i][i];
        tab2[i][i] = tab2[i][j];
        tab2[i][j] = temp;
    }

cout<< endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

        cout << tab[i][j] << " ";
        }
        cout << endl;
    }
cout << endl;

    for (int i = 0; i < n; i++){

        for (int j = 0; j < m; j++){

        cout << tab2[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
