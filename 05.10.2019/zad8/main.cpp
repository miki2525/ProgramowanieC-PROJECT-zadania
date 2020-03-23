#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int liczba;
    do {
    cout << "Podaj dowolna liczbe" << endl;
    cin >> liczba;
    if (liczba > 0){
        cout << "Twoja liczba jest dodatnia" << endl;
    cout << "Nacisnij klawisz ESC aby zakonczyc dzialanie programu" << endl;}
    else if ( liczba < 0){
         cout << "Twoja liczba jest ujemna" << endl;
        cout << "Nacisnij klawisz ESC aby zakonczyc dzialanie programu" << endl;
    }
    else {
         cout << "Twoja liczba jest zerem" << endl;
        cout << "Nacisnij klawisz ESC aby zakonczyc dzialanie programu" << endl;
    }
    }

    while (getch() != 27);
    return 0;
}
