#include <iostream>
using namespace std;
int main()
{
    int a,r=0,b,c;
    cout<<"enter the number : ";
    cin>>a;
    b = a;
    c = a;
    cout<<"the reverse of "<<b<<" is ";
    while (b%10==0)
    {
        cout<<"0";
        b = b/10;
    }
    
    while (a>0)
    {
        r = r*10 + a%10;
        a = a/10;
    }
    cout<<r;
    
    return 0;
}