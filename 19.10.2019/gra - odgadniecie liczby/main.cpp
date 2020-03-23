#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;

    srand ((int) time(NULL));
    int nWylosowana = rand () % 100 + 1;
    cout << "Komputer wlasnie wylosowal pewna liczbe, Twoim zadaniem jest jej odgadniecie." << endl;
    cout << "Liczba znajduje sie w przedziale 1-100, po kazdym strzale komputer da Ci wskazowke zblizajaca Cie do ukrytej liczby" << endl;
    cout << endl;
    cout << "POWODZENIA!!" << endl;
    do{
    cout << "Podaj liczbe: " << endl;
    cin >> a;
    if (a < nWylosowana){
        cout << "Podana liczba jest mniejsza od wylosowanej" << endl;
    }
    else if (a > nWylosowana){
        cout << "Podana liczba jest wieksza od wylosowanej" << endl;
    }
    else{
        cout << "GRATULACJE!!!  Wlasnie ta liczbe wylosowal komputer. Jestes prawdziwym detektywem!" << endl;
}
}while (a != nWylosowana);

    return 0;
}
