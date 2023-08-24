#include <iostream>
#include <windows.h>
#include <math.h>
#include <sstream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;




int main()
{
	int n;
	long double fib[10000];
	double zloto[1000];
	double prop;
	
	
	

	cout << "Program wyznacza zloty podzial w zaleznosci od podanego n:" << endl;
	cout << "Podaj liczbe n (ilosc wyrazu ciagu fibonacciego: ";
	cin >> n;
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < n; i++)
	{
		cout <<i<<" wyraz ciagu fibonacciego wynosi:"<< fib[i] << endl;
	}
	for (int i = 1; i< n; i++)
	{
		zloto[i] = fib[i-1] / fib[i];
		cout <<"dziele "<<i-1<<" wyraz ciagu Fib przez "<<i<<" wyraz ciagu Fib wynikiem jest "<< zloto[i] << endl;
		
		cout <<"zloto i:  "<< zloto[i] << endl;
		cout << "moze teraz?:" << zloto[i]+zloto[i-1]+zloto[i-2];

	}
	
	
}

