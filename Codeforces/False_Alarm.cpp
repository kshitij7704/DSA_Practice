// Submission ID - 323410004

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int first = -1, last = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (first == -1) first = i;
                last = i;
            }
        }
        int segment_length = last - first + 1;
        if (segment_length <= x) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }

    return 0;
}
