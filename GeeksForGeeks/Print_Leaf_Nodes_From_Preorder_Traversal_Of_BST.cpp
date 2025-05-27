class Solution {
  private:
  void solve(vector<int> &pre, int &ind, int minVal, int maxVal, vector<int> &res){
        if(ind >= pre.size() || pre[ind] < minVal || pre[ind] > maxVal){
            return;
        }

        int root = pre[ind];
        ind++;
        int currentInd = ind;
        
        // Finding left child
        solve(pre, ind, minVal, root - 1, res);
        
        // Finding right child
        solve(pre, ind, root + 1, maxVal, res);
        
        // If no child then leaf
        if(currentInd == ind){
            res.push_back(root);
        }
  }
  
  public:
    vector<int> leafNodes(vector<int>& preorder) {
        // code here
        vector<int> res;
        int ind = 0;
        solve(preorder, ind, INT_MIN, INT_MAX, res);
        return res;
    }
};
