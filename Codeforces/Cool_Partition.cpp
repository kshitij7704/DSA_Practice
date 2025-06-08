// Submission ID - 323461040

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<int> req(n+1, 0), present(n+1, 0);
        int need = 0;   
        int segments = 0;
        vector<int> new_elems;

        for(int x : a){
            if(req[x] > 0){
                if(--req[x] == 0)
                    --need;
            }
            if(!present[x]){
                present[x] = 1;
                new_elems.push_back(x);
            }
            if(need == 0 && !new_elems.empty()){
                segments++;
                for(int v : new_elems){
                    req[v] = 1;
                    present[v] = 0;
                }
                need = new_elems.size();
                new_elems.clear();
            }
        }

        cout << segments << "\n";
    }
    return 0;
}
