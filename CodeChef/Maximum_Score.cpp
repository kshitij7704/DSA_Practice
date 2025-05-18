#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        long long score = 0;
        for (int i = 0; i < N / 2; ++i) {
            score += abs(A[i] - A[N - 1 - i]);
        }
        cout << score << endl;
    }
    return 0;
}
