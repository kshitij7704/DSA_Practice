// leetcode - 2016

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int res = -1;
        int preMin = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] > preMin){
                res = max(res, nums[i] - preMin);
            }
            else{
                preMin = nums[i];
            }
        }
        return res;
    }
};
