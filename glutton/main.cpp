#include <iostream>

using namespace std;

int liczba, zapr, pudelko;

int main()
{
    cin>>liczba;


    for(int i=0; i<liczba; i++)
    {
        cin>>zapr>>pudelko;
        int poncz=0;
        int *p_time= new int[zapr];
        for(int j=0; j<zapr; j++)
        {
            cin>>p_time[j];
            poncz+=86400/p_time[j];
        }
        delete [] p_time;
        float i_pudel=poncz/pudelko;
        if (poncz%pudelko==0) cout<<i_pudel<<endl;
        else cout<<i_pudel+1<<endl;

    }
    return 0;
}
