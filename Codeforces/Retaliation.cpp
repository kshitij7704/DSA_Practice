// Submission ID - 323489286

#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int64> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        int64 D = a[2] - a[1];
        bool ok = true;
        for(int i = 3; i <= n; i++){
            if(a[i] - a[i-1] != D){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout << "NO\n";
            continue;
        }

        int64 A = a[1];
        int64 num = A - D;
        int64 den = n + 1;
        if(num < 0 || num % den != 0){
            cout << "NO\n";
            continue;
        }
        int64 y = num / den;
        int64 x = y + D;
        if(x < 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
