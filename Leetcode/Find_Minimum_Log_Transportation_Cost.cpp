// leetcode contest 451 - 1

class Solution {
private:
    long long cutCost(int x, int k){
        return 1LL * k * (x - k);
    }

public:
    long long minCuttingCost(int n, int m, int k) {
        if (n <= k && m <= k){
            return 0;
        }        
        if (n <= k){
            return cutCost(m, k);
        }
        if (m <= k){
            return cutCost(n, k);
        }
        return min(cutCost(n, k), cutCost(m, k));
    }
};©leetcode
