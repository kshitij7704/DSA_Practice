#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, d;
	    cin >> n >> d;
	    int risk = 0;
	    vector<int> D(n);
	    for(int i=0;i<n;i++){
	        cin >> D[i];
	        if(D[i] <= 9 || D[i] >= 80){
	            risk++;
	        }
	    }
	    int safe = n - risk;
	    int v1 = 0;
	    int v2 = 0;
	    if(risk % d != 0){
	       v1 = risk / d;
	       v1 = v1 + 1;
	    }
	    else{
	        v1 = risk / d;
	    }
	    if(safe % d != 0){
	       v2 = safe / d;
	       v2 = v2 + 1;
	    }
	    else{
	        v2 = safe / d;
	    }
	    cout << v1 + v2 << endl;
	}
	return 0;
}
