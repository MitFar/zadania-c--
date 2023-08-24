#include <iostream>
#include<vector>
using namespace std;

void max(vector<int>& liczba, size_t n)
{
	bool sortowanie = false;
	while (!sortowanie) {
		sortowanie = true;
		for (int i = 0; i < n - 1; i++) 
		{
			if (liczba[i] > liczba[i + 1])
			{
				sortowanie = false;
				int temp = liczba[i];
				liczba[i] = liczba[i + 1];
				liczba[i + 1] = temp;
			}
		}
	}
}
void wyswietl(vector<int>& liczba, size_t n) {
	for (int i = 0; i < n; i++)
	{
		cout << "Pozcja " << i+1 << " wynosi: " << liczba[i] << endl;
	}
}

int main()
{
	vector<int>liczba;
	size_t n;
	cout<<"Wprowadz wielkosc wektora: " << endl;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		int x;
		cout << "Wprowadz " << i+1 << " liczzbe:" << endl;
		cin >> x;
		liczba.push_back(x);
		cout << "wprowadziles: " << liczba[i] << endl;
	}
	max(liczba, n);
	cout << "Wyswietlam "<< liczba.size()<<" wprowadzonych liczb w kolejnosci rosnaco:" << endl;
	wyswietl(liczba,n);
	cout << "Najwieksza liczba z podanych cyfr to: " << liczba.back() << endl;



	return 0;
}
