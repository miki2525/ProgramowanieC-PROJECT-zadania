#include <iostream>

using namespace std;

int main()
{
    float a, b;

    do{
    cout << "Podaj dodatnia liczbe a: " << endl;
    cin >> a;
    cout << " Podaj dodatnia liczbe b: " << endl;
    cin >> b;
    if (a >= 0 && b >= 0)
    {
        float suma = a + b;
        cout << "Suma liczb a + b wynosi: " << suma << endl;
    }
    else {
        cout << "Nie podales dodatniej liczby" << endl;
    }
    } while (a < 0 || b < 0);
    return 0;
}
