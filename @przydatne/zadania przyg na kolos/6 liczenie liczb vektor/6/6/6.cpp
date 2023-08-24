/*
Napisz uniwersalną funkcję działającą dla wektora w argumencie. Przekaż dodatkową liczbę w
argumencie. Funkcja ma za zadania zwrócić liczbę wystąpień zadanej liczby w wektorze. Jeśli
liczba nie występuje w wektorze funkcja ma zwrócić zero.
*/
//Mateusz Franków 259740
#include <iostream>
#include <vector>
using namespace std;

int wystapienia(vector<int> const& liczba, int n)
{
	int licznik=0;
	int x = 9;
	for (int i = 0; i < n; i++)
	{
		if (liczba[i] == x)
		{
			licznik++;
			
		}
		
	}
	cout << licznik;
	return 0;
}



int main()
{
	vector<int>liczba;
	size_t n;
	for (size_t i = 0; i <= liczba.max_size(); i++)
	{
		cin >> n;
		if (n != 0)
		{
			liczba.push_back(n);
		}
		if (n == 0)
		{
			cout << "Wpisales 0, koniec zliczania!";
			break;
		}
	}

	wystapienia(liczba, liczba.size());
	return 0;
}