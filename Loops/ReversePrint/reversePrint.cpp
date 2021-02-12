#include<iostream>
using namespace std;
int main()
{
    int n,t,r=0;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Enter a no ";
        cin>>n;
        while(n>0)
        {
            r=n%10;
            n=n/10;
            cout<<r;
        }
        cout<<"\n";
    }    
    return 0;
}