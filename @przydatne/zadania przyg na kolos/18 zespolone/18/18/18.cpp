/*
Zdefiniuj strukturę zespol do przechowywania liczb zespolonych ze zmiennoprzecinkową
wartością rzeczywistą i urojoną. Reszta analogicznie jak w zadaniu 17
*/
//Mateusz Franków 259740

#include <iostream>
#include <string>
using namespace std;
struct zespolone
{
    double Re;
    double Im;
}liczba1;
void wyswietl(zespolone& baza)
{
    cout << baza.Re << "+" << baza.Im << "i" << endl;
}


int main()
{
    liczba1.Re = 3.141592;
    liczba1.Im = 1.6132;
    wyswietl(liczba1);

    return 0;
}

