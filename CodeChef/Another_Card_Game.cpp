#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;  cin>>t;
	while(t--){
	    int PC, PR, cnt1, cnt2;  // final power of chef and Rick
	    cin>>PC>>PR;
	    
	    if(PC % 9 == 0){   // if PC divisible by 9
	        cnt1 = PC/9;  // if not
	    }
	    else{
	        cnt1 = PC/9 + 1;
	    }
	    if(PR % 9 == 0){
	        cnt2 = PR/9;
	    }
	    else{
	        cnt2 = PR/9 + 1;
	    }
	    
	    if(cnt1 >= cnt2){
	        cout<<1<<" "<<cnt2<<endl;
	    }
	    else{
	        cout<<0<<" "<<cnt1<<endl;
	    }
	}

}
