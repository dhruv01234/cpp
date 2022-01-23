#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>=y) cout<<"PIZZA\n";
	    else if(x>=z) cout<<"BURGER\n";
	    else cout<<"NOTHING\n";
	}
	return 0;
}
