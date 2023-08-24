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

void kopiujn(char *nap1, char *nap2, int n) {
  for (int i = 0; i < n; i++) {
    nap2[i] = nap1[i];
  }
  nap2[n] = '\0';
}

void wypisz(char *nap2, int n) {
  for (int i = 0; i < n; i++) {
    cout << nap2[i];
  }
  cout << endl;
}

int main() {

  char nap1[] = "Przykladowy tekst do skopiowania";
  char nap2[100];
  int n;
  printf("Ile znaków chcesz przepisać? \n");
  cin >> n;

  kopiujn(nap1, nap2, n);
  wypisz(nap2, n);

  return 0;
}
