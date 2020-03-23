#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;


bool czysiepowtarzaja(int ilos, int itab[], int irozmiar)
{
    for (int i = 0; i < irozmiar; i++){
                if (ilos == itab[i]){
                    cout << "liczba " << itab[i]<<" sie powtorzyla, koniec sumowania" << endl;
                    return false;}
    }
    return true;
}

int main()
{
    srand((int) time(NULL));

    int rozmiar = 1;
    int *tab = new int [rozmiar];
    int suma = 0;
    int los;

    cout << "Losuje i sumuje dopoki nastepna wylosowana liczba nie bedzie taka sama jak poprzednia" <<endl;

do{
        los = rand() % 20;
        cout << endl <<" los nr." <<rozmiar<<"= " << los <<endl;
        if(czysiepowtarzaja(los, tab, rozmiar)==false)
            {
                break;}
        tab[rozmiar-1] = los;
        suma+=los;
        cout << " aktualna suma= " <<suma<<endl;
        rozmiar++;

}while(true);

cout << "suma wszystkich liczb wynosi = " << suma << endl;

   delete[]tab;

    return 0;
}
