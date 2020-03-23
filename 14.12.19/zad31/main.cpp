#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

enum transport {SAMOCHOD, TRAMWAJ, AUTOBUS, ROWER, NOGI};

int main()
{
    srand((int) time (NULL));




    int los;


    transport sposob = transport(los =  rand() % 5);
    switch ((int)sposob)
    {
        case SAMOCHOD:
                  cout << "Pojade samochodem!" << endl;
                  break;
        case AUTOBUS: case TRAMWAJ:
                  cout << "Skorzystam dzis z transportu publicznego!" << endl;
                  break;
        case ROWER:
                  cout << "Pojade rowerem!" << endl;
                  break;
        default:
                  cout <<  "Pojde na piechote!" << endl;
                  break;
    }
    return 0;
}
