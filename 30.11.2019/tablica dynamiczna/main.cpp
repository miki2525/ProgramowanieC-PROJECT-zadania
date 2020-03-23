#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int *tab = new int [n];

    for ( int i = 0; i < 7; i++){

        tab[i] = i;
    }

    for ( int i = 0; i < 7; i++){

        cout << tab[i] << "\t" << endl;
    }

     delete []tab;

    cout << "Hello world!" << endl;
    return 0;
}
