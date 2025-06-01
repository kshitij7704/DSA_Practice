class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        unordered_set<int> mat2Set;
        int n = mat1.size();
        int count = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat2Set.insert(mat2[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int complement = x - mat1[i][j];
                if(mat2Set.count(complement)){
                    count++;
                }
            }
        }
        return count;
    }
};
