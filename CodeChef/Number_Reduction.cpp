#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        cout << (x % 3 == 0 ? 3 : 1) << "\n";
    }
    return 0;
}
