#include <cstring>
#include <iostream>
using namespace std;


int main(int argc, char* argv[])
{   
    int tab[argc-1];
    
    for (int i=1,j=0; i<argc;i++)
    {   
        string  x=argv[i];
        tab[j]=atoi(x.c_str());
        j++;
    }
for(int i=0;i<argc-1;i++)
		for(int j=i+1;j<argc-1;j++) 
		    if(tab[j]<tab[i])
			    swap(tab[j], tab[i]);

for (int i=0; i<argc-1;i++)
           cout << tab[i] <<" ";

    return 0;

    
}
