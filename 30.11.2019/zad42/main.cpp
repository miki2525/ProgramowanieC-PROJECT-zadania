#include <iostream>
using namespace std ;
int main ()
{


    int n, k;
    cout << "Podaj kolejno n i k:" << endl ; cin >> n >> k;

    int sn = 1;

    int sk = 1;

    int snk = 1;


    int *wn=&n;
    int *wk=&k;
    int *wsn=&sn;
    int *wsk=&sk;
    int *wsnk=&snk;

    for (int i = 2; i <= n; i++) {
        *wsn = *wsn * i ;
    }
    for (int i = 2; i <= k; i++){
      *wsk = *wsk * i ;
    }
    for(int i=2; i<= n-k; i++){
        *wsnk =*wsnk *i;
    }
    cout << "Symbol Newtona n nad k wynosi " << *wsn / (*wsk * *wsnk );
}

