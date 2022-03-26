#include <iostream>

using namespace std;

int f(int n)
{
    if (n==0) return 3;
    else return f(n-1)+2;
}

long int potega(int p, int w)
{
    if (w==0) return 1;
    else return p*potega(p, w-1);
}
long int fib(int n)
{
    if (n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}
long int silnia(int n)
{
    if (n==0) return 1;
    else return n*silnia(n-1);
}
int main()
{
    int x, a, b, n;
    cin>>x;
    cout << f(x) << endl;
    cin>>a>>b;
    cout<<potega(a,b)<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
    cout<<silnia(n)<<endl;


    return 0;
}
