class Solution {
  public:
    string caseSort(string& s) {
        // code here
        int n = s.length();
        vector<bool> pos(n);
        vector<char> up;
        vector<char> low;
        for(int i=0;i<n;i++){
            if(isupper(s[i])){
                pos[i] = true;
                up.push_back(s[i]);
            }
            else{
                pos[i] = false;
                low.push_back(s[i]);
            }
        }
        sort(up.begin(), up.end());
        sort(low.begin(), low.end());
        int l = 0;
        int u = 0;
        string res = "";
        for(int i=0;i<pos.size();i++){
            if(pos[i]){
                res += up[u++];
            }
            else{
                res += low[l++];
            }
        }
        return res;
    }
};
