#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int one = 0;
	    int zero = 0;
	    for(int i=0;i<s.length();i++){
	        if(s[i] == '0'){
	            zero++;
	        }
	        else{
	            one++;
	        }
	    }
	    if(one == 1 || zero == 1){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
