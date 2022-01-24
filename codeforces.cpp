#include<bits/stdc++.h>
using namespace std;
long long count_factors(long long n){
 long long count = 0;
   while (!(n % 2)) {
      n/= 2;
      count++;
   }
   for (long long i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
         count++;
         n = n / i;
      }
   }
   if (n > 2){
        count++;
      }   
      return count;
      }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        if(a==b)
        {
            if(k==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                if(count_factors(a) + count_factors(a)>=k)
                {
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            
        }
        else{
            if(k==1)
            {
                if((a%b==0) || (b%a==0))
                {
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                   if(count_factors(a) + count_factors(a)>=k)
                {
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
                
            }
        }
    }
    return 0;
}