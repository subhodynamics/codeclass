#include<stdio.h>
int main()
{
    int a[4][4];
    printf("Enter a 4X4 Matix : ");
    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i>=j)
            printf("%d\t",a[i][j]);
            else
            printf(" ");
        }
    printf("\n");
    }
    return 0;
}