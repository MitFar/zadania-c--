#include <iostream>
using namespace std;
int main()
{
int n;
cout << "Podaj n: ";
cin >> n;
cout << "Liczby podzielne bez reszty przez " << n << " to:" << endl;

for (int i=0; i <= 100; i++)
{
if ((i % n) == 0)
{
cout << i << " ";
}
}

char znak;
cin >> znak;
}


