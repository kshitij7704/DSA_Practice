// leetcode - 2131

class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int> mp;
        for(string word : words){
            mp[word]++;
        }
        int res = 0;
        bool hasMiddle = false;
        for(auto [word, count] : mp){
            string rev = string{word[1], word[0]};
            if(word == rev){
                int pairs = count / 2;
                res += pairs * 4;
                mp[word] -= pairs * 2;
                if(mp[word] > 0){
                    hasMiddle = true;
                }
            } 
            else if(mp.count(rev)){
                int pairs = min(count, mp[rev]);
                res += pairs * 4;
                mp[word] -= pairs;
                mp[rev] -= pairs;
            }
        }
        if(hasMiddle){
            res += 2;
        }
        return res;
    }
};
