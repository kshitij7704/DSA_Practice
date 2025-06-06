#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	while (t--){
	    int d, c;
	    cin>> d>> c;
	    
	    int a[3], b[3];
	    int dy1 = 0, dy2 = 0;
	    
	    for (int i=0; i<3; i++){
	        cin>> a[i];
	        dy1 +=a[i];
	    }
	    
	    for (int i=0; i<3; i++){
	        cin>> b[i];
	        dy2 +=b[i];
	    }
	    
	    int costWithoutCoupon = dy1 + dy2 + 2*d;
	    int costWithCoupon = dy1 + dy2 + c;
	    
	    if (dy1 < 150){
	        costWithCoupon += d;
	    }
	    
	    if (dy2 < 150){
	        costWithCoupon += d;
	    }
	    
	    if (costWithCoupon < costWithoutCoupon){
	        cout<< "YES" <<endl;
	    }
	    else cout<< "NO" <<endl;   
	    
	}
	return 0;
}
