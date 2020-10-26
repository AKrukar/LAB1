#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
    double BMI, wzrost, masa;

    cout << "podaj mase ciala [Kg]: ";
    cin >> masa;
    cout << "podaj wzrost [m]: ";
    cin >> wzrost;

    BMI = masa / (wzrost*wzrost);

 cout << "BMI wynosi: " << BMI;
    if(BMI<16)
    {
       cout <<" - wyglodzenie";
    }
    else
    if(BMI<16.99)
    {
        cout << " - wychudzenie";
    }
    else
         if(BMI<18.49)
    {
        cout << " - niedowaga";
    }
    else
     if(BMI<24.99)
    {
        cout << " - wartosc prawidlowa";
    }
    else
     if(BMI<29.99)
    {
        cout << " - nadwaga";
    }
    else
     if(BMI<34.99)
    {
        cout << " - I stopien otylosci";
    }
    else
     if(BMI<39.99)
    {
        cout << " - II stopien otylosci";
    }
    else
    {
        cout << " - otylosc skrajna";
    }
    
   return 0;
}