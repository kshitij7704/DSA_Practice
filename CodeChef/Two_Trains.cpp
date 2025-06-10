#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p;
        for(int i=0;i<n-1;i++){
            int a;
            cin>>a;
            p.push_back(a);
        }
        int sum=p[0]*2;
        int count=p[0];
        for(int i=1;i<n-1;i++){
            count+=p[i];
            if(sum>count){
                sum+=p[i];
            }
            else{
                sum+=abs(count-sum);
                sum+=p[i];
            }
        }
        cout<<sum<<endl;
    }
}
