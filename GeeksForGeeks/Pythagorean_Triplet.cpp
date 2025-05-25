class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        unordered_set<int> squares;
        for(int num : arr){
            squares.insert(num * num);
        }
        int n = arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = arr[i] * arr[i] + arr[j] * arr[j];
                if(squares.count(sum)){
                    return true;
                }
            }
        }
        return false;
    }
};
