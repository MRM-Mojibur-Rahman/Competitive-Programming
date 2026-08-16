#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int le = 0, re = 0;
    for (int i = 1; i < l; i++)
    {
        le += a[i];
    }

    for (int i = r + 1; i <= n; i++)
    {
        re += a[i];
    }
    cout << max(le, re) << endl;
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
