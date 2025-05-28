#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    int initial_max = a[0];
	    int candysharecount = 0;
	    for(int i = 1;i<n;i++){
	        if(a[i] > initial_max){
	            initial_max = a[i];
	        }
	        else{
	            candysharecount++;
	        }
	    }
	    cout << candysharecount << endl;
	}
    return 0;
}
