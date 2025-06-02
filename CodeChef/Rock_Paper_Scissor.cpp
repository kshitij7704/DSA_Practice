#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a;
        cin >> a;
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i] == a[i-1]){
                a[i] = '*';
            }
            else{
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
