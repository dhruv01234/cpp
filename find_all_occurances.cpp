#include<iostream>
using namespace std;
int main()
{
    int i=0,l;
    string str;
    char c;
    cin>>c;
    getchar();
    getline(cin,str);
    l = str.length();
    while(l--)
    {
        if(str[i++]==c)
        {
            cout<<"at position "<<i<<endl;
        }
    }
    return 0;
}