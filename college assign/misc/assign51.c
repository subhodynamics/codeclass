//! Subhadeep pathak 176 Q51

#include <stdio.h>

void ins(int k, int num[])
{
    int i;
    num[10] = k;
    printf("New array is :\t");
    for(i=0;i<=10;i++)
    {
        printf("%d\t",num[i]);
    }
}

void del(int k, int num[])
{
    int i;
    for(i=0;i<10;i++)
    {
        if(k==num[i])
        {
            num[i] = 0;
            break;
        }
    }
        printf("New array is : ");
        for(i=0;i<10;i++)
        {
            if(num[i] > 0)
            {
            printf("%d\t",num[i]);
            }
            else
            continue;
        }
    
}

int main()
{
    float result;
    int choice, num;
    printf("Press 1 for inserting a key element into an array\n");
    printf("Press 2 for deleting a key element from an Array\n");
    printf("Press 3 to Exit from Menu\n");
    printf("Enter your choice:\n");
    choice = input();
      
    switch (choice) {
    case 1: {
         int i,k, num[] = {1,2,3,4,5,6,7,8,9,10};
         printf("THe array is:\n");
         for(i=0;i<10;i++)
        {
            
            printf("%d\t",num[i]);
            }
    printf("\nEnter the key element to be inserted\t");
    scanf("%d",&k);
    ins(k,num);
        
        
        break;
    }
    case 2: {
        int i, k, num[] = {1,2,3,4,5,6,7,8,9,10};
        printf("THe array is:\n");
         for(i=0;i<10;i++)
        {
            
            printf("%d\t",num[i]);
            }
    printf("\nEnter the key element to be deleted\n");
    scanf("%d",&k);
    del(k,num);
        
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