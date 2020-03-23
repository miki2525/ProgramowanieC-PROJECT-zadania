#include <iostream>
#include <fstream>

using namespace std;

void czytaj ()
{
    fstream odczyt("zapis33.txt", ios::in); ////odyczt z pliku

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

void pisz()
{

fstream zapis("zapis33.txt", ios::out);

if (zapis.good()){

    ////zapis do pliku
    zapis << "Jakis tekst do pliku";
    zapis << endl;
    zapis << "a to cos dalej";
    zapis.flush();////czyszczenie bufora

    zapis.close();
}
else cout << "blad pliku" << endl;
}

int main ()
{
    pisz();
    czytaj();

    return 0;

}

