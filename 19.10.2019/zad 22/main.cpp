#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand((int) time(NULL));

    int i = 0;
    int tab[10000]; //powinno zdarzyc sie powtorzyc zanim by doszlo do tej liczby
    int suma = 0;
    int los;
    cout << "Losuje i sumuje dopoki nastepna wylosowana liczba nie bedzie taka sama jak poprzednia" <<endl;

do
{
//for (i;;i++){

//while(tab[i]!= tab[i-1])


        los = rand() % 20;
        tab[i] = los; // wrzucamu wylosowana liczbe do tablicy
        cout << endl <<" los nr." <<i<<"= " << los <<endl;
        if (tab[i]== tab[i-1]){
            cout << "liczby sie powtorzyly, koniec sumowania" << endl;
            break;}

        suma+=los;
        cout << " aktualna suma= " <<suma<<endl;
        i++;
        }


while (true); //jakkikolwiek warunek
cout << "suma wszystkich liczb wynosi = " << suma << endl;
    return 0;
}
