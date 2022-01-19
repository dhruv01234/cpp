#include<bits/stdc++.h>
using namespace std;
N = 1e^7
int a[N];
int main()
{
    int t;
    cin>>t;
    while (t--)
    {   
        int n,q,fwd[N],bkw[N],gcd;
        cin>>n>>q;
        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            fwd[i] = __gcd(fwd[i-1],a[i]);
        }
        for (int i = n-1; i >0; i--)
        {
            bkd[i] = __gcd(bkw[i-1],a[i]);
        }
        
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            cout<<__gcd(fwd[l-1],bkd[r+1]);
        }
        
    }
    
    return 0;
}