#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    j=2 * i++ + 2* ++i;
    cout<<i<<" "<<j<<endl;
    cout<<i<<" "<<i++<<" "<<++i<<" "<<i<<endl;
    return 0;
}