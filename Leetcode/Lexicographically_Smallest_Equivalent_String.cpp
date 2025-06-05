// leetcode - 1061

class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr){
        bool alphabet[26][26] = {false};
        for(int i=0;i<26;i++)
            alphabet[i][i] = true;
        
        for(int i=0;i<s1.length();i++){
            alphabet[s1[i] - 'a'][s2[i] - 'a'] = true;
            alphabet[s2[i] - 'a'][s1[i] - 'a'] = true;
            for(int j=0;j<26;j++){
                if(j == s1[i] - 'a' || j == s2[i] - 'a')
                    continue;
                if(alphabet[j][s1[i] - 'a'] || alphabet[j][s2[i] - 'a']){
                    for(int k=0;k<26;k++){
                        alphabet[s1[i] - 'a'][k] |= alphabet[j][k];
                        alphabet[s2[i] - 'a'][k] |= alphabet[j][k];
                        alphabet[j][k] |= alphabet[s1[i] - 'a'][k];
                        alphabet[j][k] |= alphabet[s2[i] - 'a'][k];
                    }
                }
            }
        }

        string ans = "";
        for(int i=0;i<baseStr.length();i++){
            for(int j = 0; j < 26; ++j){
                if(alphabet[baseStr[i] - 'a'][j]){
                    ans += j + 'a';
                    break;
                }
            }
        }

        return ans;    
    }
};
