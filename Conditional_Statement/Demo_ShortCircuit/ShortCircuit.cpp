#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    a=10;b=5;i=5;
    if(a>b && ++i<=b)   //this ++i will not be executed when 1st part is false
    {
    }
    cout<<i;
    return 0;
}