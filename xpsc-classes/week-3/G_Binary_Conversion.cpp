#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;
        int dsimi = 0;
        int ones = 0, onet = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
                dsimi++;
            if (s[i] == '1')
                ones++;
            if (t[i] == '1')
                onet++;
        }
        if (onet != ones || (k == 2 && dsimi == 2 && n == 2))
        {
            cout << "NO\n";
            continue;
        }
        if(2*k>=dsimi)
        {
            cout<<"YES\n";
        }
        else  cout << "NO\n";
    }
    return 0;
}
