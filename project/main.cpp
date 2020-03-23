#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)

{

     COORD c;

     c.X = x;

     c.Y = y;

     SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), c);

}

using namespace std;

int main()
{

    char znak;
    int n;
    int x ,y; /////wspolrzedne
    int sterowanie;
    do{

        cout << " \tPodaj wielkosc figury [3 - 15]: ";
        cin >> n;

        if(n < 3 ){
            cout << " Podana wielkosc jest za mala, sprobuj ponownie." << endl << endl;
        }
        else if (n > 15){
            cout << " Podana wielkosc jest za duza, sprobuj ponownie." << endl << endl;
        }

    }while (n < 3 || n > 15);

    cout << " \tjakim znakiem chcesz malowac: ";
    cin >> znak;
    cout << endl;

    x = 1;
    y = 7;

do{
    system("CLS");

////////////////////////////////////////////////////////////////////////////////////
    cout << "\t\tSTEROWANIE" << endl;
    cout << " Strzalki - poruszanie figura" << endl;
    cout << " +/- - zwieksza/zmniejsza rozmiar figury" << endl;
    cout << " ESC - wyjscie z programu" << endl;

    for ( int i = 0; i < 40; i++){
        cout << "=";}
        cout << endl;
        cout << " Aktualny rozmiar figury: " << n << endl;
        cout << " Wspolrzedne figury (x, y): (" << x << ", " << y + 2<< ")" << endl;
    for ( int i = 0; i < 40; i++){
        cout << "=";}
////////////////////////////////////////////////////////////////////////////////////

    y += n;
    gotoxy(x, y); /////////ustawiamy poczatkowy punkt malowania - dolny, lewy rog

    for (int i = n - 1; i >= 0; i--){

        for (int j = 0; j < n; j++){

            if ( j == 0 || j == n - 1 || i == j || i + j == n-1){

                    if ( j == 0 || j == n - 1 || i >= n/2 && j >= n/2 || i >= n/2 && j <= n/2 ){

                        cout << znak;
                    }

                    else{

                        cout << " ";
                        }
            }

            else{

                cout << " ";
            }

        }

        y--;
        gotoxy(x, y);

    }

    sterowanie = getch();
    switch(sterowanie){

    case 43:
        n++;                            ////zwieksz obraz
        if ( n > 15){
            n = 15;
        }
        break;

    case 45:
        n--;                            ////zmniejsz obraz
        if ( n < 3){
            n = 3;
        }
        break;

    case 224:
        sterowanie = getch();
        switch (sterowanie){

        case 72:
            y--;                        ////gora
            if ( y < 7){
            y = 7;
            }
            break;

        case 80:
            y++;                        ////dol
            if ( y > 25){
            y = 25;
            }
            break;

        case 75:                        ////lewo
            x--;
            if ( x < 1){
                x = 1;
            }
            break;

        case 77:                        ////prawo
            x++;
            if ( x > 40){
                x = 40;
            }
            break;

        }break;
    }

}while ( sterowanie != 27);         ////zakonczenie programu

    x = 0;
    y = 26 + n;
    gotoxy(x, y);

    for ( int i = 0; i < 40; i++){
        cout << "=";}
        cout << endl;
    for ( int i = 0; i < 40; i++){
        cout << "=";}
    cout << endl << "\tDZIEKUJE !!!";

    getch();
return 0;

}



