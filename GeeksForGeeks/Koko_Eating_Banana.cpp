class Solution {
  private:
    int getHours(vector<int>& arr, int speed){
        int hr = 0;
        for(int i : arr){
            hr += (i + speed - 1) / speed;
        }
        return hr;
    }
  
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int req = getHours(arr, mid);
            if(req <= k){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
