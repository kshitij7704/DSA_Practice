// leetcode - 3355

class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> deltaArr(nums.size() + 1, 0);
        for(auto i : queries){
            int left = i[0];
            int right = i[1];
            deltaArr[left] += 1;
            deltaArr[right + 1] -= 1;
        }
        vector<int> opCounts;
        int currOps = 0;
        for(auto i : deltaArr){
            currOps += i;
            opCounts.push_back(currOps);
        }
        for(int i=0;i<nums.size();i++){
            if(opCounts[i] < nums[i]){
                return false;
            }
        }
        return true;
    }
};
