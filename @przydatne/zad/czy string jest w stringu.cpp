#include <iostream>
#include <string>

using namespace std;

int fx(const string &a,const string &b);

int main()
{
	string x ="To jest zdanie!";
	string y ="danie";
	cout << fx(x,y);
	
}

int fx(const string &a,const string &b)
{
	int s;
	if(a.size() > b.size())
	{
		s = a.size();
	}
	else
	s = b.size();
	int j = 0;
	int k = 0;
	for(int i = 0; i < s; i++)
	{
		if(a[i] == b[j])
		{
			
			k++;
			if(k == b.size())
			{
				return i - j + 1;
			}
			j++;
		}
	}
	return 0;
}
