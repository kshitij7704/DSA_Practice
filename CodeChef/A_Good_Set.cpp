#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    for(int i=1;i<2*n;i+=2){
	        cout << i << " ";
	    } 
	    cout << endl;
	}
	return 0;
}
