#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long n,count=0;
    cin>>n;
    while (!(n % 2)) {
      n/= 2;
      cout<<2<<" ";
      count++;
   }
   for (long long i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
          cout<<i<<" ";
         count++;
         n = n / i;
      }
   }
   if (n > 2){
       cout<<n;
        count++;
      }   
      cout<<endl;
      cout<<"count is "<<count;

    return 0;
}
