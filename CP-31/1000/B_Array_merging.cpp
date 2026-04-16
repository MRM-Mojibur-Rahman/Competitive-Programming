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
    map<int, int> up, down;
    int i = 0;
    while (i < n)
    {
        int last = a[i];
        int cnt = 0;
        while (i < n && last == a[i])
        {
            i++;
            cnt++;
        }
        up[last] = max(up[last], cnt);
      
    }

    i = 0;
    while (i < n)
    {
        int last = b[i];
        int cnt = 0;

        while (i < n && last == b[i])
        {
            i++;
            cnt++;
        }
        down[last] = max(down[last], cnt);
        
    }
    int ans = 0;

    for (auto [x, y] : up)
    {
        ans = max(ans, y + down[x]);
    }
    for (auto [x, y] : down)
    {
        ans = max(ans, y + up[x]);
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
