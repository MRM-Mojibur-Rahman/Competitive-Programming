#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 2e5 + 2;
vector<int> cats(mxn);
vector<int> adj[mxn];
int ans = 0;
int n, m;

void dfs(int node, int parents, int mxcat, int catsum)
{
    // cout<<catsum<<endl;

    if (cats[node])
    {
        catsum++;
        mxcat = max(catsum, mxcat);
    }
    else
    {
        mxcat = max(catsum, mxcat);
        catsum = 0;
    }

    if (adj[node].size() == 1 && node != 1)
    {
        if (mxcat <= m)
            ans++;
        return;
    }
    for (auto it : adj[node])
    {
        if (parents == it)
            continue;

        dfs(it, node, mxcat, catsum);
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cats[i];
    }

    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(1, 0, 0, 0);
    cout << ans << endl;

    return 0;
}
