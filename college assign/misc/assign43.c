//! Subhadeep pathak 176 Q43h
#include<stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}, key, i, t = 0;
    printf("Enter key: ");
    scanf("%d",&key);
    for(i = 0; i < 10; i++){
        if(arr[i] == key){
            t = 1;
            break;
        }
    }
    if(t == 1)
    {
        printf("YES key is present");
    }
    else
    printf("NO key is not present");
    return 0;
}