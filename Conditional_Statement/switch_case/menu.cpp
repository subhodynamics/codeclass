#include<iostream>
using namespace std;
int main()
{
    int x,y,choice;
    cin>>choice>>x>>y;
    switch(choice)
    {
        case 1: cout<<x+y;
        break;
        case 2: cout<<x-y;
        break;  
        case 3: cout<<x*y;
        break;
        case 4: cout<<x/y;
        break;
    }
    return 0;
}