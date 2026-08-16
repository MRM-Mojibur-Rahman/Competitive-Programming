#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int block = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
            block++;
    }
    int ans = block;
    if (block == n)
        ans = block;
    else if (a[0] != a[n - 1])
        ans++;
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
