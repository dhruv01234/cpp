#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,str1,str2;
    cout<<"enter the string :-"<<endl;
    getline(cin,str);
    cout<<"enter the string want to replace :-"<<endl;
    getline(cin,str1);
    cout<<"enter the string want to add :-"<<endl;
    getline(cin,str2);
    str.replace(str.find(str1),str1.length(),str2);
    cout<<str;   
    return 0;
}