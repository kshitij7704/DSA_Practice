// leetcode - 51

class Solution {
public:
    bool isSafe(int row, int col, vector<string> &board, int n){
        int temp_row = row;
        int temp_col = col;

        //Upper diagonal check on left side
        while(temp_row >= 0 && temp_col >= 0){
            if(board[temp_row][temp_col] == 'Q')
                return false;
            temp_row--;
            temp_col--;
        }

        temp_col = col;
        //Left side check
        while(temp_col >= 0){
            if(board[row][temp_col] == 'Q')
                return false;
            temp_col--;
        }

        temp_row = row;
        temp_col = col;
        //Lower Diagonal check on left side
        while(temp_row < n && temp_col >= 0){
            if(board[temp_row][temp_col] == 'Q')
                return false;
            temp_row++;
            temp_col--;
        }
        return true;
    }

    void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n){
        if(col == n){
            //If all queens are placed push back into the ans vector
            ans.push_back(board);
            return;
        }

        //Checking each row where the queen can be placed
        for(int row=0;row<n;row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                //Incrementing to next column to place the queen
                solve(col + 1, board, ans, n);
                board[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n){
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));
        solve(0, board, ans, n);
        return ans;
    }
};
