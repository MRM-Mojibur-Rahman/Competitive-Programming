#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    ll xr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        xr ^= a[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    else if (xr == 0)
    {
        cout << 1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
    
        if ((xr^a[i]) <= a[i])
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
