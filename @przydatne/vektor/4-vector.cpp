/*
Napisz funkcję, która otrzymuje dwa argumenty: dodatnią liczbę całkowitą
n oraz n-elementowy wektor tab o elementach typu int i:
sortuje rosnąco elementy tablicy tab (porządkuje elementy
przechowywane w tablicy w taki sposób aby ciąg
tab[0], tab[1],. . . ,tab[n-1] był ciągiem niemalejącym)
*/

#include <iostream>
#include <vector>

using namespace std;

void wczytaj(vector<int> &wektor, size_t n) {
  for (size_t i = 0; i < n; i++) {
    printf("%i wyraz: ", i);
    int liczba;
    scanf("%i", &liczba);
    wektor.push_back(liczba);
  }
}

void sortuj(vector<int> &wektor, int n) {
  bool czyPosortowane = false;
  while (!czyPosortowane) {
    czyPosortowane = true;
    for (int i = 0; i < n - 1; i++) {
      if (wektor[i] > wektor[i + 1]) {
        czyPosortowane = false;
        int temp = wektor[i];
        wektor[i] = wektor[i + 1];
        wektor[i + 1] = temp;
      }
    }
  }
}

void wyswietl(vector<int> &wektor) {
  for (int i = 0; i < wektor.size(); i++) {
    cout << "Na pozycji " << i << " jest " << wektor[i] << endl;
  }
}

int main() {

  vector<int> wektor;
  size_t n;
  printf("Ile elementów chcesz wpisać? \n");
  cin >> n;

  size_t ileSortowac;
  printf("Ile elementów chcesz przesortować? \n");
  cin >> ileSortowac;

  wczytaj(wektor, n);
  sortuj(wektor, ileSortowac);
  wyswietl(wektor);

  return 0;
}
