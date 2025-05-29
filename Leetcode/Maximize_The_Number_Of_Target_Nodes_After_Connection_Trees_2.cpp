// leetcode - 3373

class Solution {
private:
    vector<int> getParity(vector<vector<int>>& edges, int n){
        vector<vector<int>> adj(n);
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // 1 for even depth, 0 for odd
        vector<int> parity(n, 0); 
        // node, parent, parity
        queue<tuple<int, int, int>> q; 
        // Start with node 0 as even (1)
        q.push({0, -1, 1}); 
        while(!q.empty()){
            auto [u, parent, p] = q.front(); q.pop();
            parity[u] = p;
            for(int v : adj[u]){
                if(v != parent){
                    // Alternate parity
                    q.push({v, u, 1 - p}); 
                }
            }
        }
        return parity;
    }

public:
    vector<int> maxTargetNodes(vector<vector<int>>& e1, vector<vector<int>>& e2) {
        int n1 = e1.size() + 1;
        int n2 = e2.size() + 1;
        vector<int> p1 = getParity(e1, n1);
        vector<int> p2 = getParity(e2, n2);
        int even1 = accumulate(p1.begin(), p1.end(), 0);
        int even2 = accumulate(p2.begin(), p2.end(), 0);
        int odd1 = n1 - even1;
        int odd2 = n2 - even2;
        int max_target = max(even2, odd2);
        vector<int> result;
        for(int i=0;i<n1;i++){
            if(p1[i] == 1){
                result.push_back(max_target + even1);
            } 
            else{
                result.push_back(max_target + odd1);
            }
        }
        return result;
    }
};
