#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,m,r;
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    if(rev==m)
    cout<<"palindrome";
    else
    cout<<"not a palindrome";
    return 0;
}