#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ni = n - 1 - i;
            int nj = n - 1 - j;

            if (i > ni || (i == ni && j > nj))
                continue;

            if (a[i][j] != a[ni][nj])
                cnt++;
        }
    }
    if (cnt > k)
        cout << "NO\n";
    else if ((k - cnt) % 2 == 0 || n % 2 == 1)
        cout << "YES\n";
    else
        cout << "NO\n";
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
