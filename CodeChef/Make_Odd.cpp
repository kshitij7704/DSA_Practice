#include <bits/stdc++.h>
using namespace std;

int main() {
	
       int t;
       cin>>t;
       
       while(t--) {
           int n;
           cin>>n;
           string a, b;
           cin>>a>>b;
           
           int ones=0, zeros=0, mixed=0;
           for(int i=0;i<n;i++) {
                   if(a[i]=='1' && b[i]=='1') ones++;
                   else if(a[i]=='0' && b[i]=='0') zeros++;
                   else mixed++;
           }

           if(mixed>0) {
                cout<<"YES"<<endl;
           }
           else if(mixed==0) {
                   if(ones%2==1) cout<<"YES"<<endl;
                   else if(ones%2==0) cout<<"NO"<<endl;
           }
           
               
       }
        
        
}
