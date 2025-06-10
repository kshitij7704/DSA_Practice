class Solution {
  using ll = long long;
  public:
    int countStrings(string &s) {
        // code here
        int n = s.size();
        vector<ll> freq(256, 0);
        for(char c : s){ 
            freq[(unsigned char)c]++;
        }
        ll totalPairs = 1LL * n * (n - 1) / 2;
        ll samePairs = 0;
        for(ll f : freq){
            samePairs += f * (f - 1) / 2;
        }
        ll diffPairs = totalPairs - samePairs;
        if (samePairs > 0){
            return int(diffPairs + 1);
        }
        else{
            return int(diffPairs);
        }
    }
};
