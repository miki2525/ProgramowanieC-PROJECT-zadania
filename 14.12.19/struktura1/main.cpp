#include <iostream>

using namespace std;


struct data {

int d;
int m;
inr r;

};
struct student
{

string imie;
string nazw;
//int wiek;
data ur;
int rok;

};

int main()
{

 student Ala;
 student Jan {"Jan", "Nos", 4, 24};


 Ala.imie = "Ala";
 Ala.nazw = "Kos";
 Ala.rok = 3;
 Ala.ur.d = 3;
 Ala.ur.m = 8;
 Ala.ur.r = 1983;

cout << Ala.imie << " " << Ala.nazw << " " << Ala.wiek << endl;
cout << Jan.imie << " " << Jan.nazw << " " << Jan.wiek << endl;


Ala.imie = "Ola";
Ala.wiek = 33;

    return 0;
}
