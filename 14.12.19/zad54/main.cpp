#include <iostream>

using namespace std;

struct ulamek{

float licz;
float mian = 1;
float wart;

};


ulamek mnozenie(ulamek a, ulamek b){

ulamek temp;
temp.licz = a.licz * b.licz;
temp.mian = a.mian * b.mian;
temp.wart = temp.licz/ temp.mian;

return temp;
}




int main()
{
    ulamek aa;
    ulamek bb;

    aa.licz = 3;
    aa.mian = 4;


    bb.licz = 4;
    bb.mian = 22;

    ulamek wynik;
    wynik = mnozenie (aa, bb);

    cout << wynik.wart << endl;


    return 0;
}
