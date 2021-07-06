#include<stdio.h>
int main()
{
    int n,rev=0,m,r;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    if(rev==m)
    printf("Palindrome");
    else
    printf("not a palindrome");
    return 0;
}