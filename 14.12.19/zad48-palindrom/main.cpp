#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string wyraz;

    cout << "Podaj slowo, program sprawdzi czy jest palindromem: " << endl;
    cin >> wyraz;

    cout << "rozmiar: " << wyraz.length() << endl;



   for (int i = 0; i < wyraz.length()/2; i++){

        if (wyraz[i] != wyraz[wyraz.length()-1-i])

            {

            cout << " to nie jest palindrom";
            break;}

        else
        {
            cout << " to jest palidrom";
            break;
        }
   }
    return 0;
}
