// Leetcode - 88

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<m;i++){
            pq.push(nums1[i]);
        }
        for(int i=0;i<n;i++){
            pq.push(nums2[i]);
        }
        nums1.clear();
        while(!pq.empty()){
            nums1.push_back(pq.top());
            pq.pop();
        }
    }
};
