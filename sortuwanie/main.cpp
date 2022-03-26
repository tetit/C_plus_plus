#include <iostream>
#include <time.h>
#include <windows.h>


using namespace std;

int ile;
clock_t start, stop;
double czas;

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

void quicksort(int *tab, int lewy, int prawy)
{
    int v=tab[(lewy+prawy)/2];
    int i, j, x;
    i=lewy;
    j=prawy;
    do
    {
        while (tab[i]<v) i++;
        while (tab[j]>v) j--;
        if(i<=j)
        {
            x=tab[i];
            tab[i]=tab[j];
            tab[j]=x;
            i++; j--;
        }
    }
        while(i<=j);
        if (j>lewy) quicksort(tab, lewy, j);
        if (i<prawy) quicksort(tab, i, prawy);
}

int main()
{
    cout << "Porownanie czasow sortowania v.1" << endl;
    cout<<"Ile losowych liczb w tablice: ";
    cin>>ile;

    //dynamiczna alokacja tablicy
    int *table;
    int *table2;
    table=new int[ile];
    table2=new int[ile];

    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
    for(int i=0; i<ile; i++)
    {
        table[i]=rand()%100000+1;
        table2[i]=table[i];
        //cout<<table[i]<<" ";
    }

    cout<<"Teraz sortuje babelkowo."<<endl;
    start=clock();
    sortowanie_babelkowe(table, ile);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
/*     for(int i=0; i<ile; i++)
    {
        cout<<table[i]<<" ";
    }
*/
    cout<<endl<<"Czas sortuwania babelkowego: "<<czas<<" s"<<endl;

    cout<<"Teraz sortuje quicksort."<<endl;
    start=clock();
    quicksort(table2, 0, ile-1);
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
/*     for(int i=0; i<ile; i++)
    {
        cout<<table2[i]<<" ";
    }
*/
    cout<<endl<<"Czas sortuwania quicksort: "<<czas<<" s"<<endl;

    delete [] table;
    delete [] table2;

    return 0;
}
