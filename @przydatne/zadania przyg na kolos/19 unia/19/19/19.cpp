/*Napisz program z użyciem unii o nazwie sezam z trzema składnikami: int, double oraz zespol,
W funkcji main() zademonstruj prawidłowe przypadki użycia unii dla każdego z jej składników.
*/
//Mateusz Franków 259740

#include <iostream>
using namespace std;

union sezam
{
    int zmienna1;
    double zmienna2;
    long long zmienna3;
};


int main()
{
    sezam a, b, c, d;
    cout << "podaj 3 liczby (pierwsza calkowita, druga zmienoprzecinkowa, trzecia typu long long): " << endl;
    cin >> a.zmienna1 >> b.zmienna2 >> c.zmienna2;
    d.zmienna2 = double(a.zmienna1 + b.zmienna2 + c.zmienna3) / 3;
    cout << "Srednia wynosi: " << d.zmienna2;
    return 0;
}


