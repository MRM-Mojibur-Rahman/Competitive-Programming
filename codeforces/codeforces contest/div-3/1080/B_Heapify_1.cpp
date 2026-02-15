#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), tem;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<bool> vis(n+1, true);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i])
        {
            map<int, int> ele;
            vector<int> go;
            for (int j = i; j <= n; j *= 2)
            {
                go.push_back(j);
                ele[j] = -1;
            }
            for (auto it : go)
            {
                
                vis[it]=false;
                if (ele[a[it]] != -1)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    cout << "YES\n";
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
