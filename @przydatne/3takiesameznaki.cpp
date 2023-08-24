#include <iostream>

using namespace std;

int main( )
{
    char A, B, C, D;
    cout<< "podaj znak pierwszy:";
    cin>>A;
    cout<< "podaj znak drugi:";
    cin>>B;
    cout<< "podaj znak trzeci:";
    cin>>C;
    cout<< "podaj znak czwarty:";
    cin>>D;

    if(A==B && B==C || A==B && B==D || A==C && C==D || B==C && C==D) cout<<"Przynajmniej 3 znaki sa identyczne";
    else cout<<"Nie ma 3 identycznych znakow";




return 0;
}
