#include<iostream>
using namespace std;
int main()
{
    int n,sum; sum=0;
    cin>>n; //no of terms
    for (int i=0; i<n; i++)
    {
        int s;
        cin>>s; //enter numbers
        sum+=s;
    }
    cout<<"\t"<<sum;
    return 0;
}    