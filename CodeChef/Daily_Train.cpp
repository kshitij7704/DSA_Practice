#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if (n == 1 || n == 2)
        return n;
    int fact = 2;
    for (int i = 3; i <= n; i++)
        fact *= i;
    return fact;
}

int comb(int n, int r){
    return fact(n) / (fact(n - r) * fact(r));
}

int main() {
    // your code goes here
    int n, need;
    string s;
    cin >> need >> n;
    int tot = 0;
    for(int i=0;i<n;i++){
        cin >> s;
        int k = 0;
        for(int j=0;j<36;j+=4){
            int sum = 6 - (int(s[j]) + int(s[j + 1]) + int(s[j + 2]) + int(s[j + 3]) + int(s[53 - k]) + int(s[52 - k]) - 288);
            k += 2;
            if(sum > need){
                tot += comb(sum, need);
            }
            if(sum == need){
                tot++;
            }
        }
    }
    cout << tot << endl;
    return 0;
}
