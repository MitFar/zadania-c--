/*
Narysuj rekurencyjnie literę C utworzoną z zadanych w argumencie funkcji znaków, np. ‘*’ o
zadanej wysokości i obliczonej szerokości równej połowie wysokości.
*/
//Mateusz Franków 259740

#include <stdio.h>
#include <iostream>
using namespace std;
#define skrocony(ch, height) rekurencyjny(ch, height, height/2, height)
void rekurencyjny(char ch, int height, int width, int orig_height) {
    cout << ch;
    if (width > 1) {
        rekurencyjny(ch, 0, width - 1, orig_height);
    }
    else {
        cout<<"\n";
    }
    if (height > 2) {
        rekurencyjny(ch, height - 1, 0, orig_height);
    }
    if (height == 2) {
        rekurencyjny(ch, 0, orig_height / 2, orig_height);
    }
}

int main() {
    skrocony('*', 10);
    cout<<"\n";
    return 0;
}