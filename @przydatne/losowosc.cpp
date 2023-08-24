#include <iostream>
#include <cstdlib>
#include <time.h>
#include<algorithm>
using namespace std;
int main()
{
	int liczba[10];
	cout << "Twoje 10 liczb losowych od 1 do 100 z powtarzaniem: " << endl;
		srand(time(NULL));
		for (int i = 0; i <=9; i++)
		{
			liczba[i] = rand() % 100 + 1; //100+1 ¿eby nie losowa³o od 0 tylko od 1 
			cout << liczba[i] << ", ";
		}



		int tablica[27];
		cout << "\nLosuje liczby od 1 do 27 bez powtarzania\n";
		tablica[0] = 1;
		for (int i = 0; i <= 26; i++) {
			tablica[i] = i;
		}

		random_shuffle(&tablica[0], &tablica[27]);

		for (int i = 0; i <= 26; i++) {
			cout << tablica[i] << ", ";
		}
}

