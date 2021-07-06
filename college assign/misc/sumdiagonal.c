#include<stdio.h>
int main()
{
    int a[3][3],sum=0;
    printf("Enter values in 3X3 array : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++)
    {
        sum+=a[i][i];
    }
    printf("sum = %d\n",sum);
    return 0;
}