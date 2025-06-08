// leetcode - 169

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 1;
        int maj = nums[0];
        for(int i=1;i<nums.size();i++){
            if(freq == 0){
                maj = nums[i];
                freq++;
            }
            else{
                if(maj == nums[i]){
                    freq++;
                }
                else{
                    freq--;
                }
            }
        }
        return maj;
    }
};
