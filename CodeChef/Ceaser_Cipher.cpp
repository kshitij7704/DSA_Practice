#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,t,u;
        cin>>s>>t>>u;
        int m=t[0]-s[0];
        if (m < 0)
            m += 26;
        string v;
        for(int i=0;i<n;i++){
            char c = (u[i] - 'a' + m) % 26 + 'a';
            v += c;
        }
        cout<<v<<endl;
    }
    
	return 0;
}
