#include<iostream>
using namespace std;
int main()
{
    int a[8]={23,12,23,49,3,56,45,1};
    int sum=0;
    for(int x:a)
    sum+=x;
    cout<<sum;
    return 0;
}