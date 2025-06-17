class Solution {
  private:
    using ll = long long;
  public:
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<ll> prefix(n + 1, 0);
        for(int i=0;i<n;i++){
            prefix[i + 1] = prefix[i] + arr[i];
        }
        ll minRemoved = LLONG_MAX;
        for(int i=0;i<n;i++){
            int x = arr[i];
            int upper = upper_bound(arr.begin(), arr.end(), x + k) - arr.begin();
            ll leftRemove = prefix[i];
            ll rightRemove = prefix[n] - prefix[upper] - 1LL * (n - upper) * (x + k);
            ll totalRemove = leftRemove + rightRemove;
            minRemoved = min(minRemoved, totalRemove);
        }
        return (int)minRemoved;      
    }
};
