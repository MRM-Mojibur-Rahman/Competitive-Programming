#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    vector<vector<int>> ls(n + 1, vector<int>(31)), rs(n + 1, vector<int>(31));
    for (int j = 0; j <= 30; j++)
    {
        if (a[0] & (1 << j))
            ls[0][j]++;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= 30; j++)
        {
            if (a[i] & (1 << j))
                ls[i][j] += ls[i - 1][j] + 1;
            else
                ls[i][j] = ls[i - 1][j];
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= 30; j++)
        {
            if (a[i] & (1 << j))
            {
                rs[i][j] += rs[i + 1][j] + 1;
            }
            else
                rs[i][j] = rs[i + 1][j];
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        bool f = true;
        for (int j = 0; j <= 30; j++)
        {
            if (ls[i][j] != rs[i+1][j])
            {
                f = false;
                break;
            }
        }

        if (f)
        {
            cout << "YES\n";
            return;
        }
    }
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
