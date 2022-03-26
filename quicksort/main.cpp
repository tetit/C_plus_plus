#include <iostream>

using namespace std;

int ile;

void quicksort(int *tab, int lewy, int prawy)
{
    int v=tab[(lewy+prawy)/2];


    cout<<"v_os="<<v<<endl;
    cout<<"*tab"<<*tab<<endl;
    cout<<"&tab"<<&tab<<endl;
    cout<<"tab0="<<tab[2]<<endl;

    int i, j, x;
    i=lewy;
    j=prawy;
    do
    {
        while (tab[i]<v) i++;
        while (tab[j]>v) j--;
        //cout<<"tabi1["<<i<<"]="<<tab[i]<<endl;
        //cout<<"tabj1["<<j<<"]="<<tab[j]<<endl;

        if(i<=j)
        {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            cout<<"tabi2["<<i<<"]="<<tab[i]<<endl;
            cout<<"tabi2["<<j<<"]="<<tab[j]<<endl;
            i++; j--;
        }
        cout<<"i="<<i<<", j="<<j<<endl;
    }

        while(i<=j);
        if (j>lewy) quicksort(tab, lewy, j);
        if (i<prawy) quicksort(tab, i, prawy);
}


int main()
{
    cout<<"Ile liczb w tablice: ";
    cin>>ile;

    int *table;
    table=new int[ile];
    for (int i=0; i<ile; i++)
    {
        cin>>table[i];
    }

    delete [] table;

    quicksort(table, 0, ile);
    return 0;
}
