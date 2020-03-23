#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    string kategoria;
    int godziny;
    int nadgodziny;
    int netto;
    int brutto;
    int beznadg;
    bool zle = false;
    char znak;

    do{
    do{
    cout << " Program liczy ile pracownik zarabia brutto oraz netto" << endl << endl;
    cout << " Podaj kategorie zaszeregowania[A - 15PLN/h, B - 25 PLN/h, C - 30PLN/h, D - 35PLN/h] : ";
    cin >> kategoria;
    cout << " Podaj ilosc przepracowanych godzin:  ";
    cin >> godziny;
    //////////sprawdzamy czy sa i wyliczamy nadgodziny

    nadgodziny = 0;
    netto = 0;
    brutto = 0;
    beznadg = 0;

    if(godziny > 40){
    nadgodziny = godziny - 40;
    beznadg = 40;
    }
    else{
        beznadg = godziny;
    }
    //////////liczenie zalezne od kategorii
    if(kategoria == "A" || kategoria == "a"){
        beznadg *= 15;
        nadgodziny *= 30;
    }
    else if (kategoria == "B" || kategoria == "b")
        {beznadg *= 25;
        nadgodziny *= 50;}
    else if (kategoria == "C" || kategoria == "c"){
        beznadg *= 30;
        nadgodziny *= 60;
    }
    else if (kategoria == "D" || kategoria == "d"){
        beznadg *= 35;
        nadgodziny *= 70;
    }
    else{
        zle = true;
        cout << endl << "Nie ma takiej kategorii, sprobuj jeszcze raz" << endl << endl;
    }
    }while (zle);

    //////////liczenie netto i brutto
    brutto += beznadg + nadgodziny;

    if (brutto <= 700){
        netto = brutto - brutto * 0.15;
    }
    else if ( 701 < brutto <= 1200){
        netto = brutto - brutto * 0.2;
    }
    else{
        netto = brutto - brutto * 0.25;
    }

    cout << "Kwota brutto wynosi " << brutto << "PLN, a kwota netto wynosi " << netto << "PLN" << endl << endl;
    cout <<" Jesli chcesz wyjsc nacisnij klawisz [ESC], aby kontynowac, nacisnij dowolny klawisz" << endl << endl;

    znak = getch();

}while(znak != 27);

    return 0;
}
