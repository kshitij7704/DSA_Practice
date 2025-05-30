#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k, s;
	    cin >> n >> k >> s;
	    int i = 1;
	    int sum = 0;
	    while(n--){
	        sum += i;
	        i += 2;
	    }
	    cout << (s - sum) / (k - 1) << endl;
	}
	return 0;
}
