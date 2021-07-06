#include<stdio.h>   //!Subhadeep pathak 176
#include<math.h>
int main()
{
    int a,r,n,sum=0;
    printf(" Enter first term, common ratio,no. of terms of a GP: ");
    scanf("%d %d %d",&a,&r,&n);
    
    sum=a*(pow(r,n)-1)/(r-1);
    printf("sum= %d",sum);
    printf("\n");

    //series with infinite loop
    for( ; ; )
    {
        if(n)
        {
        int s= a*(pow(r,n-1));
        printf("%d \t",s);
        --n;
        }
        else
        break;
    }
    return 0;
}