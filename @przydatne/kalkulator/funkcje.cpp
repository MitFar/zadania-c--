#include <iostream>
#include "funkcje.h"
using namespace std;
float dod(float a, float b)
{

    return a+b;
}
float odej(float a, float b)
{
    return a-b;
}
float mnoz(float a, float b)
{

    return a*b;
}
float dziel(float a, float b)
{

    return a/b;
}
int sil(int a)
{

    long long wynik = 1;
    for(int i=a;i>1;i--)
    {
        wynik=wynik*i;
    }
    return wynik;
}
int pot(int a, int b)
{


    long long wynik=1;
    for(int i=0;i<b;i++)
    {
        wynik=wynik*a;
    }
    return wynik;
}

