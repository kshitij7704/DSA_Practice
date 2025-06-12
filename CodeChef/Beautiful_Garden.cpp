#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    for (cin >> t; t--; ) {
        int n, k, d;
        cin >> n >> k >> d;              
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = 1 + (d - 1) / x;        
        }
    
        sort(a.rbegin(), a.rend());
        
        long long ans = 0;                
        int z = max(0, n - k);            
        for (int i = 0; i < z; i++) {
            ans += a[i];
        }
        
        cout << ans << endl;
    }
    
}
