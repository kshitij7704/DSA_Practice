// leetcode - 3362

class Solution {
public:
    int maxRemoval(vector<int>& nums, vector<vector<int>>& queries) {
        sort(queries.begin(),queries.end());
        int n = queries.size();
        priority_queue<int> candidate;
        priority_queue<int, vector<int>, greater<int>> choosen;
        int remove = 0;
        for(int i=0,j=0;i<nums.size();i++){
            while(!choosen.empty() && choosen.top() < i){
                choosen.pop();
            }
            while(j < n && queries[j][0] <= i){
                candidate.push(queries[j][1]);
                j++;
            }
            while(choosen.size() < nums[i] && !candidate.empty() && candidate.top() >= i){
                choosen.push(candidate.top());
                candidate.pop();remove++;
            }
            if(choosen.size() < nums[i]){
                return -1;
            }
        }
        return n - remove;
    }
};
