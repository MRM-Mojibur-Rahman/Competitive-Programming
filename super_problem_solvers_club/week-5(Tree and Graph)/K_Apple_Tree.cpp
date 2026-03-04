#include <bits/stdc++.h>
using namespace std;

const int mxn = 2e5 + 10;

vector<int> adj[mxn];
long long leaf[mxn];

long long dfs(int node, int parent)
{
    bool isLeaf = true;
    long long cnt = 0;

    for (auto child : adj[node])
    {
        if (child == parent) continue;

        isLeaf = false;
        cnt += dfs(child, node);
    }

    if (isLeaf) cnt = 1;

    leaf[node] = cnt;
    return cnt;
}

void solve()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        adj[i].clear();
        leaf[i] = 0;
    }

    for(int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, 0);

    int q;
    cin >> q;

    while(q--)
    {
        long long x, y;
        cin >> x >> y;

        cout << leaf[x] * leaf[y] << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}