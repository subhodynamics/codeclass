/*  name : Subhadeep pathak
    roll : 10800120176
    batch : d3
    date :- 03/05/2021
*/

#include <conio.h>
#include<stdio.h>
int main()
{
    int A, B, C;
  
    printf("Enter three numbers: ");
    scanf("%d %d %d",&A,&B,&C);
  
    if (A>=B) 
    {
        if (A>=C)
        printf("%d is the largest number.",A);
        else
        printf("%d is the largest number.",C);
    }
    else 
    {
        if (B>=C)
        printf("%d is the largest number.",B);
        else
        printf("%d is the largest number.",C);
    }
  
    return 0;
}