// leetcode - 1432

class Solution {
private:
    string change(int num, int x, int y){
        string numStr = to_string(num);
        for(char &i : numStr){
            if(i - '0' == x){
                i = '0' + y;
            }
        }
        return numStr;
    }

public:
    int maxDiff(int num) {
        int mini = num;
        int maxi = num;
        for(int x=0;x<10;x++){
            for(int y=0;y<10;y++){
                string res = change(num, x, y);
                if(res[0] != '0'){
                    int temp = stoi(res);
                    mini = min(mini, temp);
                    maxi = max(maxi, temp);
                }
            }
        }
        return maxi - mini;
    }
};
