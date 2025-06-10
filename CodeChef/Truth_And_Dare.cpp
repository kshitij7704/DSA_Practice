#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> g(t);

    while (t--)
    {
        int a = 0, b = 0, c = 0, d = 0;

        cin >> a;
        vector<int> w(a);
        for (int i = 0; i < a; i++)
            cin >> w[i];

        cin >> b;
        vector<int> x(b);
        for (int i = 0; i < b; i++)
            cin >> x[i];

        cin >> c;
        vector<int> y(c);
        for (int i = 0; i < c; i++)
            cin >> y[i];

        cin >> d;
        vector<int> z(d);
        for (int i = 0; i < d; i++)
            cin >> z[i];

        bool found = false;
        for (int i = 0; i < c; i++)
        {
            if (find(w.begin(), w.end(), y[i]) == w.end())
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            for (int i = 0; i < d; i++)
            {
                if (find(x.begin(), x.end(), z[i]) == x.end())
                {
                    found = true;
                    break;
                }
            }
        }

        (!found) ? cout << "yes\n" : cout << "no\n";
    }
}
