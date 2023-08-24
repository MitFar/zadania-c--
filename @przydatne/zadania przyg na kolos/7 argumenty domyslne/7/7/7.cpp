/*
Napisz funkcję, która otrzyma w argumencie trzy wartości całkowite, z czego dwa argumenty
powinny mieć wartości domyślne. Funkcja powinna zwracać sumę wszystkich liczb w argumencie.
Zademonstruj wszystkie możliwe warianty wywołania swojej funkcji z funkcji main().
*/
//Mateusz Franków 259740
#include <iostream>
using namespace std;

int dodaj(int n, int x = 1, int y = 2)
{
	return n + x + y;
}


int main()
{
	int n;
	cout << "Podaj cyfre: " << endl;
	cin >> n;
	cout << dodaj(n) << endl;
	return 0;
}