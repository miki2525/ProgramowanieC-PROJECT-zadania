#include <iostream>
#include <conio.h>



using namespace std;

enum dni {pn=1, wt, sr, czw, pt, so, niedz};

int zostalo(int x);
int main()
{
    int dzien;
    cout << " Podaj dzien tygodnia [ 1 - 7]: ";
    cin >> dzien;



    cout << " Do konca tygodnia zostalo dni: " << zostalo(dzien);


}

int zostalo(int x)
{
int wynik = niedz - x;
return wynik;
}
