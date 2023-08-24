/*
W main() zdefiniuj pusty wektor i dopisz do niego pięć naturalnych liczb pobranych z klawiatury
z zakresu od 1 do 20. Zabezpiecz proces wpisywania przed omyłkowym podaniem liczby spoza
zakresu. Wyświetl rozmiar wektora oraz wartości elementów. Następnie spowoduj, że wektor
ponownie będzie pusty i upewnij się, że ci się to udało wykonując odpowiedni test.
*/
//Mateusz Franków 259740
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	
	vector<int>wektor;
	cout << "Wprowadz 5 liczb naturalnych z przedzialu 1-20: " << endl;
	for (int i = 0; i <= 4; i++)
	{
		int x;
		cout << "Wprowadz " << i + 1 << " liczbe: " << endl;
		cin >> x;

		if (x > 20 || x < 1)
		{
			cout << "Wprowadziles wartosc z poza zakresu" << endl;
		}
		else
		{
			wektor.push_back(x);
		}
	}
	for (int i = 0; i <= 4; i++)
	{
		cout<<"Pokazuje wektor "<<i+1 <<" :wartosc elementu: "<< wektor[i]<< endl;
	}
	cout << "rozmiar wektora:" << wektor.size() << endl;
	wektor.clear();
	cout <<"rozmiar wektora po czyszczeniu: "<< wektor.size();
	
	return 0;
} 