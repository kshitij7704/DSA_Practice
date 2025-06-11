#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        vector<ll> A(n);
        for(int i=0;i<n;i++){
            cin >> A[i];
        }
        ll s = 0;
        for(int i=0;i+1<n;i++){
            s += min(A[i], A[i+1]);
        }
        while(q--){
            int ind;
            ll x;
            cin >> ind >> x;
            ind--;
            if(ind > 0){
                s -= min(A[ind-1], A[ind]);
            }
            if(ind + 1 < n){
                s -= min(A[ind], A[ind+1]);
            }
            A[ind] = x;
            if(ind > 0){
                s += min(A[ind-1], A[ind]);
            }
            if(ind + 1 < n) {
                s += min(A[ind], A[ind+1]);
            }
            cout << s << "\n";
        }
    }
    return 0;
}
