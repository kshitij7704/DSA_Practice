#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
	while(t--)
	{
	    int n, i, d; cin >> n;
	    int a[7]={4,4,4,4,4,4,4};
	    string day; cin >> day;
	    
	    if(day=="mon") d=0;
	    else if(day=="tues") d=1;
	    else if(day=="wed") d=2;
	    else if(day=="thurs") d=3;
	    else if(day=="fri") d=4;
	    else if(day=="sat") d=5;
	    else if(day=="sun") d=6;
	    
	    for(i=29; i<=n; i++)
	    {
	        a[d]++;
	        if(d==6) d=-1;
	        d++;
	    }
	    
	    for(i=0; i<7; i++)
	      cout << a[i] << " ";
	    cout << endl;
	}
	return 0;
}
