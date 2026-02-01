#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
    if (x % k == 0)
    {
        cout << 0 << endl;
        return;
    }
    int rem1 = x % k;
    int rem2 = k - rem1;
    if (rem2 > (n - x) || x==n)
        cout << rem1 << endl;
    else
        cout << min(rem1, rem2) << endl;
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
