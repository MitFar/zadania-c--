/*
Napisz funkcję, która w argumencie otrzyma tablicę z liczbami całkowitymi oraz dwa indeksy.
Funkcja ma wykonać zamianę miejscami dwóch wskazanych elementów na podobieństwo funkcji
swap (bez użycia funkcji swap).
*/
//Mateusz Franków 259740

#include <iostream>
using namespace std;

int swap(int tab[2])
{
    int pom;
    cout << tab[0] << ", " << tab[1] << endl;
    pom = tab[0];
    tab[0] = tab[1];
    tab[1] = pom;
    cout << tab[0]<<", " << tab[1] << endl;
    return 0;
}


int main()
{
    int tablica[2] = { 55,66 };
    swap(tablica);
    return 0;
}

