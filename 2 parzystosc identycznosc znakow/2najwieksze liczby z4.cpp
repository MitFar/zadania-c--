#include <iostream>
#include <climits>
using namespace std;

int main( )
{
int A, B, C,D, max1, max2;
cout <<"Podaj 4 rozne cyfry\n";
cout << "Podaj pierwsza liczbe: ";
cin >> A ;
cout << "Podaj druga liczbe: ";
cin >> B ;
cout << "Podaj trzecia liczbe: ";
cin >> C ;
cout << "Podaj czwarta liczbe: ";
cin >> D ;

if((A>=B) && (A>C) && (A>D) && (B>C) && (B>D)||(B>=A) && (B>C) && (B>D) && (A>C) && (A>D)) max1=A, max2=B; /* dla A i B max */
if((A>=C) && (A>B) && (A>D) && (C>B) && (C>D)||(C>=A) && (C>B) && (C>D) && (A>B) && (A>D)) max1=A, max2=C; /* dla A i C max */
if((A>=D) && (A>B) && (A>C) && (D>B) && (D>C)||(D>=A) && (D>B) && (D>C) && (A>B) && (A>C)) max1=A, max2=D; /* dla A i D max */
if((B>=C) && (B>A) && (B>D) && (C>A) && (C>D)||(C>=B) && (C>A) && (C>D) && (B>A) && (B>D)) max1=B, max2=C; /* dla B i C max */
if((B>=D) && (B>A) && (B>C) && (D>A) && (D>C)||(D>=B) && (D>A) && (D>C) && (B>A) && (B>D)) max1=B, max2=D; /* dla B i D max */
if((C>=D) && (C>A) && (C>B) && (D>A) && (D>C)||(D>=C) && (D>A) && (D>B) && (C>A) && (C>B)) max1=C, max2=D; /* dla C i D max */





cout << endl << " Najwieksze wartosci to: " << max1<<" i "<<max2;
cin.ignore( INT_MAX, '\n' );
cin.get();
return 0;
}
