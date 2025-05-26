// leetcode - 1857

class Solution {
private:
    int dfs(int node, const string &colors, vector<vector<int>> &adj, vector<vector<int>> &count, vector<int> &vis) {
        if (vis[node] == 1) return INT_MAX; // cycle detected
        if (vis[node] == 2) return *max_element(count[node].begin(), count[node].end());

        vis[node] = 1; // mark as visiting
        for (int nei : adj[node]) {
            int val = dfs(nei, colors, adj, count, vis);
            if (val == INT_MAX) return INT_MAX; // cycle detected
            for (int c = 0; c < 26; ++c) {
                count[node][c] = max(count[node][c], count[nei][c]);
            }
        }

        count[node][colors[node] - 'a']++; // include this node's color
        vis[node] = 2; // mark as visited

        return *max_element(count[node].begin(), count[node].end());
    }

public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.size();
        vector<vector<int>> adj(n);
        vector<vector<int>> count(n, vector<int>(26, 0));
        vector<int> vis(n, 0);

        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
        }

        int res = 0;
        for (int i = 0; i < n; ++i) {
            if (vis[i] == 0) {
                int val = dfs(i, colors, adj, count, vis);
                if (val == INT_MAX) return -1;
                res = max(res, val);
            }
        }

        return res;
    }
};
