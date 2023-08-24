#include <iostream>
#include <string>
using namespace std;

int dlugoscimienia(string imie)
{
	int dlugosc = imie.length();//wypisuje dlugosc imienia
	return dlugosc;
}
string plec(string imie)
{
	int dlugosc = imie.length();
	if (imie[dlugosc - 1] == 'a')//odczytuje ostatnia litere i sprawdzam czy jest = a, dlugosc -1 poniewaz ostatni znak wyrazu w stringu to 0
		return "K";
	else
		return "M";
}
string odwroc(string imie) //odwraca imie 
{
	int dlugosc = imie.length();
	string x;
	for (int i = dlugosc - 1; i >= 0; i--)
	{
		cout <<imie[i];
	}
	return " ";//zwraca spacje i couta
}


int main()
{
	string imie;
	cout << "Podaj imie:";
	cin >> imie;
	cout << "Twoje imie ma: " << dlugoscimienia(imie) <<" znakow."<< endl;
	cout << "Twoja plec to: " << plec(imie) << endl;
	cout <<odwroc(imie)<<endl;
	return 0;
}
