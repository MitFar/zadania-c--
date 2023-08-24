#include <iostream>
#include <string>
#include <memory>

using namespace std;

struct osoba
{
	string imie, nazwisko;
};

unique_ptr<osoba> fx(string x, string y);

int main()
{
	string imie = "Jan";
	string nazwisko = "Kowalski";
	unique_ptr<osoba> temp(new osoba);
	temp = fx(imie, nazwisko);
	cout << temp -> imie << " " << temp -> nazwisko;
}

unique_ptr<osoba> fx(string x, string y)
{
	unique_ptr<osoba> temp(new osoba);
	temp -> imie = x;
	temp -> nazwisko = y;
	return temp;
	
}
