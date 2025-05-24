#include <bits/stdc++.h>
using namespace std;

string L(string s){
    return s.substr(1, s.length() - 1) + s.substr(0, 1);
}

string R(string s){
    return s.substr(s.length() - 1, s.length()) + s.substr(0, s.length() - 1);
}

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    if(L(s) == R(s)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
