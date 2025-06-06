#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            sum+=(i+1)*((s[i]-'a')+1);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
