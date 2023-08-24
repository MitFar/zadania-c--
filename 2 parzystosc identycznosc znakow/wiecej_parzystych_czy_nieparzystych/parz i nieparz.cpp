#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int liczba1, liczba2, liczba3, liczba4;
    int l1, l2, l3, l4;
    int wynik;

    cout << "wprowadz liczbe1" << endl;
    cin >> liczba1;
      cout << "wprowadz liczbe2" << endl;
    cin >> liczba2;
      cout << "wprowadz liczbe3" << endl;
    cin >> liczba3;
      cout << "wprowadz liczbe4" << endl;
    cin >> liczba4;

    if (liczba1%2==0) l1=1; /* czy ma reszte przy dzieleniu na 2, jak nie to wartosc 1 jak tak to 2 */
    else l1=2;
    if (liczba2%2==0) l2=1;
    else l2=2;
    if (liczba3%2==0) l3=1;
    else l3=2;
    if (liczba4%2==0) l4=1;
    else l4=2;

    wynik=l1+l2+l3+l4;   /* 1+1+1+1=4 1+1+1+2=5 1+1+2+2=6 1+2+2+2=7 2+2+2+2=8 es */
    if (wynik<6) cout<<"wiecej jest liczb parzystych\n";
    if (wynik>6) cout<<"wiecej jest liczb nieparzystych\n";
    if (wynik==6) cout<<"jest tyle samo parzystych co nieparzystych\n";





    return 0;
}
