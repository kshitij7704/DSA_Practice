class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> umap;
        for(auto i : s){
            umap[i]++;
        }
        int maxOdd = INT_MIN;
        int minEven = INT_MAX;
        for(auto i : umap){
            int freq = i.second;
            if(freq % 2 == 0){
                minEven = min(minEven, freq);
            } 
            else{
                maxOdd = max(maxOdd, freq);
            }
        }
        if(maxOdd != INT_MIN && minEven != INT_MAX){
            return maxOdd - minEven;
        } 
        else{
            return 0;
        }    
    }
};
