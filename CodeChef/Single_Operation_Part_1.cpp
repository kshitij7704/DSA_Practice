#include <bits/stdc++.h>
using namespace std;

long long getVal(const string &s) {
    long long x = 0;
    for (char c : s) {
        x = x * 2 + (c - '0');
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        long long x = getVal(s);
        int bestY = 1;
        long long maxX = x ^ (x >> 1);
        for(int y = 2; y <= n; y++){
            long long temp = x ^ (x >> y);
            if(temp > maxX){
                maxX = temp;
                bestY = y;
            }
        }
        cout << bestY << endl;
    }
    return 0;
}
