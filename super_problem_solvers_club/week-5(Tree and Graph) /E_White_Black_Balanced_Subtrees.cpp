#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 4010;
string a;
vector<int> adj[mxn], black(mxn, 0), white(mxn, 0);

void dfs(int rt)
{
    for (auto it : adj[rt])
    {
        dfs(it);
        white[rt] += white[it];
        black[rt] += black[it];
    }

    if (a[rt - 1] == 'W')
        white[rt]++;
    else
        black[rt]++;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        white[i] = 0;
        black[i] = 0;
    }
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }
    cin >> a;
    dfs(1);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (white[i] == black[i])
            ans++;
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
