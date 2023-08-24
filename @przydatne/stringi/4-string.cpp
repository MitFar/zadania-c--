/*
Napisz funkcję kopiujn, ktora dostaje w argumentach dwie tablice
znakow nap1, nap2 oraz liczbę n i przekopiowuje n pierwszych znakow
z napisu przechowywanego w tablicy nap1 do tablicy nap2. W przypadku
gdy napis w tablicy nap1 jest krotszy niż n znakow, funkcja
powinna po prostu przepisać cały napis. Funkcja powinna zadbać o to,
żeby na końcu napisu w tablicy nap2 znalazł się znak o kodzie 0.
Zakładamy, że w docelowej tablicy jest wystarczająco dużo miejsca.
*/

#include <iostream>

using namespace std;

void kopiujn(string &nap1, string &nap2, int n) {

  nap2 = nap1.substr(0, n);
}

int main() {

  string nap1 = "Przykladowy tekst do skopiowania";
  string nap2;
  int n;
  printf("Ile znaków chcesz przepisać? \n");
  cin >> n;

  kopiujn(nap1, nap2, n);
  cout << nap2 << endl;

  return 0;
}
