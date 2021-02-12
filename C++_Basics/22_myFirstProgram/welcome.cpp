#include<iostream>
using namespace std;
int main()
{
    string n;
    cout<<"name please: ";
    //cin >> n; //this will read only one word, if ravi kumar, then only ravi
    //another way is:
    getline(cin,n);
    cout<<"welcome mr/mrs "<<n<<endl;
    return 0;
}