#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') a++;
        if(s[i]==')') a--;
        if(a<0){
            cout<<"unbalanced";return 0;
        }
    }
    if(a==0) cout<<"balanced";
    else cout<<"unbalanced";
    return 0;
}
