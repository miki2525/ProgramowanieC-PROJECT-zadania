#include <iostream>




using namespace std ;


float potega(float a, float n);

int main ( )

{
float a,b, c, n;
cout << " Podaj kolejno liczby a , b , c , n : " ;
cin >> a >> b >> c >> n ;
 potega(a, n);
 cout << potega(a, n) << endl;
 potega(b, n+5);
 cout << potega(b, n) << endl;
 potega(c, 2*n + 1);

float wynik = ( potega(a, n) + potega(b, n+5 ))
 / potega(c, 2*n + 1) ;
cout << " Wartosc wyrazeniato " << wynik ;
return 0;
}


float potega(float a, float n){
    if ( n < 1){

        return 1;}

    else{
        return a*potega(a, n - 1);
    }

}
