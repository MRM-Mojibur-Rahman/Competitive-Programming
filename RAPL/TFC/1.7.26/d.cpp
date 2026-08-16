#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string a;
    cin >> a;
    map<char, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    string s = "Anadaryy";
    ll ans = INT_MAX;
    for (auto it : s)
    {
        if (it != 'y' && it != 'a')
            ans = min(ans, mp[it]);
        else
            ans = min(ans, (mp[it] / 2));
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}
