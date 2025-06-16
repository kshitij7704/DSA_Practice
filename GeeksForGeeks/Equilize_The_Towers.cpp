class Solution {
  using ll = long long;
  private:
     ll calculateCost(vector<int>& heights,vector<int>& cost, int target){
        ll Tcost = 0;
        for(int i=0;i<heights.size();i++){
            Tcost += 1LL * abs(heights[i] - target) * cost[i];
        }
        return Tcost;
     }
  
  public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int low = *min_element(heights.begin(), heights.end());
        int high = *max_element(heights.begin(), heights.end());
        ll res = LLONG_MAX;
        while(low <= high){
            int mid = low + (high - low) / 2;
            ll cMid = calculateCost(heights, cost, mid);
            ll cMidPlusOne = calculateCost(heights, cost, mid + 1);
            res = min(res, min(cMid, cMidPlusOne));
            if(cMid < cMidPlusOne){
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
        return res;  
    }
};
