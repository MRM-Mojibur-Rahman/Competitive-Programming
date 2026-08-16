#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    vector<ll> a1(n, 0), a2(n, 0);
    if (a[0] > 0)
        a1[0] = a[0];
    else
        a2[0] = -a[0];
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > 0)
        {
            a1[i] += a[i] + a1[i - 1];
            a2[i] = a2[i - 1];
        }
        else
        {
            a2[i] += -a[i] + a2[i - 1];
            a1[i] = a1[i - 1];
        }
    }
    sort(b.begin(), b.end());
    ll ans = 0;
    ll lst = -1;

    for (auto it : b)
    {
        if(lst!=-1)
        ans += abs(a1[it-1] - a1[lst] - (a2[it-1] - a2[lst]));
        else ans+=abs(a1[it-1]  - a2[it-1]);
       
        lst = it-1;
    }
    ans += a1[n-1] - a1[lst] -((a2[n-1] - a2[lst]));
    cout << ans << endl;
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
