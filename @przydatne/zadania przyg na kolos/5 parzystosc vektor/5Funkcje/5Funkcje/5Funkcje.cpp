/*
Napisz uniwersalną funkcję działającą dla wektora w argumencie. Funkcja ma za zadania
zwrócić liczbę znalezionych liczb parzystych w wektorze
*/
//Mateusz Franków 259740
#include <iostream>
#include <vector>
using namespace std;

int parzyste(vector<int>& liczba, size_t n)
{
	vector<int>parzyste;
	for (size_t i = 0; i < n ; i++)
	{
		if (liczba[i] % 2 == 0)
		{
			parzyste.push_back(liczba[i]);
		}
		
	}
	cout << "Wprowadziles " << parzyste.size() << " parzystych liczb!";

	return 0;
}

int main()
{
	vector<int>liczba;
	size_t n;
	cout << "Podaj wielkosc wektora: ";
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int x;
		cout << "Dodaj wyraz " << i + 1 << " :";
		cin >> x;
		liczba.push_back(x);
		cout << "Wprowadziles: " << liczba[i] << endl;
	}
	
	parzyste(liczba,n);
	return 0;
}


