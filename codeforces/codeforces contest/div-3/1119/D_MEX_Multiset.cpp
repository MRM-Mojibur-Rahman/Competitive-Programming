#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    vector<char> ans(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    if (mp[0].size() == 1)
    {
        cout << "NO\n";
        return;
    }

    if (mp[0].size() > 1)
    {
        ans[mp[0][0]] = 'A';
        ans[mp[0][1]] = 'B';

        for (int i = 2; i < mp[0].size(); i++)
        {
            ans[mp[0][i]] = 'A';
        }
    }

    for (auto [x, y] : mp)
    {
        if (x != 0)
        {
            for (auto it : y)
                ans[it] = 'C';
        }
    }
    cout<<"YES\n";
    for (auto it : ans)
        cout << it;
    cout << endl;
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
