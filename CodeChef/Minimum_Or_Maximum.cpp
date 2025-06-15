#include<iostream>

#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int e = 1, s = 0, w = 0;
        for (int i = 1; i < n; i++)
        {

            int x = * min_element(a, a + e);
            int y = * max_element(a, a + e);
            if (a[i] <= x)
                s++;
            else if (a[i] >= y)
                s++;
            else
            {
                w++;
                break;
            }
            e++;
        }
        if (w > 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
