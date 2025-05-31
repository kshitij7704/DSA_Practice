class Solution {
  public:
    int kthSmallest(vector<vector<int>> &matrix, int k) {
        // code here
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> mat;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mat.push_back(matrix[i][j]);
            }
        }
        sort(mat.begin(), mat.end());
        return mat[k-1];
    }
};
