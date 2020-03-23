#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    char tab[] = {'k', 'g', 'B', 'w', 'H', 'B', 'N', 'g', 'D', 'b', 'O', 'w', 'M'};

    cout << "\t\tTABLICA ZNAKOW" << endl;
    cout << "[ ";
    for (int i = 0; i < sizeof(tab); i++){

            cout << tab[i]<< ", ";
    }
            cout << "]"<< endl << endl;

    for (int i = 0; i < sizeof(tab); i++){

        if (tab[i] >= 'A' && tab[i] <= 'Z'){

            cout << tab[i] <<", nr indeksu: [" << i << "]" << endl;
        }

    }

    getch();
    return 0;
}
