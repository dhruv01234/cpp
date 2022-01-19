#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=i;j++)
	        {
                for(int k=1;k<j;k++)
                {
                    cout<<"*";
                }
	            cout<<j;
	        }
	        cout<<endl;
	    }
	}
	return 0; 
}