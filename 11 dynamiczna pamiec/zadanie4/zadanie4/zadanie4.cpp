#include <iostream>
using namespace std;

int funkcja(int* w1, int* w2)
{
	int w3;
	if (*w2 < *w1)
	{
		cout << "przed zamiana, w1: " << *w1 << ", w2: " << *w2 << endl;
		w3 = *w1;
		*w1 = *w2;
		*w2 = w3;
		cout << "po zamianie, w1: " << *w1 << ", w2: " << *w2 << endl;
	}
	else cout << "drugi argument zmiennej nie jest mniejszy od zmiennej wskazywanej przez pierwszy argument." << endl;
	return 0;
}
int main()
{
	int a, b;
	cout << "podaj a: " << endl;
	cin >> a;
	cout << "podaj b: " << endl;
	cin >> b;
	funkcja(&a, &b);
	return 0;
}
