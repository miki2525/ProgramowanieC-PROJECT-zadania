#include <iostream>
#include <cmath>

#define _USE_MATCH_DEFINES



using namespace std;

int main()
{
    int stopnie;
    float radiany;

    cout << "podaj wartosc kata w stopniach" << endl;
    cin >> stopnie;
    radiany = stopnie * M_PI /180;
    cout << "Twoj kat wynosi " << radiany << "Rad" << endl;
    return 0;
}
