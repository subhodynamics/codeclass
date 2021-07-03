#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,h;
    a=3;
    b=4;
    c=5;
    //! for right angle triangle
    printf("\narea RAT= %d",(a*b)/2);

    //! for isosceles triangle
    h=6;    //height
    printf("\narea isos tri = %d",(b*h)/2);

    //! equilateral triangle area
    int area=(sqrt(3)/4)*a;
    printf("\narea of equilateral tri = %d",area);

    //! area through herons formula
    int s= 9;  //semi perimeter
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\narea herons = %d",area);

    return 0;
}