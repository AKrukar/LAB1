#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{   
   int tab1[2][3], tab2[2][3],tab3[2][3];
   cout << "podaj pierwsza macierz"<<endl;
   for(int j=0; j<3; j++)
   {
      for(int i=0; i<2; i++)
      {
          cin >> tab1[i][j];
          
      }
      cout << endl;
   }
    cout << "podaj druga macierz"<<endl;
   for(int j=0; j<3; j++)
   {
      for(int i=0; i<2; i++)
      {
          cin >> tab2[i][j];
          
      }
      cout << endl;
   }
   cout << endl;
   
    for(int j=0; j<3; j++)
   {
      for(int i=0; i<2; i++)
      {
         tab3[i][j]=tab2[i][j]+tab1[i][j];
          
      }
      cout << endl;
   }
cout << "macierz po dodaniu: "<< endl;
    for(int j=0; j<3; j++)
   {
      for(int i=0; i<2; i++)
      {
        cout << tab3[i][j]<< "   ";
          
      }
      cout << endl;
   }

   system("pause");
   return 0;
}