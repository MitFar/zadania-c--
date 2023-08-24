#include <iostream>
using namespace std;

double* funkcja(int n, int rozmiar)
{
	double* tab = new double[n];
	for (int i = 0; i < rozmiar; i++)
	{
		cout << "Wprowadz " << i << " wartosc tablicy" << endl;
		cin >> n;
		tab[i] = n;
		cout << "Wpisales do " << i << " wartosc: " << tab[i] << endl;
	}
}

int main()
{
	int n;
	double rozmiar;
	cout << "Podaj rozmiar tablicy: " << endl;
	cin >> rozmiar;
	double* tab;
	tab = new double[rozmiar];
	cout << "Podaj liczbe n: " << endl;
	cin >> n;
	
	
	
	delete[]tab;
	

	return 0;
}
