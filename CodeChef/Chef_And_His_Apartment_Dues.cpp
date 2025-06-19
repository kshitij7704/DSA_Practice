#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int s[n];
        int fine = 0;
        int count = 0;
        
        for(int j = 0; j < n; j++) {
            cin >> s[j];
            
            if(s[j] == 0) {
                count++;
                fine += 100;
            }
            else if(count>0){
                fine+=100;
            }
        }
        
        int dues = count * 1000 + fine;
        cout << dues << endl;
    }
    
    return 0;
}
