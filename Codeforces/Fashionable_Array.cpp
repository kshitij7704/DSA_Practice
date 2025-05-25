// Submission ID - 321060257

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) {
            cin >> x;
        }

        sort(a.begin(), a.end());

        vector<int> even_idx, odd_idx;
        for(int i=0;i<n;i++){
            if (a[i] % 2 == 0){
                even_idx.push_back(i);
            }
            else{
                odd_idx.push_back(i);
            }
        }
        
        int best_len = 1;
        if(!even_idx.empty()){
            int len = even_idx.back() - even_idx.front() + 1;
            best_len = max(best_len, len);
        }
        if(!odd_idx.empty()){
            int len = odd_idx.back() - odd_idx.front() + 1;
            best_len = max(best_len, len);
        }

        int removals = n - best_len;
        cout << removals << "\n";
    }

    return 0;
}
