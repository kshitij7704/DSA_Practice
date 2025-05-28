// leetcode - 3372

class Solution {
private:
    int solve(int root, int k, unordered_map<int, vector<int>> &adj){
        int cnt = 0;
        queue<int> qu;
        qu.push(root);
        unordered_map<int, bool> vis;
        vis[root] = 1;
        while(!qu.empty() && k--){
            int n = qu.size();
            cnt += n;
            for(int i=0;i<n;i++){
                int curr = qu.front();
                qu.pop();
                for(auto x: adj[curr]){
                    if(!vis[x]){
                        vis[x] = 1;
                        qu.push(x);
                    }
                }
            }
        }

        return cnt;
    }
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n = edges1.size() + 1;
        int m = edges2.size() + 1;
        unordered_map<int, vector<int>> adj;
        for(int i=0;i<n-1;i++){
            int u = edges1[i][0];
            int v = edges1[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for(int i=0;i<m-1;i++){
            int u = edges2[i][0];
            int v = edges2[i][1];
            adj[n+u].push_back(n+v);
            adj[n+v].push_back(n+u);
        }
        int best = 0;
        for(int i=n;i<n+m;i++){
            int d = solve(i,k,adj);
            best = max(best, d);
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            int d = solve(i,k+1,adj);
            res.push_back(d+best);
        }
        return res;
    }
};
