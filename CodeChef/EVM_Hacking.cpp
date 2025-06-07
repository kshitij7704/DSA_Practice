#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
    while(t--){
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        float sp = (p + q + r) / 2;
        if((p + b + c) > sp || (a + q + c) > sp || (a + b + r) > sp){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
