#include <iostream>

using namespace std;

float prost(float dlug, float szer, float wys, float &objetosc);

int main()
{
    float a;
    float b;
    float c;
    float v = 0;
    cout << "Podaj dlugosc: ";
    cin >> a;
    cout << "Podaj szerokosc: ";
    cin >> b;
    cout << "Podaj wysokosc: ";
    cin >> c;

    cout << " Pole wynosi: " << prost(a, b , c, v) << endl;
    cout << " Objetosc wynosi: " << v << endl;
    return 0;
}


float prost(float dlug, float szer, float wys, float &objetosc)
{
    int pole;
    if (dlug < 0 || szer < 0 || wys < 0){

        return -1;
    }
    objetosc = dlug * szer * wys;

    pole = dlug * szer;
    return pole;

}
