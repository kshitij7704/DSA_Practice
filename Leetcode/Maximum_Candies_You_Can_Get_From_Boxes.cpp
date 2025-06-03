// leetcode 1298

class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        int n = status.size();
        vector<bool> canOpen(n);
        vector<bool> hasBox(n);
        vector<bool> used(n);
        for(int i=0;i<n;i++){
            if(status[i] == 1){
                canOpen[i] = true;
            }
            else{
                canOpen[i] = false;
            }
        }
        queue<int> q;
        int res = 0;
        for(int i : initialBoxes){
            hasBox[i] = true;
            if(canOpen[i]){
                q.push(i);
                used[i] = true;
                res += candies[i];
            }
        }
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            for(int i : keys[curr]){
                canOpen[i] = true;
                if(!used[i] && hasBox[i]){
                    q.push(i);
                    used[i] = true;
                    res += candies[i];
                }
            }
            for(int i : containedBoxes[curr]){
                hasBox[i] = true;
                if(!used[i] && canOpen[i]){
                    q.push(i);
                    used[i] = true;
                    res += candies[i];
                }
            }
        }
        return res;
    }
};
