// leetcode - 2359

class Solution {
private:
    void dfs(vector<vector<int>> &adj, int node, vector<bool> &vis, vector<int> &dist, int distance){
        vis[node] = true;
        dist[node] = distance;
        int maxDist = 0;
        for(auto i : adj[node]){
            if(!vis[i]){
                dfs(adj, i, vis, dist, distance + 1);
            }
        }
    }

public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            if(edges[i] != -1){
                adj[i].push_back(edges[i]);
            }
        }
        vector<bool> vis1(n, false);
        vector<bool> vis2(n, false);
        vector<int> dist1(n, INT_MAX);
        vector<int> dist2(n, INT_MAX);
        dfs(adj, node1, vis1, dist1, 0);
        dfs(adj, node2, vis2, dist2, 0);
        int mini = INT_MAX;
        int res = -1;
        for(int i=0;i<n;i++){
            if(vis1[i] == 1 && vis2[i] == 1){
                if(mini > max(dist1[i], dist2[i])){
                    mini = max(dist1[i], dist2[i]);
                    res = i;
                }
            }
        }
        return res;
    }
};
