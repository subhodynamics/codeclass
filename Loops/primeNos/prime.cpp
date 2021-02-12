#include<iostream>
using namespace std;
int main()
{
    int n,count; cin>>n; count=0;
    for(int i=1;i<=n;i++)
    {
        if(count<=3)
        {
            if(n%i==0)
            count++;
        }
    }
    if(count==2)
    cout<<"prime";
    else
    cout<<"not prime";
    return 0;
}