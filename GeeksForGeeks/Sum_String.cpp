class Solution {
  private:
  // function to add to strings
  string add(string num1, string num2){
      string res;
      int carry = 0;
      int i = num1.size() - 1;
      int j = num2.size() - 1;
      while(i >= 0 || j >= 0 || carry){
          int sum = carry;
          if(i >= 0){
            sum += num1[i--] - '0';
          }
          if(j >= 0){ 
            sum += num2[j--] - '0';
          }
          res.push_back(sum % 10 + '0');
          carry = sum / 10;
      }
      reverse(res.begin(), res.end());
      return res;
  }
  
  // function to check validity
  bool isValid(string &s, int start, int len1, int len2){
        string s1 = s.substr(start, len1);
        string s2 = s.substr(start + len1, len2);
        if((s1.size() > 1 && s1[0] == '0') || (s2.size() > 1 && s2[0] == '0')){
            return false;
        }
        string sum = add(s1, s2);
        int sumLen = sum.length();
        int nextPos = start + len1 + len2;
        if(nextPos + sumLen > s.size()){
            return false;
        }
        if(s.substr(nextPos, sumLen) != sum){
            return false;
        }
        if(nextPos + sumLen == s.size()){
            return true;
        }
        return isValid(s, start + len1, len2, sumLen);
  }
  
  public:
    bool isSumString(string &s) {
        // code here
        int n = s.length();
        for(int i=1;i<=n/2;i++){
            for(int j=1;i+j<n;j++){
                if(isValid(s, 0, i, j)){
                    return true;
                }
            }
        }
        return false;
    }
};
