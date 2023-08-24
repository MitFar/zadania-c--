#include <iostream>
using namespace std;

double* kopiuj(unsigned int n, double* tablica) {
    double* tablica2;
    tablica2 = new double[n];

    for (int i = 0; i < n; i++) {
        tablica2[i] = tablica[i];
    }
    return tablica2;
}

int main()
{
    int n;
    cout << "podaj n: " << endl;
    cin >> n;
    double* tablica;
    tablica = new double[n];

    for (int i=0; i < n; i++)
    {
        double a;
        cout << "wprowadz " << i + 1 << " watosc: " << endl;
        cin >> a;
        tablica[i] = a;
    }


    double* wskaznikDoTablica2 = kopiuj(n, tablica);

    cout << "Kopia tablicy: ";
    for (int i = 0; i < n; i++) {
        cout << *(wskaznikDoTablica2 + i) << " ";
    }
    delete[] wskaznikDoTablica2;

    return 0;
}
