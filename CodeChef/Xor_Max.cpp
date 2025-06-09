#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	int tc; cin>>tc;
	while(tc--){
	    string a,b;
	    cin>>a;
	    cin>>b;
	    int cnt1=0, n = a.size();
	    for(int i=0; i<n; i++){
	        if(a[i] == '1') cnt1++;
	        if(b[i] == '1') cnt1++;
	    }
	    //cout<<"cnt1= "<<cnt1<<"the size is: "<<n<<endl;
	    int mini = min(cnt1,n*2-cnt1);
	    //cout<<"mini is: "<<mini<<endl;
	    for(int i=0;i<mini;i++)
	        cout<<1;
	    for(int i=0;i<n-mini;i++)
	        cout<<0;
	    cout<<endl;
	}
	return 0;
}
