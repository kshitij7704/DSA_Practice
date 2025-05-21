// leetcode - 289

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> res = board;
        int n = board.size();
        int m = board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int live = 0;
                int dead = 0;
                if(i-1 >= 0){
                    if(board[i-1][j] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(i-1 >= 0 && j+1 < m){
                    if(board[i-1][j+1] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(j+1 < m){
                    if(board[i][j+1] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(i+1 < n && j+1 < m){
                    if(board[i+1][j+1] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(i+1 < n){
                    if(board[i+1][j] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(i+1 < n && j-1 >= 0){
                    if(board[i+1][j-1] == 0){
                        dead++;
                    }
                    else{ 
                        live++;
                    }
                }
                if(j-1 >= 0){
                    if(board[i][j-1] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(i-1 >= 0 && j-1 >= 0){
                    if(board[i-1][j-1] == 0){
                        dead++;
                    }
                    else{
                        live++;
                    }
                }
                if(live > 3 || live < 2){
                    res[i][j] = 0;
                }
                if(live == 3){
                    res[i][j] = 1;
                }
            }
        }
        board = res;
    }
};
