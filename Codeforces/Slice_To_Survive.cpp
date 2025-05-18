// Submission ID - 320067001

#include <bits/stdc++.h>
using namespace std;

int F(int64_t k) {
    if(k <= 1) 
        return 0;
    int f = 0;
    int64_t v = 1;
    while(v < k) {
        v <<= 1;
        ++f;
    }
    return f;
}

int first_cut_cost(int64_t d, int64_t p) {
    if(d <= 1) 
        return 0;
    int64_t keep = min(p, d - p + 1);
    return 1 + F(keep);
}

int worst_cut_cost(int64_t d) {
    if(d <= 1) 
        return 0;
    int64_t keep = (d + 1) / 2;
    return 1 + F(keep);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int64_t n, m, a, b;
        cin >> n >> m >> a >> b;
        int64_t opt1 = (int64_t)first_cut_cost(n, a) + (int64_t)worst_cut_cost(m);
        int64_t opt2 = (int64_t)first_cut_cost(m, b) + (int64_t)worst_cut_cost(n);
        cout << min(opt1, opt2) << "\n";
    }
    return 0;
}
