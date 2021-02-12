#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter two numbers ";
    cin>>n>>m;
    while(n!=m)
    {
        if(n>m)
        n=n-m;
        else if(m>n)
        m=m-n;
    }
    cout<<"GCD is "<<n;
    return 0;
}