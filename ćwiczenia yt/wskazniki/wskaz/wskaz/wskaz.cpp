#include <iostream>

using namespace std;

int main()
{
	int ile;
	cin >> ile;
	int *tablica;
	tablica = new int[ile];

	for (int i = 0; i < ile; i++)
	{
		
		cout <<(int)tablica << endl;
		tablica++;
		
	}
	delete [] tablica;
	return 0;
}