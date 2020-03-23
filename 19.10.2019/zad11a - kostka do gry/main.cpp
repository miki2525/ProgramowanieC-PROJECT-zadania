#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int esc;

    do{

    int p, q;
    int wygrana = 0;
    int parzyste;

    system ("cls");
    cout << "Rzucamy kostka! p to 1 rzut kostka, a q to 2 rzut kostka" << endl << endl;
    do{
    cout << "podaj p: ";
    cin >> p;
    cout << "podaj q: ";
    cin >> q;

    if (p == 0 || q == 0){
        cout << "Nie mozna kostka wyrzucic 0, sprobuj ponownie" << endl;
    }
    }while (p == 0 || q == 0);
    parzyste = p % 2;
    if(parzyste == 0 && q == 2 || parzyste == 0 && q == 4 || parzyste == 0 && q == 5){
        wygrana += p + (3 * q);

    }
    else if (parzyste == 0 && q == 1 || parzyste == 0 && q == 3 || parzyste == 0 && q == 6){
        wygrana += (2 * q);

    }
    else if (parzyste != 0 && q == 2 || parzyste != 0 && q == 4 || parzyste != 0 && q == 5){
        wygrana += (min(p, q) + 4);

    }
    else if (parzyste != 0 && q == 1 || parzyste != 0 && q == 3 || parzyste != 0 && q == 6){
        if (p == q){

            wygrana += ( 5 * p + 3);
        }
        else {
            wygrana += (2 * q + p);
        }
    }

    if (p == 5 && q == 5){
        cout << "Brawo! rzuciles dubla z piatkami!! Do wygranej dopisujemy 5!" << endl;
        wygrana += 5;
    }

    cout << "Twoja wygrana za rzuty kostka to: " << wygrana << endl << "GRATULACJE !!!" << endl << endl;

    cout << "jesli chcesz skonczyc gre nacisnij przycisk [ESC]" << endl << "jesli chcesz kontynuowac, nacisnij dowolny przycisk" << endl;
    esc = getch();
    }while (esc != 27);
    return 0;
}
