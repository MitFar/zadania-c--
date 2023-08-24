/*
Napisz uniwersalną funkcję, która otrzyma w argumencie adres do wektora z liczbami typu
całkowitego. Funkcja ta ma za zadania zwrócić maksymalną liczbę znalezioną w wektorze.
Zabezpiecz wektor w argumencie przed przypadkowymi zmianami wartości w funkcji.
*/
//Mateusz Franków 259740


#include <iostream>
#include <vector>
using namespace std;

int max_liczba(vector<int>& x, size_t n)
{
	bool sortowanie = false;
	while (!sortowanie) {
		sortowanie = true;
		for (size_t i = 0; i < n - 1; i++)
		{
			if (x[i] > x[i + 1])
			{
				sortowanie = false;
				int temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}
	return 0;
}
void wyswietl(vector<int>& x, size_t n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Pozcja " << i + 1 << " wynosi: " << x[i] << endl;
	}
}

int main()
{
	vector<int>liczba;
	cout << "Podaj wilekosc wektora: ";
	size_t size;
	cin >> size;
	for (size_t i = 0; i < size; i++)
	{
		size_t x;
		cout << "Podaj " << i+1 << " wartosc wektora" << endl;
		cin >> x;
		liczba.push_back(x);
	}
	max_liczba(liczba, size);
	wyswietl(liczba, size);
	cout << liczba.back();
		

	return 0;
}
