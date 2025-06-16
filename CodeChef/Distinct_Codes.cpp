#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int e = s.length();
        set < string > s2;
        for (int i = 0; i < e - 1; i++){
            string s1 = s.substr(i, 2);
            s2.insert(s1);
        }
        cout << s2.size() << endl;
    }
    return 0;
}
