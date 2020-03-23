#include <iostream>
#include <time.h>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int esc;
    int p, q;
    int parzyste;
    srand((unsigned) time(NULL) );
    do{

    int wygrana = 0;
    system ("cls");

    cout << "Rzucamy kostka! p to 1 rzut kostka, a q to 2 rzut kostka" << endl << endl;
    do{
    p = (double)rand ( )/(RAND_MAX)*6+1;
    q = (double)rand ( )/(RAND_MAX)*6+1;
    cout << "Pierwszy rzut wyniosl p = " << p << endl;
    cout << "Drugi rzut wyniosl q = " << q << endl << endl;

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
        cout << "Brawo! rzuciles dubla z piatkami!! Do wygranej dopisujemy 5!" << endl << endl;
        wygrana += 5;
    }

    cout << "Twoja wygrana za rzuty kostka to: " << wygrana << endl << "GRATULACJE !!!" << endl << endl;

    cout << "jesli chcesz skonczyc gre nacisnij przycisk [ESC]" << endl << "jesli chcesz kontynuowac, nacisnij dowolny przycisk" << endl;
    esc = getch();
    }while (esc != 27);
    return 0;
}
