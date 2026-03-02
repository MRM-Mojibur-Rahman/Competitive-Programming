#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1009;
vector<vector<bool>> vis(mxn, vector<bool>(mxn, false));
vector<vector<int>> graph(mxn, vector<int>(mxn, 0));

int n, m;

int dfs(int i, int j)
{
    if (i >= n || j >= m || i < 0 || j < 0)
        return 0;

    if (vis[i][j] || graph[i][j] == 0)
        return 0;

    vis[i][j] = true;

    return graph[i][j] + dfs(i + 1, j) + dfs(i - 1, j) + dfs(i, j + 1) + dfs(i, j - 1);
}
void solve()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            graph[i][j] = 0;
            vis[i][j] = false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> graph[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (graph[i][j] && !vis[i][j])
            {
                ans = max(ans, dfs(i, j));
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
