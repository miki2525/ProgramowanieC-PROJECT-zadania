#include <iostream>

using namespace std;

struct trojkat
{
float a;
float b;
float c;

};

float obwod (trojkat n){

return n.a + n.b + n.c;

}
int main()
{
    trojkat nasz;

    cout << "podaj bok a:";
    cin >> nasz.a;
    cout << endl;

    cout << "podaj bok b:";
    cin >> nasz.b;
    cout << endl;

    cout << "podaj bok c:";
    cin >> nasz.c;
    cout << endl;

    cout << "Obwod wynosi: " << obwod(nasz);

    return 0;
}
