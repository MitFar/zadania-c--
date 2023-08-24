#include <iostream>
#include <vector>

using namespace std;
void wypis(vector<int> wektor, int n);
void funkcja (vector<int> &wektor, int n);

int main()
{
    int t,n;
    cout << "Jak dlugi ma byc wektor" << endl;
    cin >> n;
    vector<int> wektor;
    for (int i=0; i != n;i++)
    {
        cin >> t;
        wektor.push_back(t);
    }
    funkcja(wektor,n);
    wypis(wektor,n);
    return 0;
}

void wypis(vector<int> wektor, int n)
{
    cout << "wynik" << endl;
    for(int i=0;i<n;i++)
    {
        cout << wektor[i] << endl;
    }
}

void funkcja (vector<int> &wektor,int n)
{
    int temp;
    temp = wektor[n-1];
    for (int i = n-1; i > 0;i--)
    {
        wektor[i] = wektor[i-1];
    }
    wektor[0] = temp;
}
