// Submission ID - 323427516

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
        cout << 1;
        for (int x = n; x >= 2; x--) {
            cout << ' ' << x;
        }
        cout << '\n';
    }
    return 0;
}
