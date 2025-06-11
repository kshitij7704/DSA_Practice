class Solution {
  public:
    int findLength(vector<int> &color, vector<int> &radius) {
        // code here
        stack<pair<int, int>> stk;

        for (int i = 0; i < color.size(); ++i) {
            pair<int, int> current = {color[i], radius[i]};
            
            if (!stk.empty() && stk.top() == current) {
                // Remove both if top of stack is the same as current
                stk.pop();
            } else {
                stk.push(current);
            }
        }

        return stk.size();
    }
};
