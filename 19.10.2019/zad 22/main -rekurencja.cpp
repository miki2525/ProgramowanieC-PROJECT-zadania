#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;
int suma(int tab[], int i = 0){

    tab[i] = rand() % 20;
    cout << "nr. " << i << " =" <<tab[i]<<endl;
    if (tab[i] == tab[i-1]){
        return 0;}
    return tab[i] + suma(tab, i+1 );
}


int main()
{
    srand((int) time(NULL));
    int tab[10000]; //powinno zdarzyc sie powtorzyc zanim by doszlo do tej liczby
    int i = 0;
    cout << "Losuje i sumuje dopoki nastepna wylosowana liczba nie bedzie taka sama jak poprzednia" <<endl;
    cout << "Suma liczb losowych "<< suma(tab);
}
