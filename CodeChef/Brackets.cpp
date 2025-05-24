#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string a;
	    cin >> a;
	    int brackets = 0;
	    int maxBractkets = 0;
	    for(int i=0;i<a.length();i++){
	        if(a[i] == '('){
	            brackets++;
	        }
	        else if(a[i] == ')'){
	            brackets--;
	        }
	        maxBractkets = max(maxBractkets, brackets);
	    }
	    for(int i=0;i<maxBractkets;i++){
	        cout << '(';
	    }
	    for(int i=0;i<maxBractkets;i++){
	        cout << ')';
	    }
	    cout << endl;
	}
}
