#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    bool pierwsza = true;
    int n;
    cout << "Sprawdzimy czy podana liczba jest pierwsza. Podaj liczbe n: " << endl;
    cin >> n;

    if ( n < 2){
        pierwsza = false;
    }

    for (int i = 2; i*i <= n; i++){
        if ( n % i == 0){
                pierwsza = false;}
    }
    if (pierwsza){
        cout << "Liczba n jest pierwsza";
    }
    else{
        cout << "Liczba n nie jest pierwsza";
    }

    getch();
    return 0;
}
