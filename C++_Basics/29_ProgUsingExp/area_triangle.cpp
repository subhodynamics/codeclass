#include<iostream>
using namespace std;
int main()
{
    float a,b,h; //we can also take b,h as int and later get value in float a by typecasting
    cout<<"enter base and height "<<endl;
    cin>>b>>h;
    a=b*h/2; //for typecasting: a=(float)b*h/2; is used
    cout<<"area= "<<a;
    return 0;
}