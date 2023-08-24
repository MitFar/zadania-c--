/*
Napisz funkcję, która w argumencie otrzyma adres do zmiennej typu string i zwróci zwykły
wskaźnik na nową/dynamiczną tablicę char o najmniejszym możliwym rozmiarze do
przechowywania ciągu znaków skopiowanych z argumentu. Zadbaj o usunięcie rezerwacji we
właściwym momencie.
*/
//Mateusz Franków 259740
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int* funkcja(int tablica[], int size)
{
    vector<int> liczby;
    for (int i = 0; i < size; i++)
    { 

     liczby.push_back(tablica[i]);
     cout << liczby[i] << endl;

    }
    
    
    
    

    return 0;

}


int main()
{
    int tablica[] = { 1,2,3,4,5,6,7,8,9 };
    int *x;
    int size;
    size = sizeof(tablica) / sizeof(tablica[0]);
    x=funkcja(tablica, size);
   



        return 0;
}

