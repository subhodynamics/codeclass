#include<iostream>
using namespace std;
int main()
{
   int a,b,t;
   int i=0;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       while(a%b)
       {
           ++a;
           ++i;
       }
       cout<<i<<endl;
       i=0;             //time limit exceeded
   }
   return 0;
}