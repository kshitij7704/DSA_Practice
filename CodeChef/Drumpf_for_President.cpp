// STUDVOTE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    unordered_map<int, int> umap;
	    for(int i : arr){
	        umap[i]++;
	    }
	    set<int> st;
	    for(int i=0;i<n;i++){
	        if(arr[i] == i + 1){
	            st.insert(arr[i]);
	        }
	    }
	    int res = 0;
	    for(auto i : umap){
	        int f = i.first;
	        int s = i.second;
	        if(s >= k && st.find(f) == st.end()){
	            res++;
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}
