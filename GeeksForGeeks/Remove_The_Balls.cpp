class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        int n = color.size();
        stack<pair<int, int>> st;
        for(int i=0;i<n;i++){
            auto curr = {color[i], radius[i]};
            if(!st.empty() && st.top() == curr){
                st.pop();
            } 
            else{
                st.push(curr);
            }
        }
        return st.size();
    }
};
