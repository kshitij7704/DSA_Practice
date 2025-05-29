#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--)
	{
	    long n,u,d,parcht=1,i,stopindex=0,cnt=0;
	    cin>>n>>u>>d;
	    long h[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>h[i];
	    }
	    for(i=0;i<(n-1);i++)
	    {
	        if(h[i]<h[i+1])
	        {
	            if((h[i+1]-h[i])<=u)
	            {
	                stopindex=i+1;
	                continue;
	            }
	            else{
	                break;
	            }
	        }
	        else if(h[i+1]<h[i])
	        {
	            if((h[i]-h[i+1])<=d)
	            {
	                stopindex=i+1;
	                continue;
	            }
	            else if(parcht==1)
	            {
	                stopindex=i+1;
	                parcht=0;
	                continue;
	            }
	            else{
	                break;
	            }
	        }
	        else if(h[i]==h[i+1])
	        {
	            cnt++;
	            stopindex=i+1;
	        }
	    }
	    
	    if(cnt==(n-1))
	    {
	        cout<<n<<endl;
	    }
	    else{
	        cout<<(stopindex+1)<<endl;
	    }
	    
	}
	return 0;
}
