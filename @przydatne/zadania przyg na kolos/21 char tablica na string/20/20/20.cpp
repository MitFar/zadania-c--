/*
 Napisz funkcj�, kt�ra w argumencie otrzyma tablic� z ci�giem znak�w char i zwr�ci zwyk�y
wska�nik na now�/dynamiczn� zmienn� typu string z ci�giem znak�w skopiowanych z argumentu.
Zadbaj o usuni�cie rezerwacji pami�ci we w�a�ciwym momencie.
*/
#include <iostream>
#include <string>
//Mateusz Frank�w 259740


using namespace std;

 char funkcja(char tablica[], int x)
{
     string napis;
     for (int i = 0; i < x; i++)
     {
         napis = tablica[i];
         cout << napis;
     }
     
    return 0;
}


int main()
{
    char tablica[] = {'a','l','a','m','a','k','o','t','a' };
    int x = sizeof(tablica);
    funkcja(tablica, x);
    return 0;
}
