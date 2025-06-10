class Solution {
  public:
    int countStrings(string &s) {
        // code here
        int n = s.size();
        unordered_set<string> st;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i == j){
                    continue;
                }
                swap(s[i], s[j]);
                st.insert(s);
                swap(s[i], s[j]);
            }
        }
        return st.size();
    }
};
