#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,x,k;
	    cin >> n >> x >> k;
	    vector<int>a(n),b(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(abs(a[i]-b[i])<=k){
	            count++;
	        }
	    }
	    if(count>=x){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
