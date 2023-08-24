/*
W main() napisz program, który znajdzie w tabllicy jednowymiarowej wartość maksymalną i
minimalną. Następnie wydrukuj na ekran wszystkie elementy tablicy z wartościami minimalnymi i
maksymalnymi.
*/
//Mateusz Franków 259740
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	int x = 10;
	int Min, Max; 
	int Tab[10] = { 1,3,5.76,412,52,62,61,98,75,100 };

	Min = Max = Tab[0];
	for (int i=1;i<x;i++)
	{ 
		if (Tab[i] < Min)
		{
			Min = Tab[i];
		}
		if (Tab[i] > Max)
		{
			Max = Tab[i];

		}
	}
	cout << "Minimum to: " << Min << endl;
	cout << "Maximum to: " << Max << endl;
	cout << "Index\t" << "Wartosc" << endl;
	for (int i = 0; i < 10; i++) { 
		cout << i << "\t" << Tab[i];
		if (Tab[i] == Max) cout << "\tMAXIMUM";
		if (Tab[i] == Min) cout << "\tMINIMUM";
		cout << endl;
	}
	return 0;
}
/*
W tym zadaniu wspomagalem sie przykladem z wykladu.
*/
