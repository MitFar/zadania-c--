/*
W main() napisz program, który w tablicy jednowymiarowej umieści dziesięć liczb
pseudolosowych w wybranym zakresie i wyświetli je w jednym wierszu – przedzielonych
wybranym znakiem
*/
//Mateusz Franków 259740
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int liczby[10];
	int a,b;
	srand(time(NULL));
	cout << "Wylosuje 10 losowych liczb z podanego zakresu!" << endl << "Mam losowac od: " << endl;
	cin >> a;
	cout << "Mam losowac do: " << endl;
	cin >> b;
	cout << "Twoje losowe liczby to:" << endl;
	for (int i = 0; i <= 9; i++)
	{
		liczby[i] = a + rand() % (b - a + 1);
		cout << liczby[i] <<",";
	}


	return 0;
}