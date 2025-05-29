// leetcode - 38

class Solution {
private:
    string solve(int n){
        if(n == 1){
            return "1";
        }
        string prev = solve(n - 1);
        if(prev == "1"){
            return "11";
        }
        int prevCount = 1;
        string res = "";
        char repeat = prev[0];
        for(int i=1;i<prev.size();i++){
            char curr = prev[i];
            if(curr == repeat){
                prevCount++;
            }
            else{
                res.push_back(prevCount + '0');
                res.push_back(repeat);
                repeat = curr;
                prevCount = 1;
            }
        }
        res.push_back(prevCount + '0');
        res.push_back(repeat);
        return res;
    }

public:
    string countAndSay(int n) {
        return solve(n);
    }
};
