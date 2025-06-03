#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<int> A(n);
	for(int i=0;i<n;i++){
	    cin >> A[i];
	}
	sort(A.begin(), A.end());
	int i;
	for(i=n-1;i>=0;i--){
	    if(A[i] != A[i-1]){
	        break;
	    }
	}
	cout << A[i-1] % A[i] << endl;
	return 0;
}
