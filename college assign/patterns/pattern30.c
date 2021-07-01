//Subhadeep pathak 176 30
#include<stdio.h>
int main()
{
    int n;
    printf("\nENter the value of n :  ");
    scanf("%d", &n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
        for(int k=n;k>=i;k--)
        printf(" ");
    }
    return 0;
}