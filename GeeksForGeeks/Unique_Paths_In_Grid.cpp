class Solution {
  private:
    int solve(int i, int j, vector<vector<int>>  &grid, int n, int m, vector<vector<int>> &dp){
        // out of bound
        if(i >= n || j >= m || grid[i][j] == 1){
            return 0;
        }
        // reached
        if(i == n - 1 && j == m - 1){
            return 1;
        }
        // check dp
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int right = solve(i + 1, j, grid, n, m, dp);
        int down = solve(i, j + 1, grid, n, m, dp);
        return dp[i][j] = right + down;
    }
    
  public:
    int uniquePaths(vector<vector<int>> &grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1){
            return 0;
        }
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(0, 0, grid, n, m, dp);
    }
};
