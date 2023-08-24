#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main()
{
	int tablica1[9];
	int tablica2[9];
	int x, y, wynik;
	for (int i = 0 ;i < 9; i++)
	{
		tablica1[i] = i + 1;
		cout <<"tab1 liczba"<<i+1<<"="<<tablica1[i] << endl;
		tablica2[i] = i + 1;
		cout << "tab2 liczba" << i+1 << "=" << tablica2[i] << endl;
	}
	cout << "Wprowadz pierwsza liczbe: " << endl;
	cin >> x;
	cout << "Wprowadz druga liczbe: " << endl;
	cin >> y;
	wynik = tablica1[x-1] * tablica2[y-1];
	cout << "Wynik mnozenia " << tablica1[x-1] << " przez " << tablica2[y-1] << " wynosi " << wynik << endl;
	

   
}
