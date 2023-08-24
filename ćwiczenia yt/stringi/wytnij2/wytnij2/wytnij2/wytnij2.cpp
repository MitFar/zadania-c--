//Napisz funkcję wytnij2, która dostaje jako argument dwa napisy
//nap1 i nap2, i wycina z napisu nap1 pierwsze wystąpienie w nim
//napisu nap2.
#include <iostream>
#include <string>
using namespace std;
string wytnij2(string nap1, string nap2)
{
	size_t x, y;
	x = nap1.find(nap2);//znajduje pozycje na ktorej jest napis2
	y = nap2.length();//liczy dlugosc napisu2
	nap1.erase(x, y);//usuwa od momenty kiedy znalazl napis2 do liczyby jego znakow
	return nap1;



}


int main()
{
	string napis1, napis2;
	
	cout << "Wprowadz napis1: " << endl;
	getline(cin, napis1);
	cout << "Wprowadz napis2: " << endl;
	getline(cin, napis2);
		cout << wytnij2(napis1, napis2);

}