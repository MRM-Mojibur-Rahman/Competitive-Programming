#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    if (k > n / 2)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] != 'R')
            ans++;
    }
    for (int i = 0; i < k; i++)
    {
        if (a[n - 1 - i] != 'L')
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
