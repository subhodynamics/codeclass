/*  Question no :- 16
    name : Subhadeep pathak
    roll : 10800120176
    batch : d3
    date :- 03/05/2021
    Alphabetical checking.
*/
#include<stdio.h>

int main()
{
    char a;
    printf("Enter a charecter: ");
    scanf("%c",&a);
    if(a >= 97 && a <= 122  || a >= 65 && a <= 90)
        printf("The charecter %c is an alphabate",a);
    else if(a >= 48 && a <= 57)
        printf("The charecter %c is a digit",a);
    else
        printf("The charecter %c is special symbol",a);

    return 0;
}