/*  name : Subhadeep pathak
    roll : 10800120176
    batch : d3
    date :- 03/05/2021
*/

#include <stdio.h>
  
int main()
{
    int A, B, C;
  
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
  
    if (A >= B && A >= C)
    printf("%d is the largest number.", A);
  
    if (B >= A && B >= C)
    printf("%d is the largest number.", B);
  
    if (C >= A && C >= B)
    printf("%d is the largest number.", C);
    
    return 0;
}

//max = A > B ? (A > C ? A : C) : (B > C ? B : C);