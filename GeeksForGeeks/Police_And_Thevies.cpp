class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        vector<int> policemen;
        vector<int> thieves;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 'P'){
                policemen.push_back(i);
            }
            else if(arr[i] == 'T'){
                thieves.push_back(i);
            }
        }
        int i = 0, j = 0, caught = 0;
        while(i < policemen.size() && j < thieves.size()){
            if(abs(policemen[i] - thieves[j]) <= k){
                caught++;
                i++;
                j++;
            } 
            else if(policemen[i] < thieves[j]){
                i++;
            } 
            else{
                j++;
            }
        }
        return caught;
    }
};
