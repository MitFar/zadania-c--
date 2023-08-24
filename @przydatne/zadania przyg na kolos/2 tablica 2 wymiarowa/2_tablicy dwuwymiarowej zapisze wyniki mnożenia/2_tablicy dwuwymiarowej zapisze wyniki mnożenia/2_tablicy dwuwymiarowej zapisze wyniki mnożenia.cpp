/*
 W main() napisz program, który w tablicy dwuwymiarowej zapisze wyniki mnożenia z „tabliczki
mnożenia” (od 1 do 9). Następnie wydrukuj na ekran zawartość tablicy z zachowaniem wierszy i
kolumn.
*/
//Mateusz Franków 259740
#include <iostream>
using namespace std;
int main()
{
	int tablica[10][10];
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			tablica[i][j] = i * j;
			cout << tablica[i][j] << " ";
		}
		cout<<""<<endl;
	}
	return 0;
}