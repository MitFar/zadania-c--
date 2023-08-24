#include <iostream>
#include <string>
using namespace std;

int funckja_zlicz_znaki(const string &napis, const string &interp)
{
	int zlicz = 0;
	for(int i=0; i<napis.length();i++)
	{
		for (int j = 0; j < interp.length(); j++)
		{
			if (napis[i] == interp[j])
			{
				zlicz++;
			}
		}
	}
	return zlicz;
}
	
	


int main()
{
	string napis;
	string interpunkcja = ".,-;?!()";
	cout << "Wprowadz napis: " << endl;
	getline(cin, napis);
	cout << "Wprowadziles napis: " << napis << endl;
	cout <<"Liczba znakow interpunkcyjnych wynosi: " <<funckja_zlicz_znaki(napis, interpunkcja);
	return 0;
}
