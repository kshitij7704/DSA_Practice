#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long sum = 0;
        long long a = 1;
        long long b = 2;

        while (b <= n) {
            if (b % 2 == 0)
                sum += b;

            long long temp = a + b;
            a = b;
            b = temp;
        }

        cout << sum << endl;
    }
    return 0;
}
