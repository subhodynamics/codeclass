#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float r,area;
    cout<<"enter radius";
    cin>>r;
    area=22/7.0*r*r;
    cout<<"area= "<<area;
    getch();
    return 0;
}
/*there are many ways to write it as float, like:
area=(float)22/7*r*r; ans=153.928
area=22/7*r*r; ans=147
aea=3.14*r*r; ans=153.86
area=22/7.0*r*r; ans=154  */