#include <iostream>
#include <fstream>

using namespace std;

void czytaj ()
{
    fstream odczyt("danestudenta.txt", ios::in); ////odyczt z pliku

    if (odczyt.good()){

        string napis;
        cout << "Zawartosc pliku:" << endl;
        while (!odczyt.eof())
            {
                getline(odczyt, napis);
        cout << napis << endl;
            }

            odczyt.close();
    }
    else cout << "blad pliku" << endl;

}

void pisz(int n, string *im, string *na, int *w)
{

fstream zapis("danestudenta.txt", ios::out);

if (zapis.good()){

    ////zapis do pliku
    for (int i = 0; i < n; i++){
    zapis << im[i] << " ; ";
    zapis << na[i] << " ; ";
    zapis << w[i] << " ; " << endl;
    }
    zapis.flush();////czyszczenie bufora

    zapis.close();
}
else cout << "blad pliku" << endl;
}

int main ()
{
    string imie [3];
    string nazw [3];
    int rok [3];

    for (int i = 0; i < 3; i++)
    {
        cout << "imie";
        cin >> imie[i];
        cout << endl;
        cout << "nazwisko";
        cin >> nazw[i];
        cout << endl;
        cout << "rok";
        cin >> rok[i];
        cout << endl;
    }

    pisz(3, imie, nazw, rok);///////3 bo jest tablica zadeklarowana int n wyzej
    czytaj();

    return 0;

}

