#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll fedor;
    cin >> fedor;
    ll ans = 0;
    for (int i = 0; i < m; i++)
    {
        if (__builtin_popcount((a[i] ^ fedor)) <= k)
            ans++;
    }
    cout << ans << endl;

    return 0;
}
