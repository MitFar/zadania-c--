#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string klej(string nap1, string nap2) // funkcja laczy 2 napisy
{
	string nap3;
	nap3 = nap1 + nap2;
	return nap3;

}
string szukaj(string nap1) // wyszukuje na kotej pozycji jest napis szukaj="kot"
{
	string szukaj = "KOT";
	size_t pozycja = nap1.find(szukaj);
	if (pozycja != string::npos)
		cout <<"Napis kot w nap1 znaleziono na pozycji: "<< pozycja;
	else cout << "nie ma";
	return " ";
}
string usun(string nap2)//usuwa dane wyrazy
{
	
	nap2.erase(3, 3);//erase(od ktorego znaku, ile znakow)
	return nap2;

}
string dodaj(string nap2)
{
	nap2.insert(11, " Miske");//dodaje po 11 znaku napisu 2 wyraz Miska // insert(od ktorego, co dodajc)
	return nap2;
}
string zastap(string nap2)//zastepuje wybrane wyrazy innymi
{
	nap2.replace(4, 2, "nie ma");//replace(od ktorego wyrazu, za ile wyrazow, czym zastapic)
	return nap2;
}
string wyciecie(string nap1)// wycina dany zakres znakow
{
	string nowy_napis = nap1.substr(4, 7);//substr(od ktorego, ile wyciac)
	return nowy_napis;
}

int main()
{
	string napis1, napis2;
	cout << "Podaj napis" << endl;
	getline(cin, napis1);
	getline(cin, napis2);
	cout <<"Przed zmianami:"<< klej(napis1, napis2) << endl;
	transform(napis1.begin(), napis1.end(), napis1.begin(), ::toupper); //zmienia all litery napisu1 na duze litery
	transform(napis2.begin(), napis2.end(), napis2.begin(), ::tolower);// zmiania all litery napisu2 na male 
	cout <<"Po zamianach: "<< klej(napis1, napis2) << endl;
	cout <<szukaj(napis1) << endl;
	cout <<"Napis2 po usunieciu danych wyrazow: "<< usun(napis2) << endl;
	cout << "Napis2 po dodaniu: " << dodaj(napis2) << endl;
	cout << "Napis2 po zastapieniu: " << zastap(napis2) << endl;
	cout << "Napis1 po wycieciu: " << wyciecie(napis1) << endl;
	
}
