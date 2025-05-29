#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++) {
	        
	        int a,b,p,q;
	        cin>>a>>b>>p>>q;
	        
	        int sumFirst, sumSecond;
	        sumFirst = a+b;
	        sumSecond = p+q;
	        
	        if (a==p && b==q) cout<<0<<endl;
	        else if (sumFirst%2==sumSecond%2) cout<<2<<endl;
	        else  cout<<1<<endl;
	        
	}

}
