#include <iostream>
using namespace std;

int* mniejsza(int* w1, int* w2)
{
	if (*w1 > *w2)
		return w2;
	else
		return w1;
}

int main()
{
	int a, b;
	cout << "Wprowadz a,b: " << endl;
	cin >> a;
	cin >> b;
	cout << "Mniejsza liczba to: " << mniejsza(&a, &b) << endl;//pokazuje adres komorki z mniejsza wartoscia
	return 0;
}