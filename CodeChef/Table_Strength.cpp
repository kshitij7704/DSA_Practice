#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> w(n);
	    for(int i=0;i<n;i++){
	        cin >> w[i];
	    }
	    sort(w.begin(), w.end());
	    int maxi = w[n-1];
	    int j = 2;
	    int temp = 0;
	    for(int i=n-2;i>=0;i--){
            temp = j * w[i];
            maxi = max(maxi, temp);
            j++;
        }
        cout << maxi << endl;
	}
	return 0;
}
