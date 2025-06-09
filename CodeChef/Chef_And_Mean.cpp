#include <iostream>
#include<vector>
#include<limits>
#include<map>
#include<cmath>
#include<algorithm>
using namespace std;
#define ll long long int
#define for(i,p) for(int i=0;i<p;i++)
//int main() {
 void  code(int t)
   {
    ll p;
    cin>>p;
    vector<ll>n(p);
    for(i,p)
    {
        cin>>n[i];
    }
    double me=0;
    bool ct=true;
    ll ans;
    for(i,p)
    {
        me+=n[i];
    }
    
    me/=(p*1.0);
    for(i,p)
    {
        if(me==n[i])
        {
            ct=false;
            ans=i+1;
            break;
        }
    }
    if(ct)
    {
        cout<<"Impossible\n";
    }
    else 
    cout<<ans<<"\n";
    
   }
   int main()
   {
       int t;
       cin>>t;
       while(t--)
       {
           code(t);
       }
   
	return 0;
}
