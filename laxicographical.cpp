#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"enter the range : ";
    cin>>n1>>n2;
    string a[n2-n1+1];
    int j=0;
    for(int i=n1;i<=n2;i++){
        a[j++] = to_string(i);
    }   
    sort(a,a+j);
    for (int i = 0; i < j; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
