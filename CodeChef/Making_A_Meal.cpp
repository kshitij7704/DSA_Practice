#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    unordered_map<char, int> umap;
	    while(n--){
	        string s;
	        cin >> s;
	        for(char c : s){
	            umap[c]++;
	        }
	    }
	    cout << min({umap['c'] / 2, umap['o'], umap['d'], umap['e'] / 2, umap['h'], umap['f']}) << endl;
	}
	return 0;
}
