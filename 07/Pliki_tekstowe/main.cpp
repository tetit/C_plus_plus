#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: "; cin>>imie;
    cout << "Podaj nazwisko: "; cin>>nazwisko;
    cout << "Podaj nr telefonu: "; cin>>nr_tel;

    fstream plik;
    plik.open("wizytuwka.txt", ios::out | ios::app);
    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;
    plik.close();

    plik.open("wizytuwka2.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"plik nie istnije!";
        exit(0);
    }

    string linia;
    int nr_linii=1;

    while(getline(plik, linia))
    {
       switch(nr_linii)
       {
           case 1: imie = linia; break;
           case 2: nazwisko = linia; break;
           case 3: nr_tel = atoi(linia.c_str()); break;
       }

       nr_linii++;
    }
    plik.close();

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;



    return 0;
}
