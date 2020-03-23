/*
Program realizuje prostym kalkulatorem pracuj¹cym z dwoma liczbami
podawanymi z konsoli.
*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "");
float liczba1 = 0; // pierwsza liczba
float liczba2 = 0; //druga liczba
int operacja = 1; //domyœlna operacj¹ jest dodawanie
int koniec;
cout << " kalkulator" << endl;
cout << "-------------------------------" << endl;
cout << endl;
cout << "Podaj pierwsz¹ liczbê: " << endl; //podanie 1 liczby
cin >> liczba1;
cout << "Podaj drug¹ liczbê: " << endl; //podanie 2 liczby
cin >> liczba2;
cout << endl;
do{

cout << "Wybierz operacjê: " << endl; //interfejs
cout << "1. Dodawanie" << endl;
cout << "2. Odejmowanie" << endl;
cout << "3. Mno¿enie" << endl;
cout << "4. Dzielenie" << endl;
cout << "0. Koniec" << endl;
cout << endl;
cin >> operacja; // podanie numeru opearcji
cout << "Twój wybór operacji: " << operacja << endl;
switch (operacja) {
case 1: cout << liczba1 << " + " << liczba2 << " = " << liczba1
+ liczba2; break; cout << endl; //wybór operacji dodawania
case 2: cout << liczba1 << " - " << liczba2 << " = " << liczba1
- liczba2; break; cout << endl; //wybór operacji odejmowania
case 3: cout << liczba1 << " * " << liczba2 << " = " << liczba1
* liczba2; break;cout << endl; //wybór operacji mno¿enia
case 4:
if (liczba2 != 0) cout << liczba1 << " / " << liczba2 <<
" = " << liczba1 / liczba2;
else cout << "podaj inn¹ drug¹ liczbê - ró¿n¹ od zera" << endl; break; cout << endl;//wybór operacji dzielenia
case 0: cout << "Dziêkujê" << endl; break;cout << endl;// zakoñczenie pracy
default: cout << "nie ma takiej operacji" << endl;
}
}while (operacja != 0);
_getch();
return 0;
}
