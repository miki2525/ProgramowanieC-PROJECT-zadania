#include <iostream>

using namespace std;

void fun_tab(int tab[], int n);
void fun_wsk (int *wsk, int n);
void fun_wsk2 (int *wsk, int n);


int main()
{

    int a[] = {5, 4 , 3, 66 ,3, 2};
    int n = 6;


    fun_tab (a, n);
    cout << endl;
    fun_wsk (a, n);
    cout << endl;
    fun_wsk2 (a, n);
    cout << endl;

    cout << "Hello world!" << endl;
    return 0;
}


void fun_tab(int tab[], int n)
{
    for ( int i = 0; i < n; i++){

        cout << tab[i] << "\t" << endl;
    }

}


void fun_wsk (int *wsk, int n)
{
    for ( int i = 0; i < n; i++){

        cout << wsk[i] << "\t" << endl;
    }

}


void fun_wsk2 (int *wsk, int n)
{
    for ( int i = 0; i < n; i++){

        cout << *(wsk++) << "\t" << endl;

    }


}

