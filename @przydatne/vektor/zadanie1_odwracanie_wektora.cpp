#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

void odwrot_v( vector <int> & vec)
{
  vector <int> vec1;
  for(size_t i = 0; i < vec.size(); i++)
  {
    vec1.push_back(vec[vec.size()-1-i]);
  }

  for(size_t i = 0; i < vec.size(); i++ )
  {
    vec[i] = vec1[i];
  }
}


int main()
{
    vector <int> wektor;
    for( int i = 0; i < 10; i++ )
    {
        wektor.push_back( i );
        cout << i << ". " << wektor[i] << endl;
    }
    

    odwrot_v(wektor);

    cout << "Reversed:" << endl;
    for( int i = 0; i < 10; i++ )
    {
        wektor.push_back( i );
        cout << i << ". " << wektor[i] << endl;
    }
    return 0;
}




