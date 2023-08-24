#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	char napis[20];
	char* nap;
	nap = &napis[0];
	int n, m;
	cout << "Wprowadz napis:" << endl;
	cin >> napis;
	cout << "Wprowadz liczbe OD ktorej napis ma byc wyciety:" << endl;
	cin >> n;
	cout << " Wprowadz liczbe DO ktorej napis ma byc wyciety:" << endl;
	cin >> m;
	void wytnij(char* nap, int n, int m);
	

	

}
void wytnij(char *nap, int n, int m)
{
	int i, dl;
	
	for (dl = 0; nap[dl] != 0; dl++);
	if (dl + 1 > m)
	{
		for (i = 0; i + m < dl; i++)
			nap[n + 1] = nap[i + m + 1];
		
	}
	else if ((n < dl) && (dl + 1 < m))
		nap[n] = 0;

	
}

