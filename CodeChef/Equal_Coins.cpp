#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((x%2==0 && y%2==0) || (x%2==0 && y%2==1 && x!=0)) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
