#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    ll sum = 0;
    ll mn = INT_MAX;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            if (x < 0)
                neg++;
            sum += abs(x);
            mn = min(mn, abs(x));
        }
    }
    if (neg % 2 == 1)
    {
        sum -= (2 * mn);
    }
    cout << sum << endl;
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
