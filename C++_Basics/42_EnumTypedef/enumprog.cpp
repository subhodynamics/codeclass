#include<iostream>
using namespace std;
    //enum is defined outside the main function
enum day{mon,tue,wed,thu,fri,sat,sun}; //these are set of constant, cannot me modified in the main()
int main()
{
    day d;  //defined data type
    d=mon;
    //d++; this kind of modification is not possible
    cout<<tue<<endl;
    cout<<d<<endl;
    return 0;
}