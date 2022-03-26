#include <iostream>

using namespace std;

int a, b, c, m;

int main()
{
    cout << "Podaj 3 licby rozdielone spacja:"; cin>>a>>b>>c;

    m=a;
    if (b>m) m=b;
    if (c>m) m=c;

    cout<<"Najwieksza liczba: "<<m;


    return 0;
}
