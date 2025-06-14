class Solution {
  public:
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int res = high;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int sum = 0;
            for(int num : arr){
                sum += (num + mid - 1) / mid;
            }
            if(sum <= k){
                res = mid;
                high = mid - 1;
            } 
            else{
                low = mid + 1;
            }
        }
        return res;   
    }
};
