#include<iostream>
using namespace std;
int main()
{
    float basic,percentAllow,percentDeduct,netSalary;
    cout<<"enter basic salary";
    cin>>basic;
    cout<<"percentAllow";
    cin>>percentAllow;
    cout<<"percentDeduct";
    cin>>percentDeduct;
    netSalary = basic+basic*percentAllow/100-basic*percentDeduct/100;
    cout<<"netSalary= "<<netSalary<<endl;
    return 0;
}