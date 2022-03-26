#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int ile;
clock_t start, stop;
double czas;

int main()
{
    cout << "Ile liczb w tablicy:"; cin>>ile;
     int *tablica;
     tablica = new int [ile];

     start=clock();

     for(int i=0; i<ile; i++)
     {
         tablica[i]=i;
         tablica[i]+=50;

     }

     stop=clock();
     czas=(double)(stop-start)/CLOCKS_PER_SEC;
     cout<<"Czas zapisu bez wkaznika: "<<czas<<endl;

        delete [] tablica;

        int *wkaznik=tablica;
        tablica=new int[ile];
        start=clock();

     for(int i=0; i<ile; i++)
     {
         *wkaznik=i;
         *wkaznik+=50;
         wkaznik++;

     }

     stop=clock();
     czas=(double)(stop-start)/CLOCKS_PER_SEC;
     cout<<"Czas zapisu z wkaznikem: "<<czas<<endl;

        delete [] tablica;

    return 0;
}
