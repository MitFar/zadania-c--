#include <iostream>
#include <climits>
using namespace std;
// ZnajdŸ wartoœæ minimaln¹ z trzech wczytanych liczb
int main( )
{
int A, B, C,D, max1, max2;
cout << "Podaj pierwsza liczbe: ";
cin >> A ;
cout << "Podaj druga liczbe: ";
cin >> B ;
cout << "Podaj trzecia liczbe: ";
cin >> C ;
cout << "Podaj czwarta liczbe: ";
cin >> D ;

if((A>=B) && (A>C) && (A>D) && (B>C) && (B>D)||(B>=A) && (B>C) && (B>D) && (A>C) && (A>D)) max1=A, max2=B;






cout << endl << " Najwieksze wartosci to: " << max1<<" i "<<max2;
cin.ignore( INT_MAX, '\n' );
cin.get();
return 0;
}
