#include <iostream>
#include <ctime>
#include <cstdlib>



int suma(int n);
using namespace std;

int main()
{
    int n;
    cout << " podaj liczbe do sumowania: ";
    cin >> n;
    cout << " suma wynosi: " << suma(n);


}


int suma(int a){
int wynik = 0;
    if ( a == 1){
            return 1;
            }
    else{

return a+suma(a-1);
    }
}
