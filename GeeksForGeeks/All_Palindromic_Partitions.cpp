class Solution {
  private:
    bool isPalindrome(string s, int st, int end){
        while(st < end){
            if(s[st++] != s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void solve(string &s, int st, vector<string> &curr, vector<vector<string>> &res){
        if(st == s.length()){
            res.push_back(curr);
            return;
        }
        for(int i=st;i<s.length();i++){
            if(isPalindrome(s, st, i)){
                curr.push_back(s.substr(st, i - st + 1));
                solve(s, i+1, curr, res);
                curr.pop_back();
            }
        }
    }
    
  public:
    vector<vector<string>> palinParts(string &s) {
        // code here
        vector<string> curr;
        vector<vector<string>> res;
        solve(s, 0, curr, res);
        return res;
    }
};
