#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

float srednia (int *poczatek, int *koniec);

int main()
{
srand((int) time (NULL));

int tab [20];
int n;

cout << "podaj n: ";
cin >> n;

    for ( int i = 0; i < n; i++){

    tab [i] = rand() % 10;

    }
    for ( int i = 0; i < n; i++){

    cout << tab [i] << ", ";
    }

int *wsk = tab;
int *min = tab;

    for (int i = 0; i < n; i++){

        if (*min > *wsk){
            min = wsk;
        }
        wsk++;
    }

int *max = tab;
wsk = tab;

    for (int i = 0; i < n; i++){

        if (*max < *wsk){
            max = wsk;
        }
        wsk++;
    }

cout << "min" << *min << " max: " << *max;
    if (min > max){

        int temp = *min;
        *min = *max;
        *max = temp;
        }
cout <<endl<< "po zmianie pozycjami: min"<<*min << " max: " << *max;
cout << " Srednia wynosi " << srednia(min, max);
}
float srednia (int *poczatek, int *koniec)
{
    float suma = 0;
    float ilosc = 0;

    while (poczatek <= koniec){

        suma += *poczatek;
        poczatek++;
        ilosc++;
    }
    if (ilosc == 0){
        return 0;
    }
    return (suma/ilosc);
}
