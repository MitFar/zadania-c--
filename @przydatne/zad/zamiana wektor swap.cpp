#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>

using namespace std;

int fx(vector<int> &x);

int main()
{
	vector<int> vec;
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		vec.push_back(rand() % 12 +1);
		cout << vec[i] << " ";	
	}
		
	cout << endl << "Bylo " << fx(vec) << " zmian " << endl;
	for(int i = 0; i < 10; i++)
	{
		cout << vec[i] << " ";	
	}
	
}

int fx(vector<int> &x)
{
	int j = x.size() -1 , i = 0, s = 0;
	while(i < j)
	{
		swap(x[i], x[j]);
		i++;
		j--;
		s++;
	}
	return s;
}
