#include<iostream>
using namespace std;
int main()
{
   int x=2648,y=0;
   do
   {
       y=(y*10)+(x%10);
       x=x/10;
   } while(x!=0);
   cout<<y;
    return 0;
}