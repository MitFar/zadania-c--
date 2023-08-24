#include <iostream>
using namespace std;
int main()
{
char klawisz;
int l1= 0;
int l2 = 0;

cout << "Podawaj klawisze: " << endl;
cout << endl;
while (klawisz != 'k')
{
cin >> klawisz;
cout << "Wprowadziles: " << klawisz << endl;
l1++;
if (klawisz == 'a') 
{
l2++;
}
}
cout << endl << "Podales " << (l1-1) << " znakow." << endl;
cout << "Podales " << l2 << " liter a.";

char znak;
cin >> znak;
}


