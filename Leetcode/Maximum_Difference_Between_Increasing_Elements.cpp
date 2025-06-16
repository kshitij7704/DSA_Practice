class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int res = INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                res = max(res, nums[j] - nums[i]);
            }
        }
        return res;
    }
};
