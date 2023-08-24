#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include "funkcje.h"
using namespace std;
enum dzialania {dodawanie, odejmowanie, mnozenie, dzielenie, silnia, potega, bledny_znak};

int main()
{
int i, liczba;
char znak;
float a, b;

for( i=1; znak!='k'; i++ )
{


    dzialania operacja;
    cout<< "Jakie dzialanie chcialbys wykonac?\n"
            "(+) - dodawanie \n"
            "(-) - odejmowanie \n"
            "(*) - mnozenie \n"
            "(/) - dzielenie \n"
            "(!) - silnia \n"
            "(^) - potegowanie \n"
            << flush;
    char wybor;
    cin>>wybor;
    switch(wybor)
    {
        case '+' : operacja = dodawanie; break;
        case '-' : operacja = odejmowanie; break;
        case '*' : operacja = mnozenie; break;
        case '/' : operacja = dzielenie; break;
        case '!' : operacja = silnia; break;
        case '^' : operacja = potega; break;
        default: operacja = bledny_znak;
    }
    if(operacja==dodawanie)
    {
    cout<< " Wprowadz liczby ktore chcesz dodac: \n";
    cin>>a;
    cin>>b;
    cout<< "Wynik dodawania wynosi: "<<dod(a,b)<<endl;
    }
    if(operacja==odejmowanie)
    {
    cout<< "Wprowadz liczbe od ktorej chcesz odjac, nastepnie liczbe odejmowana: \n";
    cin>>a;
    cin>>b;
    cout<<"Wynik odejmowania wynosi: "<<odej(a,b)<<endl;
    }
    if(operacja==mnozenie)
    {

    cout<< " Wprowadz liczby ktore chcesz pomnozyc: \n";
    cin>>a;
    cin>>b;
    cout<< "Wynik mnozenia wynosi: "<<mnoz(a,b)<<endl;

    }
    if(operacja==dzielenie)
    {
    cout<< "Wprowadz licznik, nastepnie mianownik: \n";
    cin>>a;
    cin>>b;
    cout<<"Wynik dzielenia wynosi: "<<dziel(a,b)<<endl;
    }
    if(operacja==silnia)
    {
        cout<<"Wprowadz liczbe na ktorej chcesz uzyc silni: \n";
        cin>>a;
        cout<<"Wynik silni wynosi: "<<sil(a)<<endl;
    }
    if(operacja==potega)
    {
        cout<<"Wprowadz liczbe, a nastepnie potege do ktorej chcesz ja podniesc: \n";
        cin>>a;
        cin>>b;
        cout<<"Wynik potegowania wynosi: "<<pot(a,b)<<endl;
    }
    else
    {
        cout<<"Podales zly znak dzialania"<<endl;
    }

znak = getche( );

}
return 0;
}
