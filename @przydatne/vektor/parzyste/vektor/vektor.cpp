#include <iostream>
#include <vector>
using namespace std;

void wczytaj(vector<int> &liczby, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		int liczba;
		cout << i << "wyraz: ";
		cin >> liczba;
		liczby.push_back(liczba);
		cout << "Wprowadziles: " << liczby[i] << endl;
	}
}
void parzyste(vector<int>& liczby, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (liczby[i] %2==0)
		{
			cout << liczby[i] << " jest parzysta" << endl;
		
		}
	}
}




int main()
{
	vector <int> liczby;
	size_t n;
	cout << "Podaj liczbe elementow vectora: ";
	cin >> n;
	wczytaj(liczby, n);
	parzyste(liczby, n);
		
	return 0;
}
