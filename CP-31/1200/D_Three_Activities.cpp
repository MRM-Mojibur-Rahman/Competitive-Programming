#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n), b(n), c(n);
    vector<vector<pair<int, int>>> mx(3);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[i] = {x, i};
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        c[i] = {x, i};
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());
    int idx = 0;
    for (int i = 0; i < 3; i++)
    {
        mx[0].push_back(a[i]);
        mx[1].push_back(b[i]);
        mx[2].push_back(c[i]);
    }
    ll ans = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (auto [x,y]:mx[i])
    //     {
    //         cout<<x<<","<<y<<" ";
    //     }
    //     cout<<endl;
    // }

    for (int i = 0; i < 3; i++)
    {
        // cout << "a" << endl;
        ll tem1 = mx[0][i].first;
        // cout << mx[0][i].first << "," << mx[0][i].second << endl;

        for (auto it1 : mx[1])
        {
            // cout << 'b' << endl;
            if (it1.second == mx[0][i].second)
                continue;
            ll tem2 = it1.first;
            // cout << it1.first << "," << it1.second << endl;

            for (auto it2 : mx[2])
            {
                // cout << 'c' << endl;
                if (it2.second == mx[0][i].second || it2.second == it1.second)
                    continue;
                // cout << it2.first << "," << it2.second << endl;

                ll tem3 = it2.first;
                ans = max(ans, tem1 + tem2 + tem3);
            }
        }
    }
    cout << ans << endl;
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
