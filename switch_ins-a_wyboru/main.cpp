#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y; char a;

int main()
{
    for (;;) //petla nieskoncziona ecze while(true)
    {


    cout << "Podaj 1 licbe: ";
    cin>>x;
    cout << "Podaj  licbe: ";
    cin>>y;

    cout<<endl;
    cout<<"MENU CLUWNE"<<endl;
    cout<<"-----------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Konic programu"<<endl;


    cout<<endl;
    a=getch();

    switch(a)
    {
        case '1': cout<<"Suma = "<<x+y; break;
        case '2': cout<<"Roznica = "<<x-y; break;
        case '3': cout<<"Iloczyn = "<<x*y; break;
        case '4': if (y==0) cout<<"Nie dzielimy przez zero!";
                else cout<<"Iloraz = "<<x/y; break;
        case '5': exit(0);
        default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar(); getchar();
    system("cls");

    }

    return 0;
}
