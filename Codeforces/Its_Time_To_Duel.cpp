// Submission ID - 320046318

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
        vector<int>a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector<array<bool,2>> dp(n, {false,false});

        for(int x1 = 0; x1 <= 1; x1++){
            bool wins1 = (x1 == 1);
            if(wins1 == bool(a[1])) dp[1][x1] = true;
        }

        for(int i = 2; i <= n-1; i++){
            for(int prev = 0; prev <= 1; prev++){
                if(!dp[i-1][prev]) continue;
                for(int xi = 0; xi <= 1; xi++){
                    bool win_i = (prev == 0) || (xi == 1);
                    if(win_i == bool(a[i])){
                        dp[i][xi] = true;
                    }
                }
            }
        }

        bool possible = false;
        if(n == 2){
            for(int x1 = 0; x1 <= 1; x1++){
                if(!dp[1][x1]) continue;
                bool win2 = (x1 == 0);
                if(win2 == bool(a[2])){
                    possible = true;
                }
            }
        } 
        else {
            for(int xnm1 = 0; xnm1 <= 1; xnm1++){
                if(!dp[n-1][xnm1]) continue;
                bool win_n = (xnm1 == 0);
                if(win_n == bool(a[n])){
                    possible = true;
                }
            }
        }

        cout << (possible ? "NO\n" : "YES\n");
    }

    return 0;
}
