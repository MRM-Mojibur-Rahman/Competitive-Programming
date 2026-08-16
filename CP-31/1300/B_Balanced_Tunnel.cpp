#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    map<int, bool> vis;
    for (int i = 0; i < n; i++)
    {
        vis[a[i]] = false;
    }
    int r = 0, l = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        if (!vis[a[i]])
        {
            while (r < n && b[r] != a[i])
            {
                vis[b[r]] = true;
                r++;
            }
            cnt +=(r - l) ;
            l = r+1;
            r++;
            
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
