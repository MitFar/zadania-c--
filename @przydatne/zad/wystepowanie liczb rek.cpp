#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>


using namespace std;
int fx(const vector<int> &x, int y, int i = 0, int s = 0);

int main()
{
	srand(time(NULL));
	vector<int> vec;
	int y;
	int s = 1;
	for(int i = 0; i < 12; i++)
	{
		vec.push_back(rand() % 25 + 1);
		cout << vec[i] << "\t";
		if(s % 4 == 0)
		cout << endl;
		s++;
	}
	cin >> y;
	cout << "Liczba " << y << " wystapila " << fx(vec, y) << " razy" << endl;	
	
}

int fx(const vector<int> &x, int y, int i, int s )
{
	if(x[x.size() - 1 - i] == y)
	{
		s++;
	}
	
	if((x.size() - 1 - i) == 0)
	{
		return s ;	
	}	
	else
	return fx(x, y, i + 1, s);
	

}
