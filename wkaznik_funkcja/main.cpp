#include <iostream>

using namespace std;

float sriednia(float *tab, int ile)
{
    float suma=0;

    for(int i=0; i<ile; i++)
    {
        suma+=*tab;
        *tab=999;
        tab++;
    }
    return suma/ile;
}

float sriednia2(float &a,float &b,float &c)
{

    return (a+b+c)/3;
}

int main()
{
    float tablica[3];
    tablica[0]=1.5;
    tablica[1]=0.8;
    tablica[3]=18.98;

    cout<<"Sriednia: "<<sriednia(tablica, 3)<<endl;

    cout<<tablica[0]<<endl;
    cout<<tablica[1]<<endl;
    cout<<tablica[2]<<endl;

    float a, b, c;
    a=2.69;
    b=98.58;
    c=587.586;

    cout<<"Sriednia 2: "<<sriednia2(a,b,c)<<endl;

    return 0;
}
