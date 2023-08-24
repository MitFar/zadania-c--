#include <iostream>
using namespace std;
int main()
{
int a, b, roznica;
do
{
    cin>>a;
    cin>>b;
    roznica=abs(a-b);
    cout <<"wykonano instrukcje";
}
while (!(a+b>100) || !(roznica<20));
return 0;
}
