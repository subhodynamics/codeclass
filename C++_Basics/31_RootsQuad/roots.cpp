#include<iostream>
#include<cmath> //for using sqrt
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"enter a b c ";
    cin>>a>>b>>c;
    r1=(-b+sqrt(b*b-4*a*c))/(2*a);
    r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<r1<<" "<<r2<<endl;
    return 0;
}