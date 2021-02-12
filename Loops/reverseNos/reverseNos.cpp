#include<iostream>
using namespace std;
int main()
{
    int t,n,rev=0,r;
    cin>>t;
    //t=1;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        //n=45900;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        }
        cout<<rev<<"\n";
        rev=0;
        r=0;
    }
    return 0;
}