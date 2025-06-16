#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int, int> m1;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            m1[x]++;
        }
        unordered_map<int, int> m2;
        
        for (auto i : m1) {
            m2[i.second]++;
        }
        int maxi = 0;
        int ans=0;
        for (auto i : m2) {
            if(i.second>maxi)
            {
                ans=i.first;
                maxi=i.second;
            }
            else if(i.second==maxi)
            {
                ans=min(ans,i.first);
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}
