#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b ,c;
    cout << "Podaj liczbe a: " << endl;
    cin >> a;
    cout << "Podaj liczbe b: " << endl;
    cin >> b;
    cout << "Podaj liczbe c: " << endl;
    cin >> c;
    if (max(a,b) > c){
        cout << "Liczba " << max(a,b) <<" jest najwieksza" << endl;
    }
    else {
        cout << "Liczba " << c <<" jest najwieksza" << endl;
    }
    return 0;
}
