class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        priority_queue<pair<int, int>> maxHeap;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == x){
                continue;
            }
            int dist = abs(arr[i] - x);
            maxHeap.push({dist, -arr[i]});
            if(maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        vector<int> result;
        while (!maxHeap.empty()) {
            result.push_back(-maxHeap.top().second);
            maxHeap.pop();
        }
        sort(result.begin(), result.end(), [&](int a, int b){
            int d1 = abs(a - x), d2 = abs(b - x);
            if (d1 != d2) return d1 < d2;
            return a > b;
        });
        return result;
    }
};
