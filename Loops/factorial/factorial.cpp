#include<iostream>
using namespace std;
int main()
{
    int fact,n; fact=1;
    cout<<"enter a no"<<"\t";
    cin>>n; cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<n<<" != "<<fact;
    return 0;
}