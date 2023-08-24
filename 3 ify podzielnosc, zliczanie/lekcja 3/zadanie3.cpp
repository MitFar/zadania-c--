#include<iostream>

using namespace std;

float min(float a, float b, float c, float d)

{

 

if (a <=b && a<=c && a<=d)

{



return a;

}

else if (b <=c && b<=d && b<=a)

{



return b;

}

else if (c <= d && c<=a && c<=b)

{



return c;

}

else if (d <= a && d<=b && d<=c)

{


return d;

}

}

float max(float a, float b, float c, float d)

{

 

if (a >= b && a>=c && a>=d)

{



return a;

}

else if (b >= c && b>=d && b>=a)

{



return b;

}

else if (c >= d && c>=a && c>=b)

{



return c;

}

else if (d >= a && d>=b && d>=c)

{



return d;

}

 

}

int main()

{

float a, b, c, d, wynik;

cout << "napisz 4 liczby rzeczywiste" << endl;

cin >> a;

cin >> b;

cin >> c;

cin >> d;


float minimum = min(a, b, c, d);

float maksimum = max(a, b, c, d);

wynik = (maksimum-minimum);

cout << "roznica liczy max i min to: " << wynik << endl;

system("pause");

return 0;

}
