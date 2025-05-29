// leetcode - 48

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose of matrix
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(i < j)
                    swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Flip vertical of matrix
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size()/2;j++){
                swap(matrix[i][j], matrix[i][matrix.size()-1-j]);
            }
        }
    }
};
