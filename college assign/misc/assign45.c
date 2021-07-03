//! Subhadeep Pathak 176 Q45
#include<stdio.h>

void sum(int arr[], int n, int key){
    int smallSum = 0, graterSum = 0, i;
    for(i = 0; i < n; i++){
        if(arr[i] < key)
            smallSum += arr[i];
        else if(arr[i] > key)
            graterSum += arr[i];
    }
    printf("sum of element less than key element is %d \n",smallSum);
    printf("sum of element grater than key element is %d \n",graterSum);

}
int main()
{
    int arr[10] = {1,5,3,4,5,6,7,8,9,5}, key, i, t = 0;
    printf("Enter key: ");
    scanf("%d",&key);
    for(i = 0; i < 10; i++){
        if(arr[i] == key){
            t = 1;
            break;
        }
    }
    sum(arr, 10, key);
    return 0;
}