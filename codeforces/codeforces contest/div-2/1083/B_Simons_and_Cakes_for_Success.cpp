#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;

    set<ll> s;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            s.insert(i);
            n /= i;
        }
    }
    if(n>1) s.insert(n);
    ll ans = 1;
    for (auto it : s)
        ans *= it;
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
