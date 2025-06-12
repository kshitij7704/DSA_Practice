// leetcode - 3423

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int diff = abs(nums[i % n] - nums[(i+1) % n]);
            res = max(res, diff);
        }
        return res;
    }
};
