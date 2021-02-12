#include <iostream>
using namespace std;

int main() 
{
    int withdraw;
    double amount;
    cin>>withdraw;
    cin>>amount;
    if(withdraw%5!=0){
        cout<<amount;
    }
    else if(amount<=(withdraw+0.5)){
        cout<<amount;
    }
    else{
        cout<<(amount-withdraw-0.5);
    }
    return 0;
}