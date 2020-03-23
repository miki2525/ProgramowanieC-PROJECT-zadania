#include <iostream>
#include <string>;

using namespace std;

int main()
{

    string wyraz;
    cout <<" napisz slowo: ";
    cin >> wyraz;

    int ilosc = 0;
    for (int i = 0; i < wyraz.length(); i++)
{
       for (int j = 0; j < wyraz.length(); j++)
        {
        if(wyraz[i] == wyraz[j])
           {
            ilosc++;

        }
        }
        cout << wyraz[i] << " : " << ilosc << endl;
        ilosc = 0;
        }
    return 0;
}
