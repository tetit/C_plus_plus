#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string _1="Ala ma ";
    string _2="Kota";
    string _3=_1+_2;
    cout << _3<< endl;

    string napis="Ala ma kota";

    transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
    cout<<napis<<endl;
    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
    cout<<napis<<endl;

    string szukaj="kot";
    size_t pozycja=napis.find(szukaj);
    if (pozycja!=string::npos)
        cout<<"Znaleziono na pozycji: "<<pozycja<<endl;
    else cout<<"Nie znaleziono!"<<endl;

    napis.erase(3,3);
    cout<<napis<<endl;

    napis.insert(8," Filemona");
    cout<<napis<<endl;

    napis.replace(3,1," nie ma ");
    cout<<napis<<endl;

    string newnapis=napis.substr(4,7);
    cout<<newnapis<<endl;



    return 0;
}
