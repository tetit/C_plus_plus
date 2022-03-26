#include <iostream>

#include <cmath>


using namespace std;

float l1, l2, l3, l4, l5, srednia, x, y;

int main()
{
    cout << "Podaj 5 liczb ze spaciej:"; cin>>l1>>l2>>l3>>l4>>l5;

    srednia=(l1+l2+l3+l4+l5)/5;
    cout<<"Srednia: "<<srednia<<endl;
    x=l1;
    if(abs(srednia-x)>abs(srednia-l2)) x=l2;
       else if(abs(srednia-x)==abs(srednia-l2)) y=l2;
    if(abs(srednia-x)>abs(srednia-l3)) x=l3;
        else if(abs(srednia-x)==abs(srednia-l3)) y=l3;
    if(abs(srednia-x)>abs(srednia-l4)) x=l4;
        else if(abs(srednia-x)==abs(srednia-l4)) y=l4;
    if(abs(srednia-x)>abs(srednia-l5)) x=l5;
        else if(abs(srednia-x)==abs(srednia-l5)) y=l5;

    if(y)
    cout<<"Liczba najblizsza sriedniej: "<<x<<", "<<y;
    else cout<<"Liczba najblizsza sriedniej: "<<x;
    return 0;
}
