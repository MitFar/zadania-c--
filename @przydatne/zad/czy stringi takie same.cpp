/* return 0 jesli sa takie same
return -1 jesi sa roznej dlugosci 
return np. 4 to ma byc indeks pierwszego rozniacego sie znaku
*/
#include <iostream>
#include <string>

using namespace std;

int fx(const string &a,const string &b);

int main()
{
	string x = "Jakis string";
	string y = "Jakis stfbng";
	cout << fx(x, y);
	
}

int fx(const string &a,const string &b)
{
	if(a.size() != b.size())
	{
		return -1;
	}
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] != b[i])
		{
			return i;
		}
	}
	return 0;
}
