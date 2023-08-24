#include <iostream>
#include <string>

using namespace std;

int fx(string &a);

int main()
{
	string x = "sdasdasDSAFGDSSGDSW343476a'4325432$#@$@#";
	cout << x << endl;
	cout << "Tyle bylo zmian w stringu : " << fx(x) << endl;
	cout << x;
		
}

int fx(string &a)
{
	int s = 0;
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
			s++;
		}
	}
	return s;
}
