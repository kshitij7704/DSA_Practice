// leetcode - 52

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

    void solve(int col, vector<string> &board, int n, int &count){
        if(col == n){
            //If all queens are placed increment the counter
            count++;
            return;
        }

        //Checking each row where the queen can be placed
        for(int row=0;row<n;row++){
            if(isSafe(row, col, board, n)){
                board[row][col] = 'Q';
                //Incrementing to next column to place the queen
                solve(col + 1, board, n, count);
                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count = 0;
        solve(0, board, n, count);
        return count;
    }
};
