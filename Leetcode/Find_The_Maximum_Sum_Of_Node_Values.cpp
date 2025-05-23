// leetcode - 3068

class Solution {
private:
    long long maxSumOfNodes(int index, int isEven, int n, vector<int>& nums, int k, vector<vector<long long>>& dp) {
        if(index == n){
            // If the operation is performed on an odd number of elements return INT_MIN
            if(isEven == 1){
                return 0;
            }
            else{
                return INT_MIN;
            }
        }
        if(dp[index][isEven] != -1){
            return dp[index][isEven];
        }
        // No operation performed on the element
        long long noXorDone = nums[index] + maxSumOfNodes(index + 1, isEven, n, nums, k, dp);
        // XOR operation is performed on the element
        long long xorDone = (nums[index] ^ k) + maxSumOfNodes(index + 1, isEven ^ 1, n, nums, k, dp);
        // Memoize and return the result
        return dp[index][isEven] = max(xorDone, noXorDone);
    }

public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<vector<long long>> dp(n, vector<long long>(2, -1));
        return maxSumOfNodes(0, 1, n, nums, k, dp);
    }
};
