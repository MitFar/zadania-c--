#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

float dod()
{
    float a;
    float b;
    cin>> a;
    cin>>b;
    return a+b;
}
float odej()
{
    float a;
    float b;
    cin>>a;
    cin>>b;
    return a-b;
}
float mnoz()
{
    float a;
    float b;
    cin>>a;
    cin>>b;
    return a*b;
}
float dziel()
{
    float a;
    float b;
    cin>>a;
    cin>>b;
    return a/b;
}
int sil()
{
    int a;
    long long wynik = 1;
    cin>>a;
    for(int i=a;i>1;i--)
    {
        wynik=wynik*i;
    }
    return wynik;
}
int pot()
{
    int a;
    int b;
    cin>>a;
    cin>>b;
    long long wynik=1;
    for(int i=0;i<b;i++)
    {
        wynik=wynik*a;
    }
    return wynik;
}



enum dzialania {dodawanie, odejmowanie, mnozenie, dzielenie, silnia, potega, bledny_znak};

int main()
{
int i, liczba, n;

char znak;

while(n!="n")
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
    float wynik_dod =dod();
    cout<< "Wynik dodawania wynosi: "<<wynik_dod<<endl;

    }
    if(operacja==odejmowanie)
    {
    cout<< "Wprowadz liczbe od ktorej chcesz odjac, nastepnie liczbe odejmowana: \n";
    float wynik_odej=odej();
    cout<<"Wynik odejmowania wynosi: "<<wynik_odej<<endl;
    }
    if(operacja==mnozenie)
    {

    cout<< " Wprowadz liczby ktore chcesz pomnozyc: \n";
    float wynik_mnoz =mnoz();
    cout<< "Wynik mnozenia wynosi: "<<wynik_mnoz<<endl;

    }
    if(operacja==dzielenie)
    {
    cout<< "Wprowadz licznik, nastepnie mianownik: \n";
    float wynik_dziel=dziel();
    cout<<"Wynik dzielenia wynosi: "<<wynik_dziel<<endl;
    }
    if(operacja==silnia)
    {
        cout<<"Wprowadz liczbe na ktorej chcesz uzyc silni: \n";
        long long wynik_silnia=sil();
        cout<<"Wynik silni wynosi: "<< wynik_silnia<<endl;
    }
    if(operacja==potega)
    {
        cout<<"Wprowadz liczbe, a nastepnie potege do ktorej chcesz ja podniesc: \n";
        int wynik_pot=pot();
        cout<<"Wynik potegowania wynosi: "<<wynik_pot<<endl;
    }
    else
    {
        cout<<"Podales zly znak dzialania"<<endl;
    }

	cin>>n;

}
return 0;
}
