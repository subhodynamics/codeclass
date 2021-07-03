//! Subhadeep pathak 176 Q50

#include <stdio.h>
int add(int a[],int b[],int n)
{
    int i,sum[n];
    for(i=0;i<=n;i++)
    {
        sum[i]=a[i]+b[i];
    }
    for(i=(n);i>=0;i--)
    {
        printf("%dX^%d  ",sum[i],i);
        printf("+ ");
    }
    printf("0");
    
}
int multiply(int a[],int b[],int n)
{
    int i,j,product[n];
    for(i=0;i<=n;i++)
    {
        product[i] = a[i];
        for(j=0;j<=n;j++)
        {
            product[i] *= b[j];
        }
    }
     for(i=0;i<=n;i++)
     {
         printf("%dX^%d + ",product[i],i);
     }
    printf("0");
}
int main()
{
    float result;
    int choice, num;
    printf("Press 1 for Polynomial Addition\n");
    printf("Press 2 for Polynomial Multiplication\n");
    printf("Press 3 to Exit from Menu\n");
    printf("Enter your choice:\n");
    choice = input();
      
    switch (choice) {
    case 1: {
        int i,n;
printf("Enter the order of the polynomial\n");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the coffecients of 1st poly\n");
for(i=0;i<=n;i++)
{
    printf("Enter th coff of x^%d\n",i);
    scanf("%d",&a[i]);
    printf("\n");
}
printf("Enter the coffecients of 2nd poly\n");
for(i=0;i<=n;i++)
{
    printf("Enter th coff of x^%d\n",i);
    scanf("%d",&b[i]);
    printf("\n");
}
add(a,b,n);
        break;
    }
    case 2: {
        int i,n;
printf("Enter the order of the polynomial\n");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the coffecients of 1st poly\n");
for(i=0;i<=n;i++)
{
    printf("Enter th coff of x^%d\n",i);
    scanf("%d",&a[i]);
    printf("\n");
}
printf("Enter the coffecients of 2nd poly\n");
for(i=0;i<=n;i++)
{
    printf("Enter th coff of x^%d\n",i);
    scanf("%d",&b[i]);
    printf("\n");
}
multiply(a,b,n);
        
        break;
    }
    case 3: {
        
        break;
    }
    default:
        printf("wrong Input\n");
    }
    return 0;
}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}