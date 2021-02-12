#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int day=7;
    //cin >> day;
    switch(day)
    {
        default: cout<<"invalide choice";
        break;
        case 1: cout<<"sun";
        break;
        case 2: cout<<"mon";
        break;
        case 3: cout<<"tue";
        break;
        case 4: cout<<"wed";
        break;
        case 5: cout<<"thu";
        break;
        case 6: cout<<"fri";
        break;
        case 7: cout<<"sat";    //basically last choice pe break ka zaroort nhi hoga
        //break;
        //default: cout<<"Invalid day number";    //we can move declare default case anywhere above
    }
    _getch();
    return 0;
}