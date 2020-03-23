#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>


using namespace std;

int main()
{
    srand((int) time(NULL) );

    int n, m;
    int tabA[10][10];
    int tabAtrans[10][10];
    int temp;


    cout << " podaj ilosc wierszy [1 - 10]: ";
    cin >> n;
    cout << " podaj ilosc kolumn [1 - 10]: ";
    cin >> m;


    for (int i = 0; i < n; i++){  ////////wypelniamy macierz liczbami

        for (int j = 0; j < m; j++){

        tabA[i][j] = rand() % 10;
        tabAtrans[i][j] = tabA[i][j];

        }
    }


    cout << " /tMACIERZ A" << endl;
     for (int i = 0; i < n; i++){  ////////wyswietlamy macierz

        for (int j = 0; j < m; j++){

        cout << tabA[i][j] << " ";
        }
        cout << endl;
     }

    cout << " /tTRANSPONOWANA MACIERZ A" << endl;
     for (int i = 0; i < m; i++){  ////////wyswietlamy macierztransa

        for (int j = 0; j < n; j++){

    cout << tabAtrans[j][i] << " ";
        }
    cout << endl;
     }

    return 0;
}
