#include <iostream>

using namespace std;

int main()
{
    int a;
    int i = 0;
    int suma = 0;
    while (i < 10){
        cout << " podaj liczbe: ";
        cin >> a;

        suma += a;
        i++;
    }
    cout << " suma liczb wynosi " << suma << endl;
    return 0;
}
