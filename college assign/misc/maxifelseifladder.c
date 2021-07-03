/*  name : Subhadeep pathak
    roll : 10800120176
    batch : d3
    date :- 03/05/2021
    largest among 3 using if else ladder
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        printf("Greatest number is %d",a);
    }
    else if(b>a && b>c){
        printf("Greatest number is %d",b);
    }
    else{
        printf("Greatest number is %d",c);
    }
    getch();
}