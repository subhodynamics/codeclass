//Subhadeep pathak 176 Q28
#include<stdio.h>
int main()
{
    printf(" Enter no. of terms : ");
    int n;
    scanf("%d", &n);
    double s=0;
    s=(n*(24+((n-1)*10))/2);
    for(int i=1;i<=n;i++)
    s+=(double)(12+(10*i))/(i+2);
    printf("\n %f",s);
    return 0;
}