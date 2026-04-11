#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> ams(m);
        for (int j = 0; j < m; j++)
        {
            cin >> ams[j];
        }
        sort(ams.begin(), ams.end());
        a[i] = ams;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    int lmin = INT_MAX, rMin = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans += a[i][1];
        rMin = min(a[i][1], rMin);
        lmin = min(lmin, a[i][0]);
    }
    cout << ans - (rMin - lmin) << endl;
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
