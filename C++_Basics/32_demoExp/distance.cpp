#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,y1,x2,y2;
    float dist;
    cout<<"enter x1 x2 y1 y2";
    cin>>x1>>x2>>y1>>y2;
    dist=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<"distance ="<<dist;
    return 0;
}