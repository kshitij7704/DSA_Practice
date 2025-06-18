#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int res = 1;
	    for(int i=2;i<=n;i++){
	        if(i * i <= n){
	            res = max(res, i);
	        }
	    }
	    cout << res * res << endl;
	}
	return 0;
}
