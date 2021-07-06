//!Subhadeep pathak 176
#include<stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=2; i<=n; i++)
    f*=i;
    return(f);
}

int main ()
{
    int n;
    float sum=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=(float)i/fact(i);
        printf("%d/%d!\t",i,i);
    }
    printf("\nsum = %f",sum);
    return 0;
}