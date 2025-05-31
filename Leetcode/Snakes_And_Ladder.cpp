// leetcode - 909

class Solution {
private:
    vector<int> flatten(const vector<vector<int>>& board, int n, int m) {
        // 1-based indexing
        vector<int> b(n*m+1, -1); 
        int idx = 1;
        bool leftToRight = true;
        for(int i=n-1;i>=0;i--){
            if(leftToRight){
                for(int j=0;j<m;j++){
                    b[idx++] = board[i][j];
                }
            } 
            else{
                for(int j=m-1;j>=0;j--){
                    b[idx++] = board[i][j];
                }
            }
            leftToRight = !leftToRight;
        }
        return b;
    }

    int bfs(vector<int> b, int n, int m){
        vector<int> moves(n*m+1, 0);
        vector<bool> vis(n*m+1, false);
        queue<int> q;
        q.push(1);
        vis[1] = true;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            if(curr == n*m){
                return moves[curr];
            }
            for(int i=curr+1;i<=min(n*m,curr+6);i++){
                if(b[i] != -1){
                    if(!vis[b[i]]){
                        vis[b[i]] = true;
                        q.push(b[i]);
                        moves[b[i]] = moves[curr] + 1;
                    }
                }
                else if(!vis[i]){
                    vis[i] = true;
                    q.push(i);
                    moves[i] = moves[curr] + 1;
                }
            }
        }
        return -1;
    }

public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<int> b = flatten(board, n, m);
        return bfs(b, n, m);
    }
};
