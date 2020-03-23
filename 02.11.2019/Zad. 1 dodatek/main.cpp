#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <string>


using namespace std;

int main()
{
    const int m = 5;
    char wyraz[m];


    cout << " Napisz slowo skladajace sie do 5 znakow: ";
    cin >> wyraz;

    int n = 0;
    while (wyraz[n] !=  NULL )
        {
            n++;}                ////// zliczanie liter w slowie, NULL konczy slowo

    int i, j;
    for (i = 0, j = n - 1; i < n/2; i++, j--)
        {

        if( wyraz[i] != wyraz[j]){
                break;

    }
       }
        if (i < j){

            cout << "Slowo " << wyraz <<" nie jest palindromem";
        }

        else{

            cout << "Slowo " << wyraz <<" jest palindromem";
        }

getch();
    return 0;
}
