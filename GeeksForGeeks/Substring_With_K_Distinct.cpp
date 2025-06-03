class Solution {
  private:
    int solve(string &s, int k){
        int left = 0, right = 0, count = 0;
        unordered_map<char, int> umap;
        
        for(right = 0; right < s.length(); right++){
            if(umap[s[right]] == 0){
                k--;
            }
            umap[s[right]]++;
            
            while(k < 0){
                umap[s[left]]--;
                if(umap[s[left]] == 0){
                    k++;
                }
                left++;
            }
            count += right - left + 1;
        }
        
        return count;
    }
    
  public:
    int countSubstr(string& s, int k) {
        return solve(s, k) - solve(s, k - 1);
    }
};
