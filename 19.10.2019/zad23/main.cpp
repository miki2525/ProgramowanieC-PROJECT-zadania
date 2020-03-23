#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int wynik = 1;
    int x, n;
    cout << "podaj podstawe x" << endl;
    cin >> x;
    cout << "podaj do ktorej n-potegi chcesz podniesc podstawe" << endl;
    cin >> n;

    while (i < n){
    wynik *= x;
    i++;
    }
    cout << "Wynik wynosi " << wynik << endl;
    return 0;
}
