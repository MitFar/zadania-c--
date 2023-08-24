#include <iostream>
using namespace std;

int mniejsza(int* w1, int* w2)
{
	if (*w1 > *w2)
	
		return *w2;
	
	else
	
		return *w1;
	
}

int main()

{
	int a, b;
	cout << "wprowadz a, b: " << endl;
	cin >> a;
	cin >> b;
	cout <<"Mniejsza liczba to: "<< mniejsza(&a, &b) << endl;
	return 0;
}