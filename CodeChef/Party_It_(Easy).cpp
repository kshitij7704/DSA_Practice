#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> A(n), B(n);
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        for(int i=0;i<n;i++){
            cin >> B[i];
        }
        priority_queue<long long> pq;
        for(int i=0;i<n;i++){
            while(!pq.empty() && x - (int)pq.size() < A[i]){
                pq.pop();
            }
            if (x - (int)pq.size() >= B[i]){
                pq.push(B[i]);
            }
        }
        cout << pq.size() << "\n";
    }
    return 0;
}
