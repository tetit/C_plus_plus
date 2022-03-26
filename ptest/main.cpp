#include <iostream>
#include <cmath>


using namespace std;
int t, n;
float  sredn, r;

int main()
{
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int *mas=new int [n];
        float suma=0;
        for(int j=0; j<n; j++)
        {
            cin>>mas[j];
            suma+=mas[j];
        }
        sredn=suma/n;
        r=mas[0];
        for(int k=1; k<n; k++)
        {
            if (abs(r-sredn)>abs(mas[k]-sredn)) r=mas[k];
        }
        cout<<(int)r<<endl;
        delete [] mas;
    }

    return 0;
}
