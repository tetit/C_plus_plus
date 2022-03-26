#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout<<"Podaj imie: "; cin>>imie;

    int dlugosc=imie.length();
    //cout<<dlugosc;
    if (imie[dlugosc-1]=='a')
        cout<<"jestes kobieta";
    else cout<<"jestes facetem";

    string wyraz;
    cout<<endl<<"Podaj wyraz do odruczenia: "; cin>>wyraz;
    int len=wyraz.length();

    for(int i=(len-1); i>=0; i--)
    {
        cout<<wyraz[i];
    }


    return 0;
}
