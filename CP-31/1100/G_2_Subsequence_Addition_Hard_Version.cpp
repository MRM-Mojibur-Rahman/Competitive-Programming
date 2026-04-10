#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end());
    vector<ll> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
    if (a[1] != 1)
    {
        cout << "NO\n";
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] > pre[i - 1])
        {
            cout << "NO\n";
            return;
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
