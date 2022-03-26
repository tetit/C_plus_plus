 #include <iostream>
 #include <cstdlib>
 #include <time.h>
 #include <stdio.h>
 #include <windows.h>

using namespace std;

int liczba, strzal, ile_prob=0;

int main()
{
   /* cout << "Witaj! Pomyszlalem sobie liczbe 1...100" << endl;
    srand(time(NULL));
    liczba=rand()%100+1;
    //cout<<liczba<<endl;

    while(strzal!=liczba)
    {
        ile_prob++;

        cout<<"Zgadnij jaka (to Twoja "<<ile_prob<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"Udalo sie! Wygrywasz w "<<ile_prob<<" probie"<<endl;
        else if(strzal<liczba)
            cout<<"To za malo"<<endl;
        else if(strzal>liczba)
            cout<<"To za duzo"<<endl;
    }

    //system("pause");
    getchar(); getchar(); //dla pewnosti 2 razy */

    cout<<"Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady"<<endl;
    Sleep(3000);
    srand(time(NULL));

    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        Sleep(1000);
        cout<<liczba<<"\a"<<endl;
    }


    return 0;
}
