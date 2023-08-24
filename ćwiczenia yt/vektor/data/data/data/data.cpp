#include <iostream>
#include <locale.h>
#include<vector>
#include <time.h>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "Polish");
	vector<string>dnitygodnia = { "Poniedzialek","Wtorek","Sroda","Czwartek","Piatek","Sobota","Niedziela" };
	vector<string>miesiace = { "Styczen","Luty","Marzec","Kwiecien","Maj","Czerwiec","Lipiec","Sierpien","Wrzesien","Pazdziernik","Listopad","Grudzien" };
	time_t czas = time(NULL);
	tm* teraz = localtime(&czas);
	cout << dnitygodnia[teraz->tm_wday] << ", " << teraz->tm_mday << " " << miesiace[teraz->tm_mon] << " " << (teraz->tm_year + 1900) << endl << teraz->tm_hour << ":" << teraz->tm_min << ":" << teraz->tm_sec;
	


	return 0;
}
