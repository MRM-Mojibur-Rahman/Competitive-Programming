#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n + 1), b(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }

    int mx = INT_MIN;
    map<int, vector<int>> mp;
    for (int i = 1; i <= n; i++)
    {
        mp[a[i] - b[i]].push_back(i);
        mx = max(mx, a[i] - b[i]);
    }
    cout << mp[mx].size() << endl;
    for (auto it : mp[mx])
        cout << it << " ";
    cout << endl;
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
