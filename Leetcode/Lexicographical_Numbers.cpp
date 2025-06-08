// leetcode - 386

class Solution {
public:
    void find(int i, vector<int> &res, int n){
        //Base case
        if(i > n)
            return;

        //Adding the number first
        res.push_back(i);
        for(int j=0;j<10;j++){
            //Calling recursive method for each child of the number
            find(i * 10 + j, res, n);
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;

        for(int i=1;i<=9;i++){
            //Calling recursive method for each digit from 1-9
            find(i, res, n);
        }
        return res;
    }
};
