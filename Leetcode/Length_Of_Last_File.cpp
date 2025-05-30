// leetcode - 58

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int i = s.length() - 1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        while(i>=0){
            if (s[i] != ' ') 
                len++;
            else
                break;
            i--;
        }
        return len;
    }
};
