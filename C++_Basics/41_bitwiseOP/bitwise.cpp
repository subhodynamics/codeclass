#include <iostream> 
using namespace std;

int main()
{
    int a=11,b=7,c; 
    c=a&b; //and operator
    cout<<c<<endl;

    int d=11,e=7,f; 
    f=d|e; //OR operator
    cout<<f<<endl;

    int g=11,h=7,i;
    i=g^h; //XOR operator
    cout<<i<<endl;

    char j=5,k;
    k=j<<1; //left shift operator
    cout<<(int)k<<endl;

    char l=20,m; 
    m=l>>1; //right shift operator
    cout<<(int)m<<endl;

    char x=5,y; 
    y= ~ x; //NOT operator
    cout<<(int)y<<endl;

    return 0;
}