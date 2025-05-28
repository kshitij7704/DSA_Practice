#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    int odd = 0;
	    int even = 0;
	    for(int i=0;i<n;i++){
	        int day = 0;
	        cin >> day;
	        if(i % 2 == 0){
	            even += day;
	        }
	        else{
	            odd += day;
	        }
	    }
	    cout << max(odd, even) << endl;
	}
	return 0;
}
