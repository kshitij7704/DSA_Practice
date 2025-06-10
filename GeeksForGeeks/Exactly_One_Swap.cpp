class Solution {
  public:
    int countStrings(string &s) {
        unordered_set<string> uniqueStrings;
        int n = s.size();
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (i == j) continue;
                
                // Swap characters
                swap(s[i], s[j]);
                uniqueStrings.insert(s);
                // Swap back to original
                swap(s[i], s[j]);
            }
        }
        return uniqueStrings.size();
    }
};
