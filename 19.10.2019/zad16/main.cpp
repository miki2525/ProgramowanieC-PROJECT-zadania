#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "Wszystkie liczby dwucyfrowe" << endl;
    for (int i = 10; i < 100; i++){
        cout << i << endl;
    }
    cout << "Liczby 3-cyfrowe podzielne pezez 13" << endl;
    for ( int i = 100; i < 1000; i++){
        if (i % 13 == 0){
            cout << i << endl;
        }
    }
getch();
    return 0;
}

