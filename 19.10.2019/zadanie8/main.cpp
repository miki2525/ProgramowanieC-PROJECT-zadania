#include <iostream>

using namespace std;

int main()
{
    int a, b, a1, b1, nww;
    cout << " Podaj liczbe a: ";
    cin >> a;
    cout << " Podaj liczbe b: ";
    cin >> b;

    if (a > 0 && b > 0)
    {
        a1  = a;
        b1 = b;

    while (a1 != b1)
        {

        if (a1 > b1)
            {

         b1 = b1 + b;
    }
        else
            {

            a1 = a1 + a;
        }
        }

        nww = a1;
        cout << " NWW wynosi: " << nww;

        }
    else
        {
        nww = 0;
        cout << " NWW wynosi: " << nww;
    }



}
