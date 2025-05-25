// Submission ID - 321077880

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int bal = 0;
        bool has_mid_zero = false;
        for(int i=0;i+1<(int)s.size();i++){
            if(s[i] == '('){
                bal++;
            }
            else{
                bal--;
            }
            if(bal == 0){
                has_mid_zero = true;
            }
        }
        if(has_mid_zero == true){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
