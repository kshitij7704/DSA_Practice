#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int xor_answer = 0;
	for (int i=0; i<n; i++){
	    string s;
	    cin>>s;
	    reverse(s.begin(), s.end());
	    for(int j=0; j<10; j++)
	    {
	        if(s[j]=='1'){
	            xor_answer ^= 1<<j;
	        }
	    }
	}
	cout<<xor_answer<<endl;
}
