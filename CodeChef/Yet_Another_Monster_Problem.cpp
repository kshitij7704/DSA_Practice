#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> A(n);
	    for(int i=0;i<n;i++){
	        cin >> A[i];
	    }
	    sort(A.begin(), A.end());
	    int res = n;
	    for(int i=0;i<n;i++){
	        res = min(res, A[i] + (n - (i + 1)));
	    }
	    cout << res << endl;
	}
	return 0;
}
