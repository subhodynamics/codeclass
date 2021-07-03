//! Subhadeep pathak 176 Q44
#include<stdio.h>

int main()
{
    int arr[10] = {1,5,3,4,5,6,7,8,9,5}, key, i, t = 0, count = 0;
    printf("Enter key: ");
    scanf("%d",&key);
    for(i = 0; i < 10; i++){
        if(arr[i] == key){
                count++;
            t = 1;
        }
    }
    if(t == 1){
        printf("YES key is present and frequency is %d ",count);
    }
    else{
        printf("NO key is not present");
    }
    return 0;
}