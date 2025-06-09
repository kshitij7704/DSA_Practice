// leetcode - 440

// TLE
class Solution {
private:
    void find(int i, vector<int> &res, int n){
        //Base case
        if(i > n){
            return;
        }
        //Adding the number first
        res.push_back(i);
        for(int j=0;j<10;j++){
            //Calling recursive method for each child of the number
            find(i * 10 + j, res, n);
        }
    }

    vector<int> getLexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=9;i++){
            //Calling recursive method for each digit from 1-9
            find(i, res, n);
        }
        return res;
    }

public:
    int findKthNumber(int n, int k) {
        vector<int> lexical = getLexicalOrder(n);
        return lexical[k - 1];
    }
};


// Accepted
class Solution {
private:
    using int64 = long long;
    int64 countPrefix(int64 prefix, int n) {
        int64 count = 0;
        int64 curr = prefix;
        int64 next = prefix + 1;
        while(curr <= n){
            count += min((int64)n + 1, next) - curr;
            curr *= 10;
            next *= 10;
        }
        return count;
    }

public:
    int findKthNumber(int n, int k) {
        int64 curr = 1;
        k -= 1;
        while(k > 0){
            int64 count = countPrefix(curr, n);
            if(count <= k){
                curr++;
                k -= count;
            } 
            else{
                curr *= 10;
                k -= 1;
            }
        }
        return curr;
    }
};
