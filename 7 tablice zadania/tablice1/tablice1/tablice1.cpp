#include <iostream>

using namespace std;

float tablica[10];

void wczytaj();
void wyswietl();

int main() {
    wczytaj();
    wyswietl();
}

void wczytaj() {
    for (int i = 0; i < 10; i++) {
        cout << "Wpisz liczbe do tablicy numer " << i + 1 << ": ";
        cin >> tablica[i];
    }
}

void wyswietl() {
    cout << endl << endl;
    for (int i = 0; i < 10; i++)
        cout << "Tab[" << i + 1 << "] = " << tablica[i] << endl;
}
