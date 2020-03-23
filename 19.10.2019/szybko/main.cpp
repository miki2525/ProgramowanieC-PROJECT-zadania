#include <iostream>
int main()
{
   int i,j;

   using namespace std;
   for(i=1;i<=10;i++)
   {
      for(j=1;j<=10;j++)
      {
         if(i==j||11-i==j)
            cout<<"*";
         else
            cout<<" ";

      }
      cout<<endl;
   }
   return 0;
}
