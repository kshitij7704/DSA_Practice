class Solution {
  public:
    int countStrings(string &s) {
        // code here
        unordered_set<string> st;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (i == j) continue;
                swap(s[i], s[j]);
                st.insert(s);
                swap(s[i], s[j]);
            }
        }
        return st.size();
    }
};
