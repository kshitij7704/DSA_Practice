#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin >> t;
	while(t--) {
	    int n; 
	    cin >> n; 
	    string s; 
	    cin >> s;
	    bool b = 0;
	    for(int i = 0; i < n; i++) 
	        if(s[i] != 'z') 
	            b = 1;
	    if(!b) {
	        cout << -1 << "\n";
	    }
	    else {
	        for(int i = 0; i < n; i++) {
	            cout << 'z';
	        }
	        cout << "\n";
	    }
	}
	return 0;
}
