#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int a = 0;
	    int b = 0;
	    int ab = 0;
	    int o = 0;
	    for(int i=0;i<n;i++){
	        string s = "";
	        cin >> s;
	        if(s == "A"){
	            a++;
	        }
	        else if(s == "B"){
	            b++;
	        }
	        else if(s == "AB"){
	            ab++;
	        }
	        else{
	            o++;
	        }
	    }
	    int chain = max(a, b) + ab + o;
	    cout << chain << endl;
	}
	return 0;
}
