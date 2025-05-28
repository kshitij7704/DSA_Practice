#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    vector<int> A(n);
	    for(int i=0;i<n;i++){
	        cin >> A[i];
	    }
	    vector<int> B(n);
	    for(int i=0;i<n;i++){
	        cin >> B[i];
	    }
	    vector<pair<int,int>> level(n);
        for(int i=0;i<n;i++){
            level[i] = {A[i], i};
        }
        sort(level.begin(), level.end());
        vector<long long> ans(n, 0);
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        long long sumB = 0;
        for(auto i : level){
            int ind = i.second;
            ans[ind] = sumB;
            pq.push(B[ind]);
            sumB += B[ind];
            if((int)pq.size() > k){
                sumB -= pq.top();
                pq.pop();
            }
        }
        for(int i=0;i<n;i++){
            cout << ans[i];
            if(i+1 < n){
                cout << " ";
            }
            else{
                cout << endl;
            }
        }
	}
	return 0;
}
