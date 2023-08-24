#include<iostream>
using namespace std;

int main()
{

	char znak;
	cin >> znak; 

	while (znak != 'k') 
	{
		if (znak > 95) /*tylko litery */
			cout << (char)(znak - 32); /*przesuwa o 32 miejsca w kodzie ASCII przez co robi sie z duzej mala */
		else
			cout << znak;

		cin >> znak; 
	}

	cout << endl;

	system("pause");
	return 0;
}