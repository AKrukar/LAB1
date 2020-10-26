#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
   int f=0;
   
   string wyraz = argv[1];
    int a = wyraz.length();

   for(int i=0; i<wyraz.length()-1; i++)
   {
       if(wyraz[a-1]!=wyraz[i])
          {
              f=1;
              break;
          }
       a--;
   }
   cout << "    \"" << wyraz;
if(f==1)
    cout <<"\" nie jest palindromem tekstowym";
else
    cout <<"\" jest palindromem tekstowym";
    return 0;
    
}
