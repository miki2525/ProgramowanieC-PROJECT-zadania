#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Podaj dowolna liczbe n: " << endl;
    cin >> n;
    cout << "Dzielniki liczby n: " << endl;
    // dla petli for
    for (int i = 1; i <= n; i++){
        if ( n % i == 0){
            cout << i << endl;
        }
    }
    // dla petli while
    cout << endl;
    int i = 1;
    while (i <= n){
         if ( n % i == 0){
            cout << i << endl;
         }
         i++;
    }
    cout << endl;
    // dla petli do while
    i = 1;
    do{
        if ( n % i == 0){
            cout << i << endl;
            }
            i++;
    } while (i <= n);
    return 0;
}
