#include <iostream>

using namespace std;

int main()
{

    int zmienna2 = 2;
    int zmienna1;

    int *wsk1 = &zmienna1;
    *wsk1 = 444;

    cout << "Zmienna1: " << zmienna1 << endl;
    cout << "Wskaznik: " << wsk1 << endl;

    zmienna1 = zmienna1 +5;

    cout << "Zmienna1 po zmianie: " << zmienna1 << endl;
    cout << "Wskaznik: " << *wsk1 << endl;

////////////////////////////////////////////////////////////

    int tab[] = {4, 3, 5, 6};

    cout << "Tablica adres - nazwa: " << &tab << endl;
    cout << "Tablica adres - 1 element: " << &tab[0] << endl;
    cout << "Tablica adres - 2 element: " << &tab[1] << endl;


    return 0;
}
