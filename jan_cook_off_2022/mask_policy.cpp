#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a;
	    cin>>n>>a;
	    int b = a>(n-a)?(n-a):a;
	    cout<<b<<endl;
	}
	return 0;
}
