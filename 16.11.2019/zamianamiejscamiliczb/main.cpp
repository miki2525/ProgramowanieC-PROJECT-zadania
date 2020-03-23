#include <iostream>
#include <conio.h>

using namespace std;

int zamiana(int a, int b){

int temp;
temp = a;
a = b;
b = temp;

cout << a << ", " << b << endl;
return a, b;
}

int main()
{

int x = 5;
int y = 10;

cout << x << ", " << y << endl;

zamiana(x, y);

cout << x << ", " << y << endl;


}
