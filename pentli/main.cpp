#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie; int liczba;
int populacja=1, godzin=0;

int main()
{
   /* cout<<"Podaj imie:";
    cin>>imie;
    cout<<"Podaj liczbe calkowite:";
    cin>>liczba;

    for (int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<imie<<endl;
    }

    for (int i=-13; i> -25; i-=2)
    {
        cout<<i<<endl;
    }

    for (int i=3; i>=0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
    cout<<"JEBUT";*/

    /*while(populacja<=1000000000)
    {
        godzin++;
        populacja*=2;
        cout<<"minelo godzin: "<<godzin<<"liczba bakterii: "<<populacja<<endl;
    }*/
    do
    {
        godzin++;
        populacja*=2;
        cout<<"minelo godzin: "<<godzin<<" liczba bakterii: "<<populacja<<endl;
    } while(populacja<100);

     return 0;
}
