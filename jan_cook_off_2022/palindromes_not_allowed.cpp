#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int i = 0;
	    while(n--){
	        cout<<char('a'+i++);
	        if(i==26) i=0;
	    }
	    cout<<endl;
	}
	return 0;
}
