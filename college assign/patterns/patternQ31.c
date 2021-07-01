//Subhadeep pathak 176 31
#include<stdio.h>
int main()
{
    int n;
    printf("\nENter the value of n :  ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=n;j>i;j--)
        printf(" ");
        for(int j=1; j<=i; j++)
        printf("%d",j);
      printf("\n");
    }
    return 0;
}