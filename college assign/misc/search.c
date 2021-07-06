#include<stdio.h>
int main()
{
    int n,a[5],temp=0;
    printf("Enter 5 nos :");
    for(int i=0; i<5; i++)
    scanf("%d", &a[i]);
    printf("Enter number to search ");
    scanf("%d", &n);
    for(int i=0; i<5; i++)
    {
        if(a[i]==n)
        {
            printf("Found at index %d",i+1);
            temp=1;
        }
      
    }
    if(!temp)
    printf("Number not found");
    return 0;
}