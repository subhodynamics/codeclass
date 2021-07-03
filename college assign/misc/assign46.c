//! Subhadeep Pathak 176 Q46
#include<stdio.h>
int isPrime(int a){
    int b;
    for(b=2;b<a;b++){
        if(a%b==0)
            break;
    }
    if(b==a)
        return 1;
    else
        return 0;
}
void checkPrime(int arr[], int n, int key){
    int smallP[10], graterp[10], smallIndex = 0, graterIndex = 0, i;
    for(i = 0; i < n; i++){
        if(isPrime(arr[i]) == 1){
            if(arr[i] > key)
                graterp[graterIndex++] = arr[i];
            else if(arr[i] < key)
                smallP[smallIndex++] = arr[i];
        }
    }
    printf("prime number grater than key element %d are:\n",key);
    for(i = 0; i < graterIndex; i++)
        printf("%d\n", graterp[i]);

    printf("prime number less than key element %d are:\n",key);
    for(i = 0; i < smallIndex; i++)
        printf("%d\n", smallP[i]);
}
int main()
{
    int arr[10] = {3,5,17,8,11,13,15,21,4,7}, key, i, t = 0;
    printf("Enter key: ");
    scanf("%d",&key);
    for(i = 0; i < 10; i++){
        if(arr[i] == key){
            t = 1;
            break;
        }
    }
    checkPrime(arr, 10, key);
    return 0;
}