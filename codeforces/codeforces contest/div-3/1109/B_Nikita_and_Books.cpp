#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    ll ex = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > i + 1)
           { ex += a[i] - i - 1;
        a[i]-=a[i] - i - 1;}
        else
        {
            if (a[i] + ex < i + 1)
            {
                cout << "NO\n";
                return;
            }
            else
            {
                ex -= (i + 1 - a[i]);
                a[i] += (i + 1 - a[i]);
            }
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
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

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
