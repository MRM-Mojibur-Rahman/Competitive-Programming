#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool dfs(int i, int c, vector<vector<int>> &adj_list, vector<int> &vis, int &cnt0, int &cnt1)
{

    vis[i] = c;
    if (c == 0)
        cnt0++;
    else
        cnt1++;
    bool bip = true;
    for (auto it : adj_list[i])
    {
        if (vis[it] == -1)
        {
            if (!dfs(it, !c, adj_list, vis, cnt0, cnt1))
                bip = false;
        }
        else if (vis[it] == vis[i])
             bip= false;
    }
    return bip;
}
void solve()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_list(n + 1);
    vector<int> vis(n + 1, -1);

    while (e--)
    {
        int x, y;
        cin >> x >> y;
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }
    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == -1)
        {
            int cnt0 = 0, cnt1 = 0;
            if (dfs(i, 0, adj_list, vis, cnt0, cnt1))
                ans += max(cnt0, cnt1);
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
