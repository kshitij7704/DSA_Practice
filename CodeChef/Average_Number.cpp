#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k, v;
	    cin >> n >> k >> v;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    int sum = 0;
	    for(int i : arr){
	        sum += i;
	    }
	    int x = (n + k) * v;
	    int diff = x - sum;
	    if(diff > 0 && diff % k == 0){
	        cout << diff / k << endl;
	    }
	    else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}
