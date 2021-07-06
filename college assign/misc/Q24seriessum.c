#include<stdio.h>   //!Subhadeep pathak 176
int main()  
{
    int n;
    float s=0;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s+=(float)1/(i*i);
        printf("1/%d*%d\t",i,i);
    }
    printf("\n sum = %f",s);
    return 0;
}