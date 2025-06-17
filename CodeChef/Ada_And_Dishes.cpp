#include <bits/stdc++.h>
using namespace std;
#define ll int

void code(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll s1=0,s2=0;
    sort(a,a+n,greater<ll>());
    for(ll i=0;i<n;i++){
        if(s1<s2){
            s1+=a[i];
        }
        else{
            s2+=a[i];
        }
    }
    cout<<max(s1,s2)<<endl;
    
}

int main() {
	// your code goes here
	int t;
	cin>>t; 
	while(t--)
	    code();
	return 0;
}
