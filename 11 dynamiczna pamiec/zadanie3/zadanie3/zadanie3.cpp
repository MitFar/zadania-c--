#include <iostream>
using namespace std;

int zamien(int* w1, int* w2)
{
	int w3;
	cout << "przed zamiana, w1: " << *w1 << ", w2: " << *w2 << endl;
	w3 = *w1;
	*w1 = *w2;
	*w2 = w3;
	cout << "po zamianie, w1: " << *w1 << ", pokazuje w2: " << *w2 << endl;
	return 0;
}
int main()
{
	int a, b;
	cout << "wprowadz a: " << endl;
	cin >> a;
	cout << "wprowadz b: " << endl;
	cin >> b;
	zamien(&a, &b);
	return 0;
}
