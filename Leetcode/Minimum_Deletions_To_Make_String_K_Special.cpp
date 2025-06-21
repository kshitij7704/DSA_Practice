class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char, int> freq;
        for(char ch : word){
            freq[ch]++;
        }
        int res = word.size();
        for(const auto& [charA, freqA] : freq){
            int deletions = 0;
            for(const auto& [charB, freqB] : freq){
                if(freqA > freqB){
                    deletions += freqB;
                } 
                else if(freqB > freqA + k){
                    deletions += freqB - (freqA + k);
                }
            }
            res = min(res, deletions);
        }
        return res;
    }
};
