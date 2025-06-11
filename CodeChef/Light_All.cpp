#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<vector<int>> adj;
vector<int> matchR;
vector<bool> seen;

bool dfs(int u){
    for(int v : adj[u]){
        if(seen[v]){
            continue;
        }
        seen[v] = true;
        if(matchR[v] < 0 || dfs(matchR[v])){
            matchR[v] = u;
            return true;
        }
    }
    return false;
}

int main() {
	// your code goes here
    int t; 
    cin >> t;
    while(t--){
        cin >> n >> s;
        vector<int> dead, alive;
        for(int i=0;i<n;i++){
            if(s[i] == '0'){
                dead.push_back(i);
            }
            else{
                alive.push_back(i);
            }
        }
        if(dead.size() > alive.size()){
            cout << "No\n";
            continue;
        }
        int d = dead.size();
        int a = alive.size();
        adj.assign(d, {});
        for(int u=0;u<d;u++){
            for(int v=0;v<a;v++){
                if(abs(dead[u] - alive[v]) == 1){
                    adj[u].push_back(v);
                }
            }
        }
        matchR.assign(a, -1);
        int matches = 0;
        for(int u=0;u<d;u++){
            seen.assign(a, false);
            if(dfs(u)){
                matches++;
            }
        }
        if(matches == d){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}
