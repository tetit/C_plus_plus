#include <iostream>

using namespace std;
string pin;

int main()
{
    cout << "Witaj" << endl;
    cout << "Podaj numer pin:";
    cin >> pin;

    if (pin=="1729")
    {
        cout<<endl<<"Poprawny pin";
    }
    else

    {
        cout<<endl<<"Niepoprawny pin";
    }

    return 0;
}
