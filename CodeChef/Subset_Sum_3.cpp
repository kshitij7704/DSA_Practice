#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
        int zero = 0;
        int one = 0;
        int two = 0;
        for(int i=0;i<n;i++){
            int curr;
            cin >> curr;
            if(curr % 3 == 0){
                zero++;
            }
            else if(curr % 3 == 1){
                one++;
            }
            else{
                two++;
            }
        }
        bool flag = false;
        if(zero > 0){
            flag = true;
        }
        else if(one > 0 && two > 0){
            flag = true;
        }
        else if(one >= 3){
            flag = true;
        }
        else if(two >= 3){
            flag = true;
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
