#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n + 2);
    a[0] = 0;
    a[n + 1] = x;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 1; i < n + 2; i++)
    {
        if (i != n + 1)
            ans = max(ans, a[i] - a[i - 1]);
        else
            ans = max(ans, 2 * (a[i] - a[i - 1]));
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
