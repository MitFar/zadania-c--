/*
Napisz funkcję zliczającą znaki interpunkcyjne w zmiennej string zadanej w argumencie. Znaki
interpunkcyjne powinny być zapisane w dodatkowej zmiennej string dla porównania i także
przekazane w argumencie. Przekaż oryginalne zmienne (adresy w argumencie) i zabezpiecz je
przed omyłkową zmianą wartości elementów. Zwróć z funkcji liczbę znalezionych znaków
interpunkcyjnych.
*/
//Mateusz Franków 259740

#include <iostream>
#include <string>

using namespace std;

int funkcja(const string &slowo, const string &inter)
{
    int licznik = 0;
    for (int i = 0; i < slowo.length(); i++)
    {
        for (int j = 0; j < inter.length(); j++)
        {
            if (slowo[i]==inter[j])
            {
                licznik++;
            }
        }
    }

   
    return licznik;
}


int main()

{
    string interpunkcyjne = ",.?!:@#$%^&*()-_=+;:";
    string slowo;
    
    getline(cin, slowo);
    cout<<funkcja(slowo, interpunkcyjne);

    return 0;
}


