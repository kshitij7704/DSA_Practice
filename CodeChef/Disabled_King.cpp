#include <iostream>
using namespace std;


int main() {
	// your code goes here
    int t=0;
	cin>>t;
	while (t--) {
        int n=0;
	    cin>>n;
	    cout<<((n % 2 == 0) ? n : (n - 1))<<endl;
	}
	return 0;
}
