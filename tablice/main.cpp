#include <iostream>

using namespace std;

float oceny[5], suma=0, srednia;

int main()
{
    for (int i=0; i<5; i++)
    {
        cout<<"Podaj "<<i+1<<" ocene:"<<endl;
        cin>>oceny[i];
        suma+=oceny[i];
    }
    cout<<endl<<"suma = "<<suma<<endl;
    srednia=suma/5;
    cout<<"srednia = "<<srednia;

    return 0;
}
