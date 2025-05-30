// leetcode contest 451 - 2

class Solution {
public:
    string resultingString(string s) {
        int n = s.size();
        if (n < 2) return s;

        auto consec = [&](char a, char b){
            int d = abs(a - b);
            return d == 1 || d == 25;
        };
        
        vector<int> nxt(n), prv(n);
        vector<bool> alive(n, true);
        for (int i = 0; i < n; i++) {
            prv[i] = i - 1;
            nxt[i] = (i + 1 < n ? i + 1 : -1);
        }
        
        set<int> rem;
        for (int i = 0; i + 1 < n; i++) {
            if (consec(s[i], s[i+1]))
                rem.insert(i);
        }
        
        while (!rem.empty()) {
            int i = *rem.begin();
            rem.erase(rem.begin());
            int j = nxt[i];
            if (j < 0 || !alive[i] || !alive[j] || prv[j] != i) 
                continue;
            
            alive[i] = alive[j] = false;
            int L = prv[i], R = nxt[j];
            if (L != -1) nxt[L] = R;
            if (R != -1) prv[R] = L;
            
            if (L >= 0 && R >= 0 && consec(s[L], s[R])) {
                rem.insert(L);
            }
        }
        
        int head = -1;
        for (int i = 0; i < n; i++) {
            if (alive[i]) {
                head = i;
                break;
            }
        }
        if (head == -1) 
            return "";
        
        string ans;
        for (int cur = head; cur != -1; cur = nxt[cur]) {
            ans.push_back(s[cur]);
        }
        return ans;
    }
};
©leetcode
