class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 1;
        int temp = nums[0];
        for(int i=0;i<n;i++){
            if(nums[i] - temp > k){
                res++;
                temp = nums[i];
            }
        }
        return res;
    }
};
