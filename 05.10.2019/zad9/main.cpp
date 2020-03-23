#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main (void){
int a, b, c, delta, x1, x2;
do{
cout << "Program znajduje pierwiastki rownania kwadratowego ax^2 + bx + c = 0" << endl;
cout << "Podaj parametr a: ";
cin >> a;
cout << "Podaj parametr b: ";
cin >> b;
cout << "Podaj parametr c: ";
cin >> c;
delta = pow(b, 2) - 4*a*c;//liczenie delty
x1 = (-b * sqrt(delta))/ 2*a;
x2 = (-b * - sqrt(delta))/ 2*a;

if (delta < 0){
        cout << "Brak pierwiastkow, gdyz delta < 0" << endl;}
    else if (delta == 0){
    cout << "Jest jeden pierwiastek, gdyz delta = 0, x = " << x1 << endl;}
    else{
    cout << "x1 = " << x1 << " , x2 = " << x2 << " , delta = " << delta << endl;
    }
    cout << "nacisnij dowolny klawisz, aby obliczyc nowe pierwiastki lub klawisz ESC aby wyjsc" << endl;
} while (getch() != 27);
}





