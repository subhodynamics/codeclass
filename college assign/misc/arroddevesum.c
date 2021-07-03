#include<stdio.h>
int main()
{
    int a[5],o,e;
    o=e=0;
    printf("Enter 5 numbers : ");
    for (int i = 0; i < 5; i++)
    scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
    {
        if(!(a[i]%2))
        e=e+a[i];
        else
        o=o+a[i];
    }    
    printf("Summ of odd %d",o);
    printf("\nSume of even %d",e);
    return 0;
}