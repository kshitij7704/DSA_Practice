// leetcode - 3024

class Solution {
private:
    bool check(vector<int>& nums){
        if(nums[0] + nums[1] > nums[2] && nums[1] + nums[2] > nums[0] && nums[0] + nums[2] > nums[1]){
            return true;
        }
        else{
            return false;
        }
    }

    bool equi(vector<int>& nums){
        if(nums[0] == nums[1] && nums[1] == nums[2]){
            return true;
        }
        else{
            return false;
        }
    }

    bool iso(vector<int>& nums){
        if(nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]){
            return true;
        }
        else{
            return false;
        }
    }

public:
    string triangleType(vector<int>& nums) {
        if(check(nums)){
            if(equi(nums)){
                return "equilateral";
            }
            else if(iso(nums)){
                return "isosceles";
            }
            else{
                return "scalene";
            }
        }
        else{
            return "none";
        }
    }
};
