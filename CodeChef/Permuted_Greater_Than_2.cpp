#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x, y, z;
	    cin >> x >> y >> z;
	    bool flag = false;
	    if(x == 0){
	        flag = true;
	    }
	    else if(y == 0){
	        if(z >= x - 1){
	            flag = true;
	        }
	        else{
	            flag = false;
	        }
	    }
	    else{
	        if(z >= x){
	            flag = true;
	        }
	        else{
	            flag = false;
	        }
	    }
	    if(flag){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}
	return 0;
}
