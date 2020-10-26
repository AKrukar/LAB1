#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b,suma=0;
    cout << "podaj a: "<< endl;
    cin >> a;
    cout << "podaj b: "<< endl;
    cin >> b;
    

    if(a<1||b<1)
   {
       cout << "podales liczbe mniejsza od 1 " << endl;
       system("pause");
       return 0;
   }

    cout <<"dzielniki a: "<< endl;

    for(int i=1; i<a; i++)
    {
        if(a%i==0)
        {
            suma=suma+i;
            cout << i<<endl;
        }
    }


    if(suma-1==b)
    {
        cout << "a i b sa ze soba skojarzone "<< endl;
    }
    else
    {
        cout << "a i b nie sa ze soba skojarzone " << endl;
    }
    

   system("pause");
   return 0;
}