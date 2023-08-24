/*
 Zdefiniuj strukturę student ze składnikami: album, wydział, kierunek i semestr. W funkcji
main() powołaj strukturę typu student i wypełnij treścią z własnymi danymi. Napisz funkcję do
wyświetlania na ekranie struktury, która w argumencie dostanie adres na strukturę student i
wyświetli strukturę w sposób sformatowany z użyciem manipulatorów dla cout. Zabezpiecz
strukturę przed omyłkową zmianą wartości składników wewnątrz funkcji.
*/
//Mateusz Franków 259740

#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct student
{
    int album, semestr;
    string wydzial, kierunek;
}ja;

void wyswietl(student &baza)
{
    cout << baza.album << " " << baza.wydzial << " " << baza.kierunek << " " << baza.semestr << endl;
}


int main()
{
    string mystr;

    ja.album = 259740;
    ja.semestr = 1;
    ja.wydzial = "Wydzial Elektroniki";
    ja.kierunek = "teleinformatyka";
    wyswietl(ja);
    
    return 0;
}


