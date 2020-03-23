#include <iostream>

using namespace std;

int main()
{
  float cel, fahr;

    cout << "Witaj w programie zamieniania stopni Celcjusza na Fahrenheita" << endl;
    cout << "Podaj temperature (w stopniach Celcjusza)" << endl;
    cin >> cel;
    fahr = 32 + 1.8 * cel;
    cout << "Podana temperatura wynosi " << fahr <<" F" << endl;
    return 0;
}
