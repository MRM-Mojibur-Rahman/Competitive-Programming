#include <bits/stdc++.h>
using namespace std;

const int mxn = 1e5 + 5;
vector<int> adj[mxn];
int ans = 0;

int dfs(int node, int par)
{
    int sz = 1;

    for (auto child : adj[node])
    {
        if (child == par) continue;

        int sub = dfs(child, node);

        if (sub % 2 == 0)
            ans++;
        else
            sz += sub;
    }

    return sz;
}

int main()
{
    int n;
    cin >> n;
    if(n%2==1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, 0);

    cout << ans << endl;
}