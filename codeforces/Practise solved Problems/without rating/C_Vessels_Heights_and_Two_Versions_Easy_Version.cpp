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

    for (ll k = 0; k < n; k++)
    {
        vector<ll> left(n - 1), right(n - 1);
        ll mx = 0;
        for (ll i = 0; i < n - 1; i++)
        {

            ll l = (k + i ) % n;
            mx = max(mx, a[l]);
            left[i] = mx;
        }
        mx = 0;
        for (ll i = n - 2; i >= 0; i--)
        {
            ll l = (k + i + 1) % n;
            mx = max(mx, a[l]);
            right[i] = mx;
        }
        ll ans = 0;
        // for(auto it:left) cout<<it<<" ";
        // cout<<endl;
        // for(auto it:right) cout<<it<<" ";
        // cout<<endl;
        for (ll i = 0; i < n - 1; i++)
        {
            ans += min(left[i], right[i]);
        }
        cout << ans << " ";
    }
    cout << endl;
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
