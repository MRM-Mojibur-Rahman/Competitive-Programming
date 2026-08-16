#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    bool is = false;
    vector<vector<int>>a(n);

    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        for (int j = 0; j < len; j++)
        {
            int x;
            cin >> x;
            a[i].push_back(x);
            mp[x]++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        bool iss=true;
        for(auto it:a[i])
        {
            if(mp[it]==1) iss = false;

        }
        if(iss) is = true;
    }
    
 

    if (is)
    {
        cout << "Yes\n";
        return;
    }

    cout << "No\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
