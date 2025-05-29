#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int>left(n,0);
        vector<int>right(n,0);
        int  c1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                c1++;
            }
            else if(s[i]=='B'){
                left[i]=c1;
            }
            else{
                c1=0;
            }
        }
         int  c2=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='C'){
                c2++;
            }
            else if(s[i]=='B'){
                right[i]=c2;
            }
            else{
                c2=0;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            cnt1+=max(left[i],right[i]);
        }
        cout<<cnt1<<endl;
       
    }
    return 0;
}
