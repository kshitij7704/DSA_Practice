#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int rev = 0;
    int a = n;
    while(n){
        rev = rev*10 + n%10;
        n=n/10;
    }
    if(rev==a){
        return true;
    }
    else {
        return false;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int L, R;
	    cin>>L>>R;
	    int sum = 0;
	    for(int i=L;i<=R;i++){
	        if(isPalindrome(i)){
	            sum = sum + i;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
