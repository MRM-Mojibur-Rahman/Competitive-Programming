#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    if (s > (b * k) + n * (k - 1) || s < (b * k))
    {
        cout << -1 << endl;
        return;
    }

    ll extra = s - (k * b);

    ll total = b;
    for (int i = 0; i < n; i++)
    {
        ll p1 = 0, p2 = 0;
        if (total != 0 && total >= (n / b) && i != n - 1)
        {
            p1 = (n / b) * k;
            total -= n / b;
        }
        else
            p1 = total * k, total = 0;

        if (extra >= (k - 1))
            p2 = k - 1, extra -= (k - 1);
        else
            p2 = extra, extra = 0;
        cout << p1 + p2 << " ";
    }
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
