#include <iostream>
#include <windows.h>
#include <math.h>
#include <sstream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;


float delta(float a, float b, float c)
{
	
	return (b * b) - (4 * a * c);
}
float pierwdelta(float delta)
{
	return  sqrt(delta);
}
float pierwiastek1(float pdelta, float a, float b)
{
	float x1;
	x1 = ((-b) - pdelta) / (2 * a);
	return x1;
}
float pierwiastek2(float pdelta, float a, float b)
{
	float x2;
	x2 = ((-b) + pdelta) / (2 * a);
	return x2;
}
float rownanie(float b, float c)
{
	return (-c) / b;
}


int main()
{
	float a, b, c;
	char koniec;
	for (;;)
	{


		{
			cout << "Wprowadz wspolczynnik stojacy przy x^2:" << endl;
			cin >> a;
			cout << "Wprowadz wspolczynnik stojacy przy x:" << endl;
			cin >> b;
			cout << "Wprowadz wyraz wolny:" << endl;
			cin >> c;
			if (a == 0)
			{
				cout << "Wynikiem dzialania jest:\n" "x=" << rownanie(b, c) << endl;
			}
			else if (a != 0)
			{
				if (delta(a, b, c) < 0)
				{
					cout << "Brak rozwiazan w dziedzinie liczb rzeczywistych" << endl;
				}
				else if (delta(a, b, c) >= 0)
				{
					cout << "Pierwiastek z delty wynosi: " << pierwdelta(delta(a, b, c)) << endl;
					cout << "X1=" << pierwiastek1(pierwdelta(delta(a, b, c)), a, b) << endl;
					cout << "X2=" << pierwiastek2(pierwdelta(delta(a, b, c)), a, b) << endl;
				}
			}


		}
	

		
		cout << "Jesli chcesz przerwac prace programu wpisz k, jezeli chcesz kontunuowac wpisz dowolny znak." << endl;
		cin >> koniec;
		if (koniec == 'k') break;
		else if (koniec != 'k')
		{
			system("cls");
		}

	}

}


	

