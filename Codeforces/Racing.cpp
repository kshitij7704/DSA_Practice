// Submission ID - 321138603

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> d(n+1);
        for(int i=1;i<=n;i++){
            cin >> d[i];
        }
        vector<int> L(n+1), R(n+1);
        for(int i=1;i<=n;i++){
            cin >> L[i] >> R[i];
        }

        vector<int> dp_low(n+1), dp_high(n+1);
        dp_low[0] = dp_high[0] = 0;

        bool ok = true;
        for(int i=1;i<=n;i++){
            int lo, hi;
            if(d[i] == 0){
                lo = dp_low[i-1];
                hi = dp_high[i-1];
            }
            else if(d[i] == 1){
                lo = dp_low[i-1] + 1;
                hi = dp_high[i-1] + 1;
            }
            else { 
                lo = dp_low[i-1];
                hi = dp_high[i-1] + 1;
            }

            lo = max(lo, L[i]);
            hi = min(hi, R[i]);
            if(lo > hi){
                ok = false;
                break;
            }
            dp_low[i] = lo;
            dp_high[i] = hi;
        }

        if(!ok){
            cout << "-1\n";
            continue;
        }

        vector<int> ans(n+1), h(n+1);
        h[n] = dp_low[n];

        for(int i=n;i>=1;i--){
            if(d[i] != -1){
                ans[i] = d[i];
            } 
            else {
                int prev_if0 = h[i];
                if(prev_if0 >= dp_low[i-1] && prev_if0 <= dp_high[i-1]){
                    ans[i] = 0;
                } 
                else {
                    ans[i] = 1;
                }
            }
            h[i-1] = h[i] - ans[i];
        }

        for(int i=1;i<=n;i++){
            cout << ans[i] << (i==n?'\n':' ');
        }
    }

    return 0;
}
