#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

void godzina(int godz, int min, int sek)
{
    string godz_s = to_string(godz);
    string min_s = to_string(min);
    string sek_s = to_string(sek);

    string result = "";
    result.append(godz_s);
    result = result + ":";
    result.append(min_s);
    result = result + ":";
    result.append(sek_s);  

    cout << result; 
}


int main()
{
    godzina(12, 30, 21);
}