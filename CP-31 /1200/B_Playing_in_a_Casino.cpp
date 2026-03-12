#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(m, vector<int>(n)), difa(m, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[j][i];
        }
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < m; i++)
    {
        sort(a[i].begin(), a[i].end());
    }
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        ll cnt = 0;
        ll sum = 0;

        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
            cnt += abs(a[i][j] * (j+ 1) - sum);
        }
        ans += cnt;
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
