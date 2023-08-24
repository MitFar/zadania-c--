/*
 Napisz funkcjê, która w argumencie otrzyma tablicê z ci¹giem znaków char i zwróci zwyk³y
wskaŸnik na now¹/dynamiczn¹ zmienn¹ typu string z ci¹giem znaków skopiowanych z argumentu.
Zadbaj o usuniêcie rezerwacji pamiêci we w³aœciwym momencie.
*/
#include <iostream>
#include <string>
//Mateusz Franków 259740


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
