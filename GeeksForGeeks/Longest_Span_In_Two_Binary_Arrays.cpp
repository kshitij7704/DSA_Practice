class Solution {
  public:
    int longestCommonSum(vector<int> &a1, vector<int> &a2) {
        // Code here.
        int n = a1.size();
        unordered_map<int, int> prefixMap;
        int maxLen = 0;
        int currSum = 0;
        for(int i=0;i<n;i++){
            int diff = a1[i] - a2[i];
            currSum += diff;
            if(currSum == 0){
                maxLen = i + 1;
            }
            if(prefixMap.find(currSum) != prefixMap.end()){
                maxLen = max(maxLen, i - prefixMap[currSum]);
            } 
            else{
                prefixMap[currSum] = i;
            }
        }
        return maxLen;
    }
};
