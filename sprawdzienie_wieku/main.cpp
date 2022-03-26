#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat:";
    cin>>wiek;

    if (wiek<18)
    {
        cout<<"Nie jestes pelnjletni i nie mozesz zostac prezydentem";
    }
    else if (wiek>=18 && wiek<35)
    {
        cout<<"Jestes pelnjletni ale nie mozesz zostac prezydentem";
    }
     else
    {
        cout<<"Jestes pelnjletni i mozesz zostac prezydentem";
    }
    return 0;
}
