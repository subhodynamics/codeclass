//! 176_D3_Subhadeep pathak Q36
#include<stdio.h>
int main()
{
    int n,flag;
    scanf("%d", &n);
    flag=(n*2)-1;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=i;j--)
        printf(" ");
        for(int k=1;k<=flag;k++)
        printf("%d", k);
        flag-=2;
        printf("\n");
    }
    return 0;    
}
