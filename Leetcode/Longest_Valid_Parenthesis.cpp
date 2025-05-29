// leetcode - 32

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int ans = 0;
        int max1 = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(')
                st.push(i);
            else{
                st.pop();
                if(st.empty())
                    st.push(i);
                else{
                    ans = i - st.top();
                    max1 = max(ans, max1);
                }
            }
        }
        return max1;
    }
};
