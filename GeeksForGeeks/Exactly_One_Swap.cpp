class Solution {
  using ll = long long;
  public:
    int countStrings(string &s) {
        // code here
        int n = s.size();
        ll total = 1LL * n * (n - 1) / 2;
        unordered_map<char, ll> freq;
        for(char c : s){
            freq[c]++;
        }
        ll swaps = 0;
        for(auto i : freq){
            int f = i.second;
            swaps += f * (f - 1) / 2;
        }
        return total - swaps + 1;
    }
};
