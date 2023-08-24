#include <iostream>

using namespace std;
void potrojenie(int ile, long tablica[]);
void srednia(int ile, long tablica[]); //
/******************************************************/
int main()
{
const int rozmiar = 10 ; //
long widmo[rozmiar] ; //
// ----------nadanie wartosci poczatkowej
for(int i = 0 ; i < rozmiar ; i ++)
{
widmo[i] = i ; //
cout << "widmo[" << i << "]= " << widmo[i]
<< endl ;
}
// ----------uwaga, wywolujemy suma !
potrojenie(rozmiar, widmo) ; //
cout << "Po wywolaniu funkcji \n" ;
for(int k = 0 ; k < rozmiar ; k ++)
{ //
cout << "widmo[" << k << "]= " << widmo[k] << endl ;
}

// ----------uwaga, wywolujemy funkcje srednia !
srednia(rozmiar, widmo) ; //
cout << "Po wywolaniu funkcji \n" ;
for(int k = 0 ; k < rozmiar ; k ++)
{ //
cout << "widmo[" << k << "]= " << widmo[k] << endl ;
}
}
/******************************************************/
void potrojenie (int ile, long t[]) //
{
for(int i = 0 ; i < ile ; i++)
{
t[i] = t[i-1]+t[i] ; //
}
}
void srednia(int ile, long s[])
{
    for (int i=0; ile<0;i++)
    {
        s[i] = (s[i-1]+s[i])/2 ;
    }
}
