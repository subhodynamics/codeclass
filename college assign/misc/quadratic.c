/*  Question no :- 15
    name : Subhadeep pathak
    roll : 10800120176
    batch : d3
    date :- 03/05/2021
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter coefficient of x^2,x and constant term.");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b-4*a*c;
    
    if(D<0)
    printf("Both roots are imaginary.");
    
    if(D==0)
    {
        printf("Both roots are equal.");
        x=-b/(2*a);
        printf("\n And roots is %f",x);
    }
    if(D>0)
    {
        printf("Both roots are real and distinct.");
        x=(-b+sqrt(D))/(2*a);
        y=(-b-sqrt(D))/(2*a);
        printf("\n And roots are %f ,%f ",x,y);
    }

    return 0;
}