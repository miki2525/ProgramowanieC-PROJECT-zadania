#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
srand((int) time (NULL));
    int tab[4][4];



     for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++){
          tab[i][j] = rand() % 100;
            }
    }


    for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++){
            cout << tab[i][j] << " ";
            }
            cout << endl;
    }



/////////////// MINIMALNY ELEMENT
        int mini = 100;

for (int i = 0; i < 4; i++){

        for (int j = 0; j < 4; j++){
          if ( tab[i][j] < mini)
            mini = tab[i][j];

            }
    }
    cout << " minimalny elemnt to: " << mini;
    return 0;

getch();
}
