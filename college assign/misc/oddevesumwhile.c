#include<conio.h>
#include<stdio.h>
int main()
{
    int i=1,e=0,o=0;    //range is from 1 to 100
    while(i<=100)   // regulates the range
    {
        if(i%2==0)  //condition being checked
        e+=i;
        else
        o+=i;
        ++i;    //increament by 1
    }
    printf("\nSum of all even int = %d",e);
    printf("\nSum of all odd int = %d",o);
    return 0;
}
//! Subhadeep pathak 176