#include <iostream>
using namespace std;

int solve(){
    int a, b, n;
    cin >> a >> b >> n;
    if(a % b == 0){
        return -1;
    }
    int ans = n - n % a;
    if(n % a != 0){
        ans += a;
    }
    if(ans % b == 0){
        ans += a;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
	return 0;
}
