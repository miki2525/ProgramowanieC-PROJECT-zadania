#include <iostream>
#include <conio.h>

using namespace std;

int silnia(int a);

int main()
{
    int a;
    cout << "Podaj liczbe" << endl;
    cin >> a;
    cout <<" silnia wynosi: " << silnia(a);
    return 0;
}


int silnia(int a){
int wynik = 1;
    if ( a < 2){
            return 1;
            }
    else{

return a*silnia(a-1);
    }

}
/////// dla 0 i 1 silnia ma zwracac 1


