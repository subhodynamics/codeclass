#include<iostream>
using namespace std;
int main()
{
    int i,a,b;
    cin>>a>>b;
    string c[]={"","one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            cout<<c[i]<<endl;
        }
        if(i>9)
        {
            if(i%2==0)
            cout<<"even \n";
            else
            cout<<"odd \n";
        }
    }
    return 0;
}